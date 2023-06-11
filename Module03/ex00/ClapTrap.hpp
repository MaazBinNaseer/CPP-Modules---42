#include <iostream>

class ClapTrap{
    private:
        std::string name;
        unsigned int health_point;
        unsigned int energy_point;
        unsigned int attack_damage;
    public:
        ClapTrap(const std::string name);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int getEnergy() const;
        int getHealth() const;
};

std::ostream& operator<<(std::ostream& out, const ClapTrap& value);