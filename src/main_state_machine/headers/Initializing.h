#ifndef INITIALIZING_H
#define INITIALIZING_H

#include "State.h" //../../common/
#include "PowerOnSelfTest.h"

class Initializing : public State {
protected:
    static Initializing* instance;
    Initializing() = default;

    Initializing(const Initializing&) = delete;
    Initializing& operator=(const Initializing&) = delete;

public:
    ~Initializing() {
        delete instance;
        instance = nullptr;
    };

    //singleton
    static Initializing* getInstance(){
        if (instance == nullptr) {
            instance = new Initializing();
        }
        return instance;
    }

    void startInitializing() override;
    void onEntry() override;
};

#endif /* INITIALIZING_H */