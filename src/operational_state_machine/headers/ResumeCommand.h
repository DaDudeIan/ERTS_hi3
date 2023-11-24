#pragma once

#include <iostream>
#include "Command.h"

class Resume : public Command {
    public:
        Resume(){}
        ~Resume(){}
        void execute(Operational* context) const override;
};