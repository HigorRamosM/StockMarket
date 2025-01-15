#include "pch.h"
#include "StockTransaction.h"

namespace SC = StockMarket::Core;

SC::StockTransaction::StockTransaction(SC::Stock stock, int shares, SC::StockTransaction::Operation operation) : stock(stock), shares(shares), operation(operation)
{
	totalInvested = stock.getPrice() * shares;
	averagePrice = totalInvested / shares;
}

int SC::StockTransaction::getAveragePrice() const
{
	return averagePrice;
}

int SC::StockTransaction::getShares() const
{
	return shares;
}

int SC::StockTransaction::getTotalInvested() const
{
	return totalInvested;
}

SC::StockTransaction::Operation SC::StockTransaction::getOperation() const
{
	return operation;
}