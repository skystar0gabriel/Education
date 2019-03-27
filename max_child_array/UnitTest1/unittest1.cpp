#include "stdafx.h"
#include "CppUnitTest.h"
#include "../max_child_array/max_child_array.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 1,2,3,4,5 };
			int b = 5;
			int c = sum_max_array(a, b);
			Assert::AreEqual(15, c);
			// TODO: 在此输入测试代码
		}
		TEST_METHOD(TestMethod2)
		{
			int a[5] = { 1,-2,3,-4,5 };
			int b = 5;
			int c = sum_max_array(a, b);
			Assert::AreEqual(5, c);
		}
		TEST_METHOD(TestMethod3)
		{
			int a[10] = { 2,-9,12,3,7,-5,-2,-9,4,11 };
			int b = 10;
			int c = sum_max_array(a, b);
			Assert::AreEqual(22, c);
		}
		TEST_METHOD(TestMethod4)
		{
			int a[5] = { 0,0,0,0,0 };
			int b = 5;
			int c = sum_max_array(a, b);
			Assert::AreEqual(0, c);
		}
		TEST_METHOD(TestMethod5)
		{
			int a[5] = { -1,-2,-3,-4,-5 };
			int b = 5;
			int c = sum_max_array(a, b);
			Assert::AreEqual(-1, c);
		}
	};
}