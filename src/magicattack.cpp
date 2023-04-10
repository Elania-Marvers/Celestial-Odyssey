#include "magicattack.hpp"

MagicAttack::MagicAttack(const std::string& name, int manaCost, int damage, const sf::Sprite& sprite)
: mName(name)
, mManaCost(manaCost)
, mDamage(damage)
, mSprite(sprite)
{
}

const std::string& MagicAttack::getName() const
{
return mName;
}

void MagicAttack::setName(const std::string& name)
{
mName = name;
}

int MagicAttack::getManaCost() const
{
return mManaCost;
}

void MagicAttack::setManaCost(int manaCost)
{
mManaCost = manaCost;
}

int MagicAttack::getDamage() const
{
return mDamage;
}

void MagicAttack::setDamage(int damage)
{
mDamage = damage;
}

const sf::Sprite& MagicAttack::getSprite() const
{
return mSprite;
}

void MagicAttack::setSprite(const sf::Sprite& sprite)
{
mSprite = sprite;
}