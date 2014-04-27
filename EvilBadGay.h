#ifndef EVILBADGAY_H
#define EVILBADGAY_H

#include "GameCharacter.h"
#include "functionsForHealthCalc.h"

namespace GameStuff {

    class EvilBadGay : public GameCharacter {
    public:

        explicit EvilBadGay( std::string name, HealthCalcFunc hcf = defaultHealthCalc )
        : GameCharacter( name, hcf ) {
        }
    };
}

#endif // EVILBADGAY_H
