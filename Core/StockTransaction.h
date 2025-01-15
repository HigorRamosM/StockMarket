#pragma once
#include "Stock.h"

namespace StockMarket::Core
{
	class StockTransaction
	{
	public:
		enum Operation
		{
			Buy, Sell
		};

	private:
		Stock stock;
		int shares;
		int totalInvested;
		int averagePrice;
		Operation operation;

	public:
		StockTransaction(Stock stock, int shares, Operation operation);
		int getAveragePrice() const;
		int getShares() const;
		int getTotalInvested() const;
		Operation getOperation() const;
	};
}

