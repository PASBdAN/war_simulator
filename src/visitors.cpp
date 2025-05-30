#include "headers/archer.hpp"
#include "headers/swordsman.hpp"

class AttackVisitor {
    public:
        virtual void visit(Swordsman& defender) = 0;
        virtual void visit(Archer& defender) = 0;
};

class DefenseVisitor {
    public:
        virtual void visit(Swordsman& defender) = 0;
        virtual void visit(Archer& defender) = 0;
};