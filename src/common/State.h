#ifndef STATE_H
#define STATE_H

#include <iostream>

class EmbeddedSystemX;

class State {
    protected:
        EmbeddedSystemX* context;
    
    public:
        virtual ~State() {};

        void set_context(EmbeddedSystemX* context_) {
            this->context = context_;
        }

        virtual bool systemSelftest(){return false;}; 
        virtual void startInitializing(){};
        virtual void display(int error_category){std::cout << "Error: " << error_category << std::endl;};
        virtual void readConfigurationInfo(){};
        virtual void performConfigurationX(){};
        virtual void dummy(){};

        virtual void onEntry() {
            std::cout << "Entering " << typeid(*this).name() << std::endl;
        };
};

#include "../main_state_machine/headers/EmbeddedSystemX.h"

#endif /* STATE_H */