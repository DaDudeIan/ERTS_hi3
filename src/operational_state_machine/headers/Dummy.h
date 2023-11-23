#ifndef DUMMY_H
#define DUMMY_H

#include "State.h"

class Dummy : public State {
private: 
    static Dummy* instance;
    Dummy() = default;

    Dummy(const Dummy&) = delete;
    Dummy& operator=(const Dummy&) = delete;

public:
    ~Dummy() {
        delete instance;
        instance = nullptr;
    }
    //singleton
    static Dummy* getInstance();

    void dummy() override;

    void onEntry() override;

};

#endif /* DUMMY_H */