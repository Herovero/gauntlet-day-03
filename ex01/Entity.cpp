#include "Entity.hpp"
#include <iostream>

Entity::Entity(std::string name) : m_name(std::move(name)) {
    std::cout << "+ Entity    " << m_name << '\n';
}

Entity::~Entity() {
    std::cout << "- Entity    " << m_name << '\n';
}