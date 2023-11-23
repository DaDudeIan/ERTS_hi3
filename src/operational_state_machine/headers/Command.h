#pragma once

#include <iostream>
#include "Operational.h"

class Command{    
    public:
        Command(){}
        virtual ~Command(){}
        virtual void execute(Operational* context) const = 0;
};