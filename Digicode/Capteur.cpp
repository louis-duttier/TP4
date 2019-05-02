#include <iostream>
#include <iomanip>

using namespace std;

#include "Capteur.h"
#include "kbhit.h"

nsDigicode::Capteur::Capteur()
{

}

int nsDigicode::Capteur::detecter()
{
    if (kbhit() == 0)
        return 0;
    else
        return kbhit();
}
