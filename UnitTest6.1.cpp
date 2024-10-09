#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1/lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		TEST_METHOD(TestSum)
		{
			const int n = 5;
			int t[n] = { -6, -8, 17, 5, 30 };
			int expected_sum = -14;
			Assert::AreEqual(Sum(t, n), expected_sum);

		}

	TEST_METHOD(TestCountElements)
	{
		const int n = 5;
		int t[n] = { -6, -8, 17, 5, 30 };

		int expected_count = 2;

		int actual_count = Num(t, n);

		Assert::AreEqual(expected_count, actual_count);
	}

		TEST_METHOD(TestReplaceElements)
		{
			const int n = 5;
			int t[n] = { -6, -8, 17, 5, 30 };
			int expected_result[n] = { 0, 0, 17, 5, 30 };

			Replace(t, n);

			for (int i = 0; i < n; i++) {
				Assert::AreEqual(expected_result[i], t[i]);
			}
		}
	};
}
