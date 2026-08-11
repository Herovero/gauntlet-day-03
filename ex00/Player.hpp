#pragma once
#include "Entity.hpp"

class Player : public Entity {
    public:
        explicit Player(std::string name);
        std::string describe() const override;
};