#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include "OperationalSubstate.h"

class Configuration : public OperationalSubstate {
private:
    static Configuration* instance;
    Configuration() = default;

    Configuration(const Configuration&) = delete;
    Configuration& operator=(const Configuration&) = delete;

public:
    ~Configuration() {
        delete instance;
        instance = nullptr;
    }
    //singleton
    static Configuration* getInstance() {
    if (instance == nullptr) {
        instance = new Configuration();
    }
    return instance;
}

    void onEntry() override;

    void readConfigurationInfo() override;

};



#endif /* CONFIGURATION_H */