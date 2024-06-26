#ifndef IMAGE_EDITOR_IMAGE_H
#define IMAGE_EDITOR_IMAGE_H

//handles RGBA/RGB images
#include <QImage>
#include <QString>
#include "Pixel.h"
#include <vector>

using namespace std;

class ImageOperate {

private:
    QImage rawImage; //stores backend data infos
    QString path;
    QString filename;
    int w;
    int h;
    std::vector<Pixel> pixelBuffer;
    size_t size{0};
    bool isImageValid;

    void initPixelBuffer();
    void pureFilename();

public:
    explicit ImageOperate(const QString &path);

    bool save(const QString &outPath, int quality = -1); //-1 auto compression //0-100 quality range
    ImageOperate(ImageOperate &image) = delete;

    QString getPath() const;

    QString getFilename() const;

    std::vector<Pixel>& getPixelBuffer();

    size_t getSize() const;

    int getW() const;

    int getH() const;

    void setW(int w);
    void setH(int h);

    void setPath(QString path);

    void swapDimension();

    void updateBuffer();

    QImage& getQImage();

    bool isValid() const;
};


#endif
