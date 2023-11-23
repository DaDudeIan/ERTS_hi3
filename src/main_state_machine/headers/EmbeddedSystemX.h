#ifndef EMBEDDEDSYSTEMX_H
#define EMBEDDEDSYSTEMX_H

#include "State.h" //../common/State.h

#include <iostream>

class EmbeddedSystemX {
    protected:
        State* currentState;
        void TransitionState(State* state_);
    
    public:
        EmbeddedSystemX();
        ~EmbeddedSystemX();

        void ChangeState(State* s);
        bool systemSelftest();
        void startInitializing();
        void display(int error_category);
        void readConfigurationInfo();
        void performConfigurationX();
        void dummy();

    private:
        friend class State;
};

#endif /* EMBEDDEDSYSTEMX_H */