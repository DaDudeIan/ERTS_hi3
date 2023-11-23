#include "PowerOnSelfTest.h"
#include "headers/EmbeddedSystemX.h"

EmbeddedSystemX::EmbeddedSystemX() {
    //std::cout << "EmbeddedSystemX: Initializing" << std::endl;
    ChangeState(PowerOnSelfTest::getInstance());
}

EmbeddedSystemX::~EmbeddedSystemX() { delete currentState; }

void EmbeddedSystemX::TransitionState(State* state_){
    std::cout << "Context: Transition to " << typeid(*state_).name() << ".\n";

    this->currentState = state_;
    this->currentState->set_context(this);
    this->currentState->onEntry();
}

void EmbeddedSystemX::ChangeState(State* s) { 
    TransitionState(s);
}

bool EmbeddedSystemX::systemSelftest(){
    currentState->systemSelftest();
}

void EmbeddedSystemX::startInitializing(){
    currentState->startInitializing();
}

void EmbeddedSystemX::display(int error_category){
    currentState->display(error_category);
}

void EmbeddedSystemX::readConfigurationInfo(){
    currentState->readConfigurationInfo();
}

void EmbeddedSystemX::performConfigurationX(){
    currentState->performConfigurationX();
}

void EmbeddedSystemX::dummy(){
    currentState->dummy();
}