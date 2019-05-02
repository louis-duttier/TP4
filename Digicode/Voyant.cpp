#include <iostream>
#include <iomanip>

using namespace std;

#include "Voyant.h"

nsDigicode::Voyant::Voyant()
{

}

void nsDigicode::Voyant::allumer()
{
    if (myEtat == Etat::eteint)
        myEtat = Etat::allume;
}

void nsDigicode::Voyant::eteindre()
{
    if (myEtat == Etat::allume)
        myEtat = Etat::eteint;
}

string nsDigicode::Voyant::getStatut()
{
    if (myEtat == Etat::allume)
        return "ON";
    else
        return "OFF";
}
