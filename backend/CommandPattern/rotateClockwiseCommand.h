#ifndef IMAGE_EDITOR_ROTATECLOCKWISECOMMAND_H
#define IMAGE_EDITOR_ROTATECLOCKWISECOMMAND_H

#include "ICommand.h"
#include "../Image.h"

class rotateClockwiseCommand : public ICommand {
private:
    ImageOperate &image;
    std::vector<Pixel>& pixelBuffer;
    std::vector<Pixel> backupPixelBuffer;

    void rotateClockwise();

public:
    explicit rotateClockwiseCommand(ImageOperate &image);

    void execute() override;

    void undo() override;

    void redo() override;
};


#endif
