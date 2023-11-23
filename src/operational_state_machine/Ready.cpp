#include "Ready.h"
#include "Configuration.h"

Ready* Ready::instance = nullptr;

void Ready::onEntry() {
    if (rand() % 2 == 0) {
        subcontext->ChangeSubState(Configuration::getInstance());
    } else {
        subcontext->ChangeSubState(Ready::getInstance());
    }
}

