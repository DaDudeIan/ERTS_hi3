#include "headers/PowerOnSelfTest.h"

// initialize instance to nullptr
PowerOnSelfTest* PowerOnSelfTest::instance = nullptr;

PowerOnSelfTest* PowerOnSelfTest::getInstance(){
    if (instance == nullptr) {
        instance = new PowerOnSelfTest();
    }
    return instance;
}

void PowerOnSelfTest::onEntry() {
    //std::cout << "PowerOnSelfTest: onEntry" << std::endl;
    systemSelftest();
}

// function: systemSelftest. Return true 50% of the time.
bool PowerOnSelfTest::systemSelftest() {
    if (rand() % 2 == 0) {
        context->ChangeState(Initializing::getInstance());
    } else {
        context->ChangeState(Failure::getInstance());
    }
}
