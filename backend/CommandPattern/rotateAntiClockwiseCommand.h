#ifndef IMAGE_EDITOR_ROTATEANTICLOCKWISECOMMAND_H
#define IMAGE_EDITOR_ROTATEANTICLOCKWISECOMMAND_H

#include "ICommand.h"
#include "../Image.h"

class rotateAntiClockwiseCommand : public ICommand {
private:
    ImageOperate &image;
    std::vector<Pixel>& pixelBuffer;
    std::vector<Pixel> backupPixelBuffer;

    void rotateAnticlockwise();

public:
    explicit rotateAntiClockwiseCommand(ImageOperate &image);

    void execute() override;

    void undo() override;

    void redo() override;
};


#endif
