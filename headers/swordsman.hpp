#include "headers/player.hpp"

class Swordsman: public Player {
    protected:
        int m_slashing_damage;
    public:
        Swordsman(){};
        Swordsman(
            int hitpoints,
            int base_attack,
            int base_defense,
            int slashing_damage
        ):Player(hitpoints,base_attack,base_defense),m_slashing_damage(slashing_damage){};
        ~Swordsman(){};

        int getSlashingAttack(){return m_slashing_damage;}
        void setSlashingAttack(int slashing_damage){m_slashing_damage = slashing_damage;}
};