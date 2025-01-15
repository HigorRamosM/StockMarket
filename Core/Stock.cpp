#include "pch.h"
#include "Stock.h"

namespace SC = StockMarket::Core;

SC::Stock::Stock(int id, std::string name, int price) : id(id), name(name), price(price)
{
}

int SC::Stock::getId() const
{
	return id;
}

std::string SC::Stock::getName() const
{
	return name;
}

int SC::Stock::getPrice() const
{
	return price;
}