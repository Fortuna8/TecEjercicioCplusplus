#pragma once
#include <string>


// Clases
class Character {
public:
    std::string name;
    float attack;
    float defense;
    float maxHealth;
    float currentHealth;

    void SetStats();
    void DisplayStats() const;
    float DealDamageTo(Character& target) const;
    bool IsAlive() const;
};