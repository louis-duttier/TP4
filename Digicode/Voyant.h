#ifndef VOYANT_H
#define VOYANT_H

#include <iostream>
#include <iomanip>

using namespace std;

namespace nsDigicode {

enum Couleur {
    rouge, vert
};
enum Etat {
    allume, eteint
};

    class Voyant
    {
        private:
            Etat myEtat;
            Couleur myCouleur;

        public:
            Voyant();

            void allumer();
            void eteindre();
            Voyant(Couleur couleur, Etat etat);

            string getStatut();


    };
};

#endif // VOYANT_H
