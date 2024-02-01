#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(getPerimeterTEST)
		{
			int expected = 24;
			int result = getPerimeter(5, 7);
			Assert::AreEqual(expected, result);
		}
	};	
}
