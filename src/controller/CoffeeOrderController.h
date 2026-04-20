#ifndef COFFEEORDERCONTROLLER_H
#define COFFEEORDERCONTROLLER_H

#include "../model/CoffeeOrder.h"
#include "../view/CoffeeOrderView.h"

class CoffeeOrderController {
private:
    CoffeeOrder* model;
    CoffeeOrderView* view;

public:
    CoffeeOrderController(CoffeeOrder* model, CoffeeOrderView* view);

    void setCups(int cups);
    void updateView();
};

#endif