#include "c-echo.h"

#include "gtest/gtest.h"
//Hellow World Test
TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}
//Empty String Test
TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}
//Print numbers
TEST(EchoTest, Numbers) {
    char* test_val[3]; test_val[0] = "./c-echo";test_val[1] = "12345"; test_val[2] = "67890";
    EXPECT_EQ("12345 67890", echo(3,test_val));
}
//Print Empty First Input
TEST(EchoTest, EmptyFirst) {
    char* test_val[3]; test_val[0] = "./c-echo";test_val[1] = ""; test_val[2] = "Testing";
    EXPECT_EQ(" Testing", echo(3,test_val));
}
//Print Empty Second Input
TEST(EchoTest, EmptySecond) {
    char* test_val[3]; test_val[0] = "./c-echo";test_val[1] = "Testing"; test_val[2] = "";
    EXPECT_EQ("Testing ", echo(3,test_val));
}
//1 Inputs
TEST(EchoTest, OneInput) {
    char* test_val[2]; test_val[0] = "./c-echo";test_val[1] = "Test";
    EXPECT_EQ("Test", echo(2,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
