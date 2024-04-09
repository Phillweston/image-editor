#ifndef IMAGE_EDITOR_CONTRASTCOMMAND_H
#define IMAGE_EDITOR_CONTRASTCOMMAND_H

#include "ICommand.h"
#include "../Image.h"

class contrastCommand : public ICommand {
private:
    ImageOperate &image;
    std::vector<Pixel>& pixelBuffer;
    std::vector<Pixel> backupPixelBuffer;
    int contrastValue;

    void contrast();

public:
    explicit contrastCommand(ImageOperate &image, int conrast);

    void execute() override;

    void undo() override;

    void redo() override;
};


#endif
