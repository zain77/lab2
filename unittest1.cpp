#include "stdafx.h"
#include "CppUnitTest.h"
#include "factorial_class.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		lab2 obj;
		
		int test1 = obj.factorial(6);
		int test2 = obj.factorial(5);

		TEST_METHOD(TestMethod1)
		{
			Assert::AreNotEqual(120, test1);
		}

		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(120, test2);
		}

	};
}