#include "Entity.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include <iostream>

int main() {
    Entity* hero    = new Player("Aria");
    Entity* monster = new Enemy("Goblin", 12, {"dagger", "gold", "torch"});

    std::cout << hero->describe()    << '\n';
    std::cout << monster->describe() << '\n';

    std::cout << "--- cleaning up ---\n";
    
    delete hero;      
    delete monster;   

    return 0;
}