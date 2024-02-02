#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(getPerimeterTest)
		{	
			int length = 5;
			int width = 7;
			int expected = 24;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(getAreaTest)
		{	
			int length = 5;
			int width = 7;
			int expected = 35;
			int result = getArea(&length, &width);
			Assert::AreEqual(expected, result);
		}
	};
}

namespace REQ003 //Both the length and width of the rectangle is to be limited to the range of values 1 to 99, inclusive
{
	TEST_CLASS(REQ003)
	{
	public:
		TEST_METHOD(setLengthTest)
		{
			int expected = 24;
			int result = 0;
			setLength(expected, &result);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(setLengthTestMinimum)
		{
			int expected = 0;
			int result = 4;
			setLength(expected, &result);
			Assert::AreNotEqual(expected, result);
		}
		TEST_METHOD(setLengthTestMaximum)
		{
			int expected = 100;
			int result = 0;
			setLength(expected, &result);
			Assert::AreNotEqual(expected, result);
		}

		TEST_METHOD(setWidthTest)
		{
			int expected = 24;
			int result = 0;
			setWidth(expected, &result);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(setWidthTestMinimum)
		{
			int expected = 0;
			int result = 4;
			setWidth(expected, &result);
			Assert::AreNotEqual(expected, result);
		}
		TEST_METHOD(setWidthTestMaximum)
		{
			int expected = 100;
			int result = 0;
			setWidth(expected, &result);
			Assert::AreNotEqual(expected, result);
		}
	};
}
////////move it all to another test file? dont forget to commit and push