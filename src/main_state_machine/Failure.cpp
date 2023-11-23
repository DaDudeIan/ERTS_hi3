#include "headers/Failure.h"

Failure* Failure::instance = nullptr;

void Failure::onEntry() {
    //std::cout << "Failure: onEntry" << std::endl;
    display(1);
}

void Failure::display(int ErrorNo){
    std::cout << "Error number: " << ErrorNo << std::endl;
    if (restart) {
        context->ChangeState(PowerOnSelfTest::getInstance());
    }
}
