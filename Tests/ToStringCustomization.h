#pragma once
#include "pch.h"
#include <string>
#include <StockTransaction.h>
#include "CppUnitTest.h"

namespace Microsoft::VisualStudio::CppUnitTestFramework
{
	template<>
	std::wstring ToString<StockMarket::Core::StockTransaction::Operation>(const StockMarket::Core::StockTransaction::Operation& op)
	{
		switch (op)
		{
		case StockMarket::Core::StockTransaction::Operation::Buy:
			return L"Buy";
		case StockMarket::Core::StockTransaction::Operation::Sell:
			return L"Sell";
		default:
			return L"Uknown Operation";
		}
	}
}