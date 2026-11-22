#include <iostream>
#include "Order.hpp"
#include "OrderBook.hpp"

int main()
{
    OrderBook orderBook;

    Order bidOrder = {
        "ORD_001",
        15050,
        10,
        Side::Buy,
        123456789
    };

    orderBook.addOrder(bidOrder);

    orderBook.printBook();

	return 0;
}
