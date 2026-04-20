#include "model/CoffeeOrder.h"
#include "view/CoffeeOrderView.h"
#include "controller/CoffeeOrderController.h"

int main() {
    CoffeeOrder myModel;
    CoffeeOrderView myView;
    CoffeeOrderController controller(&myModel, &myView);

    controller.setCups(1);

    return 0;
}