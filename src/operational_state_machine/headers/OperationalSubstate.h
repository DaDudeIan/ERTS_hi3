#ifndef OPERATIONALSUBSTATE_H
#define OPERATIONALSUBSTATE_H

#include <iostream>

//forward declarations
class Operational;

class OperationalSubstate{
protected:
    Operational* subcontext;

public:
    virtual ~OperationalSubstate(){};

    void set_subcontext(Operational* subcontext_) {
        this->subcontext = subcontext_;
    }

    virtual void onEntry(){};
    virtual void readConfigurationInfo(){}; 
    virtual void performConfigurationX(){};
    virtual void resumeOperation(){};
    virtual void stopOperation(){};
    
};

#include "Operational.h"

#endif /* OPERATIONALSUBSTATE_H */