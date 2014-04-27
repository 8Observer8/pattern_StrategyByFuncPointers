#include <iostream>
#include "Player.h"
#include "EvilBadGay.h"
#include "functionsForHealthCalc.h"

int main() {
    GameStuff::Player player(std::string("David"));
    GameStuff::EvilBadGay monster(std::string("Black"));

    std::cout << "Name: " << player.name( ) << std::endl;
    std::cout << "Health Value: " << player.healthValue( ) << std::endl;
    std::cout << std::endl;

    std::cout << "Name: " << monster.name( ) << std::endl;
    std::cout << "Health Value: " << monster.healthValue( ) << std::endl;
    std::cout << std::endl;

    // Change health functions
    player.setHealthCalculator(GameStuff::loseHealthSlowly);
    monster.setHealthCalculator(GameStuff::loseHealthQuickly);

    std::cout << "After changing health functions:" << std::endl;
    std::cout << std::endl;

    std::cout << "Name: " << player.name( ) << std::endl;
    std::cout << "Health Value: " << player.healthValue( ) << std::endl;
    std::cout << std::endl;

    std::cout << "Name: " << monster.name( ) << std::endl;
    std::cout << "Health Value: " << monster.healthValue( ) << std::endl;

    return 0;
}
