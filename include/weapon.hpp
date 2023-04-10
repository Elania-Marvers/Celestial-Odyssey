#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <SFML/Graphics.hpp>

class Weapon {
public:
Weapon(const std::string& name, int energyCost, int manaCost, int damage, const sf::Sprite& sprite);
const std::string& getName() const;
void setName(const std::string& name);

int getEnergyCost() const;
void setEnergyCost(int energyCost);

int getManaCost() const;
void setManaCost(int manaCost);

int getDamage() const;
void setDamage(int damage);

const sf::Sprite& getSprite() const;
void setSprite(const sf::Sprite& sprite);
private:
std::string mName;
int mEnergyCost;
int mManaCost;
int mDamage;
sf::Sprite mSprite;
};

#endif // WEAPON_HPP