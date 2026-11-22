#pragma once
#include "Order.hpp"
#include <vector>

class OrderBook
{
public:
	OrderBook()
	{
	}

	~OrderBook()
	{
	}

	void addOrder(Order order)
	{
		if (order.side == Side::Buy)
		{
			bids.push_back(order);
		}
		else
		{
			asks.push_back(order);
		}
	}

private:
	std::vector<Order> bids;
	std::vector<Order> asks;
};
