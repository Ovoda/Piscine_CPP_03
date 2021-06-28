#include "ClapTrap.hpp"

void action_attack(ClapTrap & attacker, ClapTrap &victim)
{
    attacker.attack(victim.getName());
    victim.takeDamage(attacker.getAttackDamage());
}

void defeat(ClapTrap & looser)
{
    std::cout << "FR4G-TP <" << looser.getName() << "> has been defeated" << std::endl;
}

int main(void)
{
    ClapTrap hero("Hero");
    ClapTrap enemy("Enemy");
    int input;

    hero.setAttackDamage(5);
    enemy.setAttackDamage(2);

    std::cout << std::endl
              << "Welcome Hero ! Your goal is to destroy the enemy. What would you like to do ?" << std::endl;

    while (1)
    {
        if (hero.getHitPoints() <= 0)
        {
            defeat(hero);
            break ;
        }
        else if (enemy.getHitPoints() <= 0)
        {
            defeat(enemy);
            break ;
        }
        std::cout << std::endl << "______________________________________________________" << std::endl;
        std::cout << "[1] Attack enemy" << std::endl
                  << "[2] Heal yourself" << std::endl
                  << "[3] Show your stats" << std::endl
                  << "[4] Show Enemy stats" << std::endl
                  << "[5] Exit Game" << std::endl
                  << "(Any other number will cause the Enemy to attack you)" << std::endl
                  << std::endl;
        std::cout << "action : ";
        std::cin >> input;
        switch (input)
        {
        case 1:
            action_attack(hero, enemy);
            break;
        case 2:
            hero.beRepaired(2);
            break;
        case 3:
            std::cout << hero << std::endl;
            break;
        case 4:
            std::cout << enemy << std::endl;
            break;
        case 5:
            return (0);
        default:
            action_attack(enemy, hero);
        }
    }

    return (0);
}