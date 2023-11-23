#include "StopCommand.h"
#include "Operational.h"
#include "Ready.h"

Stop::Stop(){}

void Stop::execute(Operational* context){
    context->TransitionSubState(Ready::getInstance());
}