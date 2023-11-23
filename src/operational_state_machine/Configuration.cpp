#include "Configuration.h"
#include "Ready.h"

Configuration* Configuration::instance = nullptr;

void Configuration::onEntry() {
    readConfigurationInfo();
}

void Configuration::readConfigurationInfo() {
    //std::cout << "Configuration: readConfigurationInfo" << std::endl;
    subcontext->ChangeSubState(Ready::getInstance());
}