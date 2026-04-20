cmake_minimum_required(VERSION 3.16)
project(CoffeeApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(app
    src/main.cpp
    src/model/CoffeeOrder.cpp
    src/view/CoffeeOrderView.cpp
    src/controller/CoffeeOrderController.cpp
)

target_include_directories(app PRIVATE
    src
    src/model
    src/view
    src/controller
)