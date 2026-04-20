#include "CoffeeOrderView.h"
#include <iostream>
#include <iomanip>

void CoffeeOrderView::printTotal(double total) const {
    std::cout << "Total cost: $" 
              << std::fixed << std::setprecision(2) 
              << total << std::endl;
}