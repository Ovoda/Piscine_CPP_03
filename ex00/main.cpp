#include "ClapTrap.hpp"

void action_attack(ClapTrap &attacker, ClapTrap &victim)
{
    attacker.attack(victim.getName());
    victim.takeDamage(attacker.getAttackDamage());
}

void defeat(ClapTrap &looser)
{
    std::cout << "FR4G-TP <" << looser.getName() << "> has been defeated" << std::endl;
}

int main(void)
{
    std::cout << "\033[1;36m";
    ClapTrap hero("Hero");
    std::cout << std::endl;
    ClapTrap enemy("Enemy");
    int input;

    enemy.setAttackDamage(2);
    hero.setAttackDamage(2);
    std::cout << std::endl
              << "\033[1;0mWelcome back !" << std::endl
              << std::endl
              << "This is level 1, you are now a CL4P-TP soldier" << std::endl
              << "\033[1;0mWhat would you like to do ?" << std::endl;

    while (1)
    {
        if (hero.getHitPoints() <= 0)
        {
            defeat(hero);
            break;
        }
        else if (enemy.getHitPoints() <= 0)
        {
            defeat(enemy);
            break;
        }
        std::cout << "______________________________________________________" << std::endl;
        std::cout << "[1] Attack enemy" << std::endl
                  << "[2] Heal yourself" << std::endl
                  << "[3] Exit Game" << std::endl
                  << "(Any other number will cause the Enemy to attack you)" << std::endl;
        std::cout << "______________________________________________________" << std::endl;
        std::cout << "\033[1;32m[Hero]  HP : " << hero.getHitPoints() << " AD: " << hero.getAttackDamage() << std::endl;
        std::cout << "\033[1;31m[Enemy] HP : " << enemy.getHitPoints() << " AD: " << enemy.getAttackDamage() << std::endl;
        std::cout << "\033[1;37maction : ";
        std::cin >> input;
        if (std::cin.fail())
        {
            std::cout << "Wrong input, quitting the game..." << std::endl;
            return (1);
        }
        switch (input)
        {
        case 1:
            action_attack(hero, enemy);
            break;
        case 2:
            hero.beRepaired(10);
            break;
        case 3:
            std::cout << "\033[1;36m" << std::endl;
            return (0);
        default:
            action_attack(enemy, hero);
        }
        std::cout << "\033[1;0m";
    }
    std::cout << "\033[1;36m" << std::endl;
    return (0);
}
