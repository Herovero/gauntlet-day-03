#pragma once
#include "Entity.hpp"

class Player : public Entity {
public:
    explicit Player(std::string name);
    ~Player() override;
    
    std::string describe() const override;
};