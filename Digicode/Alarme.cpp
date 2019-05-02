#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

#include "Alarme.h"

nsDigicode::Alarme::Alarme()
{

}

void nsDigicode::Alarme::declencher()
{
    for (;;)
    {
        cout << "Alarme : la porte n'a pas été refermée" << endl;
        sleep(1);
    }
}
