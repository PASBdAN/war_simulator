#include "headers/player.hpp"

class Combat {
    public:
        static void resolveCombat(Player& attacker, Player& defender) {
    
            // 1. Aplicar defesa (defender pode modificar o contexto)
            DefenseAdapter defense(ctx, attacker);
            defender.acceptDefense(defense);
    
            // 2. Aplicar dano final
            int finalDamage = std::max(0, ctx.baseDamage);
            std::cout << attacker.getType() << " attacks " << defender.getType()
                      << " for " << finalDamage << " damage.\n";
    
            defender.takeDamage(finalDamage);
        }
    };