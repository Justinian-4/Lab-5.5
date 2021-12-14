#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-5.5/Lab-5.5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a(double a1, double d, int n);
			int t;
			t = a(1, 1, 4 - 1) + 1;
			Assert::AreEqual(t, 4);
		}
	};
}
