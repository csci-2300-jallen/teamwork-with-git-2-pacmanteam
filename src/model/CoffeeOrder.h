#ifndef COFFEEORDER_H
#define COFFEEORDER_H

class CoffeeOrder {
private:
    int numCups;
    double pricePerCup;

public:
    CoffeeOrder();

    void setNumCups(int cups);
    double getTotal() const;
};

#endif