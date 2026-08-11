#include "Enemy.hpp"
#include <string>

Enemy::Enemy(std::string name, int hp) 
    : Entity(std::move(name), hp) {}

std::string Enemy::describe() const {
    std::string desc = "Enemy " + m_name + " (hp " + std::to_string(currentHp()) + "/" + std::to_string(maxHp()) + ")";
    if (!isAlive()) {
        desc += " [dead]";
    }
    return desc;
}