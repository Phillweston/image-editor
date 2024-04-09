#ifndef IMAGE_EDITOR_EDGEDETECTCOMMAND_H
#define IMAGE_EDITOR_EDGEDETECTCOMMAND_H

#include "ICommand.h"
#include "../Image.h"

class edgeDetectCommand : public ICommand {
private:
    ImageOperate &image;
    std::vector<Pixel>& pixelBuffer;
    std::vector<Pixel> backupPixelBuffer;

    void edgeDetect();

public:
    explicit edgeDetectCommand(ImageOperate &image);

    void execute() override;

    void undo() override;

    void redo() override;


};


#endif
