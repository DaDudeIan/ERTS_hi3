#include "Ready.h"
#include "Operational.h"

Operational* Operational::instance = nullptr;

Operational::Operational(){
    ChangeSubState(Ready::getInstance());
}

void Operational::TransitionSubState(OperationalSubstate* substate_){
    std::cout << "Context: Transition to " << typeid(*substate_).name() << ".\n";

    this->currentSubState = substate_;
    this->currentSubState->set_subcontext(this);
    this->currentSubState->onEntry();
}

void Operational::ChangeSubState(OperationalSubstate* s) { 
    TransitionSubState(s);
}