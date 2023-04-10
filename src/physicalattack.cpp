#include "physicalattack.hpp"

PhysicalAttack::PhysicalAttack(const std::string& name, int energyCost, int damage, const sf::Sprite& sprite)
: mName(name)
, mEnergyCost(energyCost)
, mDamage(damage)
, mSprite(sprite)
{
}

const std::string& PhysicalAttack::getName() const
{
return mName;
}

void PhysicalAttack::setName(const std::string& name)
{
mName = name;
}

int PhysicalAttack::getEnergyCost() const
{
return mEnergyCost;
}

void PhysicalAttack::setEnergyCost(int energyCost)
{
mEnergyCost = energyCost;
}

int PhysicalAttack::getDamage() const
{
return mDamage;
}

void PhysicalAttack::setDamage(int damage)
{
mDamage = damage;
}

const sf::Sprite& PhysicalAttack::getSprite() const
{
return mSprite;
}

void PhysicalAttack::setSprite(const sf::Sprite& sprite)
{
mSprite = sprite;
}