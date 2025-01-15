#include "pch.h"
#include "CppUnitTest.h"
#include "Stock.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(Stock)
	{
	public:
		
		TEST_METHOD(StockCreation)
		{
			namespace SC = StockMarket::Core;

			const int expectedId = 1;
			const std::string expectedName = "StockName";
			const int expectedPrice = 10000;

			SC::Stock addStock(expectedId, expectedName, expectedPrice);
			int id = addStock.getId();
			std::string name = addStock.getName();
			int price = addStock.getPrice();

			Assert::AreEqual(expectedId, id);
			Assert::AreEqual(expectedName, name);
			Assert::AreEqual(expectedPrice, price);
		}
	};
}
