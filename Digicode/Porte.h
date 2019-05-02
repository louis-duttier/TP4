#ifndef PORTE_H
#define PORTE_H

#include "ObjetTempo.h"
#include "Capteur.h"


namespace nsDigicode {

    class Porte : public ObjetTempo
    {
        private:
            Capteur capteur;
            bool fermer();
        public:
            Porte(Chrono* chrono, const int & temps);
            bool ouvrir();

    };
};

#endif // PORTE_H
