#include "CoffeeOrderController.h"

CoffeeOrderController::CoffeeOrderController(CoffeeOrder* model, CoffeeOrderView* view)
    : model(model), view(view) {
}

void CoffeeOrderController::setCups(int cups) {
    model->setNumCups(cups);
    updateView();
}

void CoffeeOrderController::updateView() {
    view->printTotal(model->getTotal());
}