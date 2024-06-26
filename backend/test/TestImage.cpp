#include "gtest/gtest.h"
#include "../Image.h"

#define PATH QStringLiteral("../../../backend/test/test-images/")

class TestImage : public ::testing::Test {

protected:
    ImageOperate solid_pink;
    ImageOperate solid_green;
    ImageOperate alpha_yellow;
    ImageOperate big;
    ImageOperate not_uni;
    ImageOperate mono_green;

    TestImage() :
            solid_pink(PATH + "3x2_solid_pink.jpg"),
            solid_green(PATH + "3x3_solid_green.jpg"),
            alpha_yellow(PATH + "3x4_alpha_yellow.png"),
            big(PATH + "big.jpg"),
            not_uni(PATH + "not_uni.png"),
            mono_green(PATH + "mono_green.png") {}

};

TEST_F(TestImage, Ctor) {
    ASSERT_EQ(solid_pink.getSize(), 6);
    std::vector<Pixel> pixelBuffer = solid_pink.getPixelBuffer();

    Pixel tempData[6] = {
            Pixel(255, 10, 227, 255), Pixel(255, 10, 227, 255), Pixel(255, 10, 227, 255),
            Pixel(255, 10, 227, 255), Pixel(255, 10, 227, 255), Pixel(255, 10, 227, 255)
    };

    for (int i = 0; i < 6; i++)
        EXPECT_EQ(pixelBuffer[i], tempData[i]);
}

TEST_F(TestImage, Path) {
    EXPECT_EQ(solid_pink.getPath(), "../../../backend/test/test-images/3x2_solid_pink.jpg");
    EXPECT_EQ(solid_green.getPath(), "../../../backend/test/test-images/3x3_solid_green.jpg");
    EXPECT_EQ(alpha_yellow.getPath(), "../../../backend/test/test-images/3x4_alpha_yellow.png");
}

TEST_F(TestImage, Filename) {

    EXPECT_EQ(solid_pink.getFilename(), "3x2_solid_pink.jpg");
    EXPECT_EQ(solid_green.getFilename(), "3x3_solid_green.jpg");
    EXPECT_EQ(alpha_yellow.getFilename(), "3x4_alpha_yellow.png");
}

TEST_F(TestImage, Size) {
    EXPECT_EQ(solid_pink.getSize(), 6);
    EXPECT_EQ(solid_green.getSize(), 9);
    EXPECT_EQ(alpha_yellow.getSize(), 12);
    EXPECT_EQ(big.getSize(), 2560 * 1440);
}