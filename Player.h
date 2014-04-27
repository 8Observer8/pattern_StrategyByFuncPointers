#ifndef PLAYER_H
#define PLAYER_H

#include "GameCharacter.h"

namespace GameStuff {

    class Player : public GameCharacter {
    public:

        explicit Player( std::string name, HealthCalcFunc hcf = defaultHealthCalc )
        : GameCharacter( name, hcf ) {
        }
    };
}

#endif // PLAYER_H
