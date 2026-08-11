#pragma once
#include "Entity.hpp"
#include "Inventory.hpp"
#include <initializer_list>

class Enemy : public Entity {
public:
    Enemy(std::string name, int hp, std::initializer_list<std::string> loot);
    ~Enemy() override;
    
    std::string describe() const override;

private:
    int m_hp;
    Inventory m_bag;
};