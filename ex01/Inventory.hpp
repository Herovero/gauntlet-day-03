#pragma once
#include <string>
#include <initializer_list>

class Inventory {
public:
    Inventory(const std::string& owner, std::initializer_list<std::string> items);
    ~Inventory(); 

    Inventory(const Inventory&) = delete;
    Inventory& operator=(const Inventory&) = delete;

private:
    std::string  m_owner;
    std::size_t  m_count;
    std::string* m_items; 
};

