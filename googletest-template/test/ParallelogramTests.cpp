#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "../lib/simple/include/Parallelogram.h"

using namespace shapes;

TEST(ParallelogramTests, PerimeterTestFail){
    Parallelogram rectangle(Side(10), Side(15), Angle(90.0));
    EXPECT_EQ(50, rectangle.getPerimeter()) << "Perimeter of the Parallelogram is not calucated using both the sides therefore, it will be wrong for a rectangle.";
}

TEST(ParallelogramTests, AreaTestFail){
    Parallelogram rectangle(Side(10), Side(15), Angle(90.0));
    EXPECT_EQ(150, rectangle.getArea()) << "Area of the Parallelogram is not calucated using both the sides therefore, it will be wrong for a rectangle.";
}

TEST(ParallelogramTests, KindTestFail){
    Parallelogram square(Side(10), Side(10), Angle(90.0));
    EXPECT_EQ(Parallelogram::Kind::SQUARE, square.getKind()) << "The Square conditon is not reachable because square is a rectangle and a rohmbus both.";
}

TEST(ParallelogramTests, PerimeterTestPass){
    Parallelogram square(Side(10), Side(10), Angle(90.0));
    EXPECT_EQ(40, square.getPerimeter()) << "Perimeter of the Parallelogram is not calucated using both the sides therefore, it will be wrong for a rectangle.";
}

TEST(ParallelogramTests, AreaTestPass){
    Parallelogram square(Side(10), Side(10), Angle(90.0));
    EXPECT_EQ(100, square.getArea()) << "Area of the Parallelogram is not calucated using both the sides therefore, it will be wrong for a rectangle.";
}

TEST(ParallelogramTests, KindTestPass){
    Parallelogram rectangle(Side(15), Side(10), Angle(90.0));
    EXPECT_EQ(Parallelogram::Kind::RECTANGLE, rectangle.getKind()) << "The Square conditon is not reachable because square is a rectangle and a rohmbus both.";
}