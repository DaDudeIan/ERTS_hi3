#ifndef OPERATIONAL_H
#define OPERATIONAL_H

#include "State.h"
#include "PowerOnSelfTest.h"
#include "OperationalSubstate.h"
#include "Ready.h"
#include "Suspended.h"
#include "EventTypes.h"
#include <iostream>

class Operational : public State {
private:
    OperationalSubstate* currentSubState;
    static Operational* instance; //part of larger state machine
    Operational();

    ~Operational() {
        delete instance;
        instance = nullptr;
    }

    Operational(const Operational&) = delete;
    Operational& operator=(const Operational&) = delete;

public:
    static Operational* getInstance() {
        if (instance == nullptr) {
            instance = new Operational();
        }
        return instance;
    }

    void TransitionSubState(OperationalSubstate* substate_);
    void ChangeSubState(OperationalSubstate* s);

    /*void handleEvent(EventTypes event) {
        switch (event)  {
        case EventTypes::Resume:
            if(auto suspended = dynamic_cast<Suspended*>(currentSubState)) {
                suspended->resumeOperation();
            }
            break;
        case EventTypes::Stop:
            if(auto suspended = dynamic_cast<Suspended*>(currentSubState)) {
                suspended->stopOperation();
            }
            break;
        
        default:
            break;
        }
    }*/

    void Start() {
        std::cout << "Already Started" << std::endl;
    }

    void Pause() {
        std::cout << "Paused" << std::endl;
    }

    void Resume() {
        std::cout << "Resumed" << std::endl;
    }

    void Stop() {
        context->ChangeState(PowerOnSelfTest::getInstance());
    }

};

#endif /* OPERATIONAL_H */