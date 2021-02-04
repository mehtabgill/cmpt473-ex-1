#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "../lib/simple/include/Parallelogram.h"

using namespace shapes;

TEST(ParallelogramTests, PerimeterTest){
    Angle angle(90.0);
    Parallelogram rectangle(Side(10), Side(15), Angle(90.0));
    EXPECT_EQ(50, rectangle.getPerimeter()) << "Perimater of the Parallelogram is not calucated using both the sides";
}

TEST(ParallelogramTests, AreaTest){
    Angle angle(90.0);
    Parallelogram rectangle(Side(10), Side(15), Angle(90.0));
    EXPECT_EQ(150, rectangle.getArea()) << "Area of the Parallelogram is not calucated using both the sides";
}

TEST(ParallelogramTests, KindTest){
    Angle angle(90.0);
    Parallelogram square(Side(10), Side(10), Angle(90.0));
    EXPECT_EQ(Parallelogram::Kind::SQUARE, square.getKind()) << "Kind of the Parallelogram is not calucated using both the sides";
}