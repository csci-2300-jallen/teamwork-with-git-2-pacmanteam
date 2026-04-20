#include "CoffeeOrder.h"

CoffeeOrder::CoffeeOrder() : numCups(0), pricePerCup(3.50) {
}

void CoffeeOrder::setNumCups(int cups) {
    numCups = cups;
}

double CoffeeOrder::getTotal() const {
    return numCups * pricePerCup;
}