#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H

#include <string>
#include "functionsForHealthCalc.h"

namespace GameStuff {

    class GameCharacter {
    public:
        typedef int (*HealthCalcFunc)(const GameCharacter&);

        explicit GameCharacter( std::string name, HealthCalcFunc hcf = GameStuff::defaultHealthCalc )
        : m_name( name ), healthFunc( hcf ) {
        }

        int healthValue( ) const {
            return healthFunc( *this );
        }

        void setHealthCalculator( HealthCalcFunc hcf ) {
            healthFunc = hcf;
        }

        std::string name( ) const {
            return m_name;
        }

    private:
        HealthCalcFunc healthFunc;
        std::string m_name;
    };
}

#endif // GAMECHARACTER_H
