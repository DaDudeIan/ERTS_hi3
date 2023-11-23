#include "EmbeddedSystemX.h"
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


int main() {
    srand(time(NULL)); // seed random number generator
    std::cout << "Hello World!" << std::endl;
    EmbeddedSystemX* system = new EmbeddedSystemX();
    //system->Request_Transition_1();
    return 0;
}