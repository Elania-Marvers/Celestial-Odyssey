#ifndef PHYSICAL_ATTACK_HPP
#define PHYSICAL_ATTACK_HPP

#include <string>
#include <SFML/Graphics.hpp>

class PhysicalAttack {
public:
PhysicalAttack(const std::string& name, int energyCost, int damage, const sf::Sprite& sprite);
const std::string& getName() const;
void setName(const std::string& name);

int getEnergyCost() const;
void setEnergyCost(int energyCost);

int getDamage() const;
void setDamage(int damage);

const sf::Sprite& getSprite() const;
void setSprite(const sf::Sprite& sprite);
private:
std::string mName;
int mEnergyCost;
int mDamage;
sf::Sprite mSprite;
};

#endif // PHYSICAL_ATTACK_HPP