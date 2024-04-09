#ifndef IMAGE_EDITOR_BRIGHTNESSCOMMAND_H
#define IMAGE_EDITOR_BRIGHTNESSCOMMAND_H

#include "ICommand.h"
#include "../Image.h"

class brightnessCommand : public ICommand {
private:
    ImageOperate &image;
    std::vector<Pixel>& pixelBuffer;
    std::vector<Pixel> backupPixelBuffer;
    int value;

    void brightness();

public:
    explicit brightnessCommand(ImageOperate &image, int value);

    void execute() override;

    void undo() override;

    void redo() override;
};


#endif
