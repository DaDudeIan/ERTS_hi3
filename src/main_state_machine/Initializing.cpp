#include "headers/Initializing.h"
#include "PowerOnSelfTest.h"
#include "Dummy.h"
#include "Operational.h"

Initializing* Initializing::instance = nullptr;

void Initializing::onEntry() {
    //std::cout << "Initializing: onEntry" << std::endl;
    startInitializing();
}

void Initializing::startInitializing() {
    //std::cout << "Initializing: startInitializing" << std::endl;
    //context->ChangeState(Dummy::getInstance()); //UPDATE THIS
    context->ChangeState(Operational::getInstance());
    //context->ChangeState(PowerOnSelfTest::getInstance());
}