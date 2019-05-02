#include <iostream>
#include <iomanip>

using namespace std;

#include "Porte.h"
#include "ObjetTempo.h"

nsDigicode::Porte::Porte(Chrono* pchrono, const int & temps) : ObjetTempo(pchrono, temps)
{

}

bool nsDigicode::Porte::ouvrir()
{
    Attente = true;
    getChrono()->demarrer(this);
    cout<< "vous pouvez entrer"<<endl;
    while(Attente  && !capteur.detecter());
        if(Attente)
            return fermer();
        else
        {
            cout << "Temps écoulé, la porte se verrouille" << endl;
            return true;
        }
}

bool nsDigicode::Porte::fermer()
{
cout<< "Porte ouverte : fermez la porte"<<endl;
while(Attente && !capteur.detecter());
    if(Attente)
    {
        mypChrono->arreter();
        Attente = false;
        cout<<"Vous avez fermé la porte" << endl;
        return true;
    }
    else
        return false;
}
