#include "Entity.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include <iostream>
#include <vector>
#include <memory>

int main() {
    std::vector<std::unique_ptr<Entity>> party;
    
    party.push_back(std::make_unique<Player>("Aria"));
    party.push_back(std::make_unique<Enemy>("Goblin", 12));
    party.push_back(std::make_unique<Player>("Bran"));
    party.push_back(std::make_unique<Enemy>("Orc", 40));

    for (const auto& e : party) {
        std::cout << e->describe() << '\n';
    }
    
    return 0;
}