#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3_3goop/Money.h"
#include "../lab3_3goop/Money.cpp"
#include "../lab3_3goop/Object.h"
#include "../lab3_3goop/Object.cpp"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Money b(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			Money a(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			bool c = a == b;
			Assert::AreEqual(c, true);
		}
	};
}