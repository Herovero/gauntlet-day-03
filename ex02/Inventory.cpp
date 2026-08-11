#include "Inventory.hpp"
#include <iostream>

Inventory::Inventory(const std::string& owner, std::initializer_list<std::string> items)
    : m_owner(owner), m_count(items.size()), m_items(new std::string[items.size()]) 
{
    std::size_t i = 0;
    for (const auto& item : items) {
        m_items[i++] = item;
    }

    std::cout << "+ Inventory " << m_owner << " (";
    for (std::size_t j = 0; j < m_count; ++j) {
        std::cout << m_items[j] << (j + 1 < m_count ? ", " : "");
    }
    std::cout << ")\n";
}

Inventory::~Inventory() {
    std::cout << "- Inventory " << m_owner << " (";
    for (std::size_t j = 0; j < m_count; ++j) {
        std::cout << m_items[j] << (j + 1 < m_count ? ", " : "");
    }
    std::cout << ")\n";
    
    delete[] m_items;
}