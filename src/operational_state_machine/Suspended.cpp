#include "Suspended.h"
#include "StopCommand.h"
#include "ResumeCommand.h"
#include "Ready.h"

Suspended* Suspended::instance = nullptr;

Suspended::Suspended(){
        resumecommand = new Stop();
        stopcommand = new Resume();
};

void Suspended::onEntry() {
    std::cout << "Suspended state" << std::endl;
    if (rand() % 2 == 0) {
        resumeOperation();
    } else {
        stopOperation();
    }
};

void Suspended::resumeOperation()   {
    resumecommand->execute(subcontext);
};

void Suspended::stopOperation() {
    stopcommand->execute(subcontext);
};