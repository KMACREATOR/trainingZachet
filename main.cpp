#include <iostream>
#include <string>
#include <gtest/gtest.h>
//#include <gmock/gmock.h>

//ASSERT - прерывается в случае failure
//EXPECT - не прерывается
TEST(TestGroup1, SubTest_1){
	int value1 = 200;
	int value2 = 3;
	value1 = value1 *  value2;
	ASSERT_EQ(value1, 600);
	std::cout << "continue test" << std::endl;
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
//	::testing::InitGoogleMock(&argc, argv);


	return RUN_ALL_TESTS();
}
