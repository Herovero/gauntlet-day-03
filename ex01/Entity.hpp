#pragma once
#include <string>

class Entity {
public:
    explicit Entity(std::string name);
    virtual std::string describe() const = 0;
    virtual ~Entity();

protected:
    std::string m_name;
};