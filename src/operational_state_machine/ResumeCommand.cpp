#include "Command.h"
#include "ResumeCommand.h"
#include "Operational.h"
#include "Ready.h"

void Resume::execute(Operational* context){
    context->TransitionSubState(Ready::getInstance()); //change to RealTimeLoop
}