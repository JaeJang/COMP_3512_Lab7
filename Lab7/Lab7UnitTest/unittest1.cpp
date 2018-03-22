#include "CppUnitTest.h"
#include "../Lab7/functions.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab7UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(SumTest1)
		{
			std::vector<int> a;
			a.push_back(1);
			a.push_back(1);
			a.push_back(2);
			a.push_back(5);
			a.push_back(5);
			a.push_back(9);
			a.push_back(11);
			a.push_back(10);

			Assert::AreEqual(44, sum(a));

		}

		TEST_METHOD(SumTest2)
		{
			std::vector<int> a;
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(10);

			Assert::AreEqual(45, sum(a));

		}

		TEST_METHOD(MaxTest)
		{
			std::vector<int> a;
			a.push_back(1);
			a.push_back(1);
			a.push_back(2);
			a.push_back(5);
			a.push_back(5);
			a.push_back(9);
			a.push_back(11);
			a.push_back(10);

			Assert::AreEqual(11, max(a));

		}

		TEST_METHOD(MaxTest2)
		{
			std::vector<int> a;
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);

			Assert::AreEqual(5, max(a));

		}
		TEST_METHOD(MinTest)
		{
			std::vector<int> a;
			a.push_back(1);
			a.push_back(1);
			a.push_back(2);
			a.push_back(5);
			a.push_back(5);
			a.push_back(9);
			a.push_back(11);
			a.push_back(10);

			Assert::AreEqual(1, min(a));

		}

		TEST_METHOD(MinTest2)
		{
			std::vector<int> a;
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);

			Assert::AreEqual(5, min(a));

		}

		TEST_METHOD(AverageTest)
		{
			std::vector<int> a;
			a.push_back(1);
			a.push_back(1);
			a.push_back(2);
			a.push_back(5);
			a.push_back(5);
			a.push_back(9);
			a.push_back(11);
			a.push_back(10);

			Assert::AreEqual(5.5, average(a));

		}

		TEST_METHOD(AverageTest2)
		{
			std::vector<int> a;
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);
			a.push_back(5);

			Assert::AreEqual(5.0, average(a));

		}
	};
}