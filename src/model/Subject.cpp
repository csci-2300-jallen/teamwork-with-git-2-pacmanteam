#include "Subject.h"

void Subject::addObserver(Observer* observer) {
    observers_.push_back(observer);
}

void Subject::removeObserver(Observer* observer) {
    for (auto it = observers_.begin(); it != observers_.end(); ++it) {
        if (*it == observer) {
            observers_.erase(it);
            return;
        }
    }
}

void Subject::notifyObservers() {
    for (Observer* observer : observers_) {
        if (observer != nullptr) {
            observer->update();
        }
    }
}