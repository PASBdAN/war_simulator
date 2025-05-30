#ifndef PLAYER_HPP
#define PLAYER_HPP

#include<iostream>

using namespace std;

class Player {
    protected:
        int m_hitpoints;
        int m_base_attack;
        int m_base_defense;
    public:

        Player(){};
        Player(
            int hitpoints,
            int base_attack,
            int base_defense
        ):m_hitpoints(hitpoints),m_base_attack(base_attack),m_base_defense(base_defense){};
        ~Player(){};

        int getHitpoints(){return m_hitpoints;}
        void setHitpoints(int hitpoints){m_hitpoints=hitpoints;}

        int getBaseAttack(){return m_base_attack;}
        void setBaseAttack(int base_attack){m_base_attack=base_attack;}

        int getBaseDefense(){return m_base_defense;}
        void setBaseDefense(int base_defense){m_base_defense=base_defense;};
};

#endif