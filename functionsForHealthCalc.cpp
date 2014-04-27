#include "functionsForHealthCalc.h"

namespace GameStuff {

    int defaultHealthCalc( const GameCharacter& gc ) {
        return 1;
    }

    int loseHealthSlowly( const GameCharacter& gc ) {
        return 2;
    }

    int loseHealthQuickly( const GameCharacter& gc ) {
        return 3;
    }
}
