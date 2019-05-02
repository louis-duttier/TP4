#ifndef OBJETTEMPO_CPP
#define OBJETTEMPO_CPP

#include <chrono>
#include <iostream>
#include <iomanip>
#include <unistd.h>

#include "Chrono.h"
#include "ObjetTempo.h"

using namespace std;

nsDigicode::ObjetTempo::ObjetTempo(Chrono* chrono, const int & delai) : mypChrono(chrono), delai(delai)
{

}

nsDigicode::Chrono* nsDigicode::ObjetTempo::getChrono() const
{
    return mypChrono;
}
void nsDigicode::ObjetTempo::finTempo()
{
    Attente = false;
}

int nsDigicode::ObjetTempo::getDelai() const
{
    return delai;
}

#endif // OBJETTEMPO_CPP
