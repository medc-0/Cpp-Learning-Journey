#include <iostream>

void attackEnemy(int &enemyHealth, int damage) {
    enemyHealth -= damage;
}

void healHero(int &heroHealth, int healAmount) {
    heroHealth += healAmount;
}

void battleSummary(const int heroHealth, const int enemyHealth) {
    std::cout << "Hero\'s health: " << heroHealth << '\n';
    std::cout << "Enemy\'s health: " << enemyHealth << '\n';

    if (heroHealth > enemyHealth) {
        std::cout << "Hero has won!\n";
    }
    else {
        std::cout << "enemy has won..\n";
    }
}


int main() {
    int heroHealth;
    int heroDamage;
    int heroHeal;
    int enemyHealth;

    std::cout << "Enter heros starting health: ";
    std::cin >> heroHealth;

    std::cout << "Enter enemys starting health: ";
    std::cin >> enemyHealth;

    std::cout << "How much damage does the hero want to deal: ";
    std::cin >> heroDamage;
    attackEnemy(enemyHealth, heroDamage);

    std::cout << "Enter how much the hero should be healed: ";
    std::cin >> heroHeal;
    healHero(heroHealth, heroHeal);

    std::cout << "Sumarizing battle...\n";
    battleSummary(heroHealth, enemyHealth);
    return 0;
}