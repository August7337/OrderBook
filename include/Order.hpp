#pragma once
#include <string>
#include <chrono>

enum class Side {
	Buy,
	Sell
};

struct Order
{
	std::string id;
	uint64_t price;
	uint32_t quantity;
	Side side;
	uint64_t timestamp;
};
