#include "npc.hpp"

NPC::NPC(const std::string& name, int energy, int speed, int attack, int defense, int mana, int experience, int level, int hunger, const Weapon& weapon)
: mName(name)
, mEnergy(energy)
, mSpeed(speed)
, mAttack(attack)
, mDefense(defense)
, mMana(mana)
, mExperience(experience)
, mLevel(level)
, mHunger(hunger)
, mWeapon(weapon)
{
}


const std::string& NPC::getName() const
{
return mName;
}

void NPC::setName(const std::string& name)
{
mName = name;
}

int NPC::getEnergy() const
{
return mEnergy;
}

void NPC::setEnergy(int energy)
{
mEnergy = energy;
}

int NPC::getSpeed() const
{
return mSpeed;
}

void NPC::setSpeed(int speed)
{
mSpeed = speed;
}

int NPC::getAttack() const
{
return mAttack;
}

void NPC::setAttack(int attack)
{
mAttack = attack;
}

int NPC::getDefense() const
{
return mDefense;
}

void NPC::setDefense(int defense)
{
mDefense = defense;
}

int NPC::getMana() const
{
return mMana;
}

void NPC::setMana(int mana)
{
mMana = mana;
}

int NPC::getExperience() const
{
return mExperience;
}

void NPC::setExperience(int experience)
{
mExperience = experience;
}

int NPC::getLevel() const
{
return mLevel;
}

void NPC::setLevel(int level)
{
mLevel = level;
}

int NPC::getHunger() const
{
return mHunger;
}

void NPC::setHunger(int hunger)
{
mHunger = hunger;
}

const sf::Sprite& NPC::getSprite() const
{
return mSprite;
}

void NPC::setSprite(const sf::Sprite& sprite)
{
mSprite = sprite;
}

const Weapon& NPC::getWeapon() const
{
return mWeapon;
}

void NPC::setWeapon(const Weapon& weapon)
{
mWeapon = weapon;
}

const std::vector<MagicAttack>& NPC::getMagicAttacks() const
{
return mMagicAttacks;
}

void NPC::addMagicAttack(const MagicAttack& magicAttack)
{
mMagicAttacks.push_back(magicAttack);
}

const std::vector<PhysicalAttack>& NPC::getPhysicalAttacks() const
{
return mPhysicalAttacks;
}

void NPC::addPhysicalAttack(const PhysicalAttack& physicalAttack)
{
mPhysicalAttacks.push_back(physicalAttack);
}