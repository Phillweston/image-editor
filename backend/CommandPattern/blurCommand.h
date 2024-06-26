#ifndef IMAGE_EDITOR_BLURCOMMAND_H
#define IMAGE_EDITOR_BLURCOMMAND_H

#include "ICommand.h"
#include "../Image.h"

class blurCommand : public ICommand {
private:
    ImageOperate &image;
    std::vector<Pixel>& pixelBuffer;
    std::vector<Pixel> backupPixelBuffer;

    void blur();

public:
    explicit blurCommand(ImageOperate &image);

    void execute() override;

    void undo() override;

    void redo() override;
};


#endif
