#ifndef FAILURE_H
#define FAILURE_H

#include "State.h"
#include "PowerOnSelfTest.h"
#include <iostream>

class Failure : public State {
    
private:
    static Failure* instance;
    bool restart = true;
    Failure() = default;

    Failure(const Failure&) = delete;
    Failure& operator=(const Failure&) = delete;

public:
    ~Failure() {
        delete instance;
        instance = nullptr;
    }
    //singelton
    static Failure* getInstance(){
        if (instance == nullptr) {
            instance = new Failure();
        }
        return instance;
    }

    void display(int ErrorNo) override;

    void onEntry() override;


};
    
#endif /* FAILURE_H */