#ifndef OBJETTEMPO_H
#define OBJETTEMPO_H

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {
        protected:
            bool Attente;
            Chrono* mypChrono;
            int delai;
        public:
            ObjetTempo(Chrono* chrono, const int & delai);
            Chrono* getChrono() const;
            void finTempo();
            int getDelai() const;
    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
