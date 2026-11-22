#pragma once
#include <iostream>
#include <vector>
#include "Order.hpp"

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

	void printBook() const
	{
		std::cout << "BID ORDERS:\n";
		
		for (const auto& order : bids)
		{
			std::cout << order.id << " - " << order.quantity << " - " << order.price << '\n';
		}

		std::cout << "\nASK ORDERS:\n";
		
		for (const auto& order : asks)
		{
			std::cout << order.id << " - " << order.quantity << " - " << order.price << '\n';
		}
	}

private:
	std::vector<Order> bids;
	std::vector<Order> asks;
};
