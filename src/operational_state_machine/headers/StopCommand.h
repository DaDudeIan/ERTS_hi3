#pragma once

#include <iostream>
#include "Command.h"

class Stop : public Command {
    public:
        Stop(){}
        ~Stop(){}
        void execute(Operational* context) override;
};