#ifndef READY_H
#define READY_H

#include "OperationalSubstate.h"

class Ready : public OperationalSubstate {
private:
    static Ready* instance;
    Ready() = default;

    Ready(const Ready&) = delete;
    Ready& operator=(const Ready&) = delete;

public:
    ~Ready() {
        delete instance;
        instance = nullptr;
    }
    
    //singleton
    static Ready* getInstance() {
        if (instance == nullptr) {
            instance = new Ready();
        }
        return instance;
    }

    void onEntry() override;
};

#endif /* READY_H */