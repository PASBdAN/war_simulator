#include "headers/player.hpp"

class Archer: public Player {
    protected:
        int m_ranged_attack;
    public:
        Archer(){};
        Archer(
            int hitpoints,
            int base_attack,
            int base_defense,
            int ranged_attack
        ):Player(hitpoints,base_attack,base_defense),m_ranged_attack(ranged_attack){};
        ~Archer(){};

        int getRangedAttack(){return m_ranged_attack;}
        void setRangedAttack(int ranged_attack){m_ranged_attack = ranged_attack;}
};