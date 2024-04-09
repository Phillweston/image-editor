#include "Image.h"
#include <QColor>
#include "Pixel.h"
#include <algorithm>
#include <cmath>
#include "QFileInfo"
#include <QErrorMessage>

using namespace std;

ImageOperate::ImageOperate(const QString &path) : rawImage(path), path(path), isImageValid(true) {
    if(rawImage.isNull()){
        isImageValid = false;
    }
    rawImage = rawImage.convertToFormat(QImage::Format_ARGB32); //only 32bit depth supported(auto conversion)
    w = rawImage.width();                                        //it's a 24bit (8*3) + alpha channel (8bit)
    h = rawImage.height();

    pixelBuffer.reserve(getSize());
    initPixelBuffer();
    pureFilename();
}

void ImageOperate::pureFilename() {
    QFileInfo qFilename(path);
    filename = qFilename.fileName();
}

void ImageOperate::initPixelBuffer() {
    for (int y = 0; y < h; y++) //rows
        for (int x = 0; x < w; x++) { //columns
            pixelBuffer.emplace_back(Pixel::fromQColor(rawImage.pixelColor(x, y)));
        }
}

bool ImageOperate::save(const QString &outPath, int quality) {

    updateBuffer();

    //save image on disk
    return rawImage.save(outPath, nullptr, quality);
}

QString ImageOperate::getPath() const {
    return path;
}

QString ImageOperate::getFilename() const {
    return filename;
}

size_t ImageOperate::getSize() const {
    return w * h;
}

int ImageOperate::getW() const{
    return w;
}

int ImageOperate::getH() const{
    return h;
}

void ImageOperate::setW(int w){
    this->w = w;
}

void ImageOperate::setH(int h){
    this->h = h;
}

void ImageOperate::setPath(QString path)
{
    this->path = path;
    pureFilename();
}

//pass a reference (no copy, better performance)
std::vector<Pixel>& ImageOperate::getPixelBuffer() {

    return pixelBuffer;
}

void ImageOperate::swapDimension() {
    swap(h, w);
}

void ImageOperate::updateBuffer(){
    rawImage = QImage(w, h, QImage::Format_ARGB32);

    for (int y = 0; y < h; y++) //rows
        for (int x = 0; x < w; x++) { //columns
            rawImage.setPixelColor(x, y, Pixel::toQColor(pixelBuffer[y * w + x]));
        }
}

QImage& ImageOperate::getQImage(){

    return rawImage;
}

bool ImageOperate::isValid() const {
    return isImageValid;
}
