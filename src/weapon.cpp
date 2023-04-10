#include "weapon.hpp"

Weapon::Weapon(const std::string& name, int energyCost, int manaCost, int damage, const sf::Sprite& sprite)
: mName(name)
, mEnergyCost(energyCost)
, mManaCost(manaCost)
, mDamage(damage)
, mSprite(sprite)
{
}

const std::string& Weapon::getName() const
{
return mName;
}

void Weapon::setName(const std::string& name)
{
mName = name;
}

int Weapon::getEnergyCost() const
{
return mEnergyCost;
}

void Weapon::setEnergyCost(int energyCost)
{
mEnergyCost = energyCost;
}

int Weapon::getManaCost() const
{
return mManaCost;
}

void Weapon::setManaCost(int manaCost)
{
mManaCost = manaCost;
}

int Weapon::getDamage() const
{
return mDamage;
}

void Weapon::setDamage(int damage)
{
mDamage = damage;
}

const sf::Sprite& Weapon::getSprite() const
{
return mSprite;
}

void Weapon::setSprite(const sf::Sprite& sprite)
{
mSprite = sprite;
}