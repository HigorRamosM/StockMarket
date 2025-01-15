#include "pch.h"
#include "CppUnitTest.h"
#include "Stock.h"
#include "StockTransaction.h"
#include "ToStringCustomization.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace SC = StockMarket::Core;

namespace UnitTests
{
	TEST_CLASS(StockTransaction)
	{
	public:

		TEST_METHOD(StockTransactionCreation)
		{
			int stockId = 1;
			std::string stockName = "StockName";
			int stockPrice = 10000;

			int expectedShares = 500;
			auto expectedOperation = SC::StockTransaction::Operation::Buy;
			int expectedTotalInvested = stockPrice * expectedShares;
			int expectedAveragePrice = expectedTotalInvested / expectedShares;
			SC::StockTransaction transaction(SC::Stock::Stock(stockId, stockName, stockPrice), expectedShares, expectedOperation);

			auto totalInvested = transaction.getTotalInvested();
			auto averagePrice = transaction.getAveragePrice();
			auto shares = transaction.getShares();
			auto operation = transaction.getOperation();

			Assert::AreEqual(expectedAveragePrice, averagePrice);
			Assert::AreEqual(expectedTotalInvested, totalInvested);
			Assert::AreEqual(expectedShares, shares);
			Assert::AreEqual(expectedOperation, operation);
		}
	};
}