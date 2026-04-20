#pragma once

#include <vector>
#include "Observer.h"

class Subject {
public:
    virtual ~Subject() = default;

    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);

protected:
    void notifyObservers();

private:
    std::vector<Observer*> observers_;
};