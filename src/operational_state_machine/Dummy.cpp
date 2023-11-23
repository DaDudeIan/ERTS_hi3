#include "PowerOnSelfTest.h"
#include "Initializing.h"
#include "headers/Dummy.h"
#include <iostream>
using namespace std;

Dummy* Dummy::instance = nullptr;

Dummy* Dummy::getInstance(){
    if (instance == nullptr) {
        instance = new Dummy();
    }
    return instance;
}

void Dummy::onEntry() {
    //cout << "Dummy: onEntry" << endl;
    dummy();
}

void Dummy::dummy() {
    //cout << "Dummy: dummy" << endl;
    context->ChangeState(PowerOnSelfTest::getInstance());
}