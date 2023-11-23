#ifndef POWERONSELFTEST_H
#define POWERONSELFTEST_H

#include "State.h" //../../common/
#include "Initializing.h"
#include "Failure.h"

class PowerOnSelfTest : public State {
protected:
    static PowerOnSelfTest* instance;
    PowerOnSelfTest() = default;

    PowerOnSelfTest(const PowerOnSelfTest&) = delete;
    PowerOnSelfTest& operator=(const PowerOnSelfTest&) = delete;

public:
    ~PowerOnSelfTest() {
        delete instance;
        instance = nullptr;
    }
    //singleton
    static PowerOnSelfTest* getInstance();

    // function: systemSelftest. Return true 50% of the time.
    bool systemSelftest() override;

    void onEntry() override;
};

#endif /* POWERONSELFTEST_H */