#ifndef IMAGE_EDITOR_EMBOSSCOMMAND_H
#define IMAGE_EDITOR_EMBOSSCOMMAND_H

#include "ICommand.h"
#include "../Image.h"

class embossCommand : public ICommand {
private:
    ImageOperate &image;
    std::vector<Pixel>& pixelBuffer;
    std::vector<Pixel> backupPixelBuffer;

    void emboss();

public:
    explicit embossCommand(ImageOperate &image);

    void execute() override;

    void undo() override;

    void redo() override;


};


#endif
