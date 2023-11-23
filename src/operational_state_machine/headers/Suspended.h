#ifndef SUSPENDED_H
#define SUSPENDED_H

#include "Command.h"
#include "OperationalSubstate.h"

class Suspended : public OperationalSubstate{
private:
    static Suspended* instance;
    
    Command* resumecommand = nullptr;
    Command* stopcommand = nullptr;

    Suspended();

    Suspended(const Suspended&) = delete;
    Suspended& operator=(const Suspended&) = delete;

public:
    ~Suspended() {
        delete resumecommand;
        delete stopcommand;
        delete instance;
        instance = nullptr;
    }
    
    //singleton
    static Suspended* getInstance() {
        if (instance == nullptr) {
            instance = new Suspended();
        }
        return instance;
    }

    void onEntry() override;
    void resumeOperation() override;
    void stopOperation() override;
};

#endif /* SUSPENDED_H */