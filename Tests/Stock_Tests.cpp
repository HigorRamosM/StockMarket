#include "pch.h"
#include "CppUnitTest.h"
#include "Stock.h"
#include "StockTransaction.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(Stocks)
	{
	public:

		TEST_METHOD(StockCreation)
		{
			namespace SC = StockMarket::Core;

			int expectedId = 1;
			std::string expectedName = "StockName";
			int expectedPrice = 100;

			SC::Stock test(expectedId, expectedName, expectedPrice);
			int id = test.getId();
			std::string name = test.getName();
			int price = test.getPrice();

			Assert::AreEqual(expectedId, id);
			Assert::AreEqual(expectedName, name);
			Assert::AreEqual(expectedPrice, price);
		}
	};
}