#pragma once
#include <string>

namespace StockMarket::Core
{
	class Stock
	{
	private:
		int id;
		std::string name;
		int price;
	public:
		Stock(int id, std::string name, int price);
		int getId() const;
		std::string getName() const;
		int getPrice() const;
	};
}

