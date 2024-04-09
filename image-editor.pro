TEMPLATE = app
CONFIG += c++11
QT += core gui widgets

# Application Information
DEFINES += APP_NAME=\\\"Image Editor\\\"
DEFINES += APP_VERSION=\\\"1.0.0\\\"

TARGET = image_editor

# Qt Version and Paths (adjust the path as needed)
QT_VERSION = 5
QT += gui widgets

# Adjust the path according to your Qt installation
# You might need to adjust this based on your Qt installation


# Backend files
SOURCES += \
    backend/main.cpp \
    backend/basic_utils.cpp \
    backend/Image.cpp \
    backend/Pixel.cpp \
    backend/CommandPattern/grayScaleCommand.cpp \
    backend/CommandPattern/CommandManager.cpp \
    backend/CommandPattern/colorMaskCommand.cpp \
    backend/CommandPattern/flipXCommand.cpp \
    backend/CommandPattern/flipYCommand.cpp \
    backend/CommandPattern/rotateAntiClockwiseCommand.cpp \
    backend/CommandPattern/rotateClockwiseCommand.cpp \
    backend/CommandPattern/contrastCommand.cpp \
    backend/CommandPattern/brightnessCommand.cpp \
    backend/CommandPattern/scaleCommand.cpp \
    backend/CommandPattern/blurCommand.cpp \
    backend/CommandPattern/sharpenCommand.cpp \
    backend/CommandPattern/edgeDetectCommand.cpp \
    backend/CommandPattern/embossCommand.cpp \
    backend/CommandPattern/utils.cpp \

HEADERS += \
    backend/Image.h \
    backend/basic_utils.h \
    backend/Pixel.h \
    backend/CommandPattern/ICommand.h \
    backend/CommandPattern/grayScaleCommand.h \
    backend/CommandPattern/CommandManager.h \
    backend/CommandPattern/Commands.h \
    backend/CommandPattern/colorMaskCommand.h \
    backend/CommandPattern/flipXCommand.h \
    backend/CommandPattern/flipYCommand.h \
    backend/CommandPattern/rotateAntiClockwiseCommand.h \
    backend/CommandPattern/rotateClockwiseCommand.h \
    backend/CommandPattern/contrastCommand.h \
    backend/CommandPattern/brightnessCommand.h \
    backend/CommandPattern/scaleCommand.h \
    backend/CommandPattern/blurCommand.h \
    backend/CommandPattern/sharpenCommand.h \
    backend/CommandPattern/edgeDetectCommand.h \
    backend/CommandPattern/embossCommand.h \
    backend/CommandPattern/utils.h \

# Frontend files
SOURCES += \
    frontend/MainWindow.cpp \
    frontend/InputDialog.cpp

HEADERS += \
    frontend/MainWindow.h \
    frontend/InputDialog.h

FORMS += frontend/MainWindow.ui
RESOURCES += frontend/resources.qrc

# Test Integration (GTest) - Adjust as necessary
# Note: You'll need to handle the test configuration separately as qmake has different ways to integrate with testing frameworks like GTest
