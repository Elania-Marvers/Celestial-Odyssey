#ifndef NPC_HPP
#define NPC_HPP

#include <vector>
#include <string>
#include <SFML/Graphics.hpp>
#include "weapon.hpp"
#include "magicattack.hpp"
#include "physicalattack.hpp"

class NPC {
public:
NPC(const std::string& name, int energy, int speed, int attack, int defense, int mana, int experience, int level, int hunger, const Weapon& weapon);
const std::string& getName() const;
void setName(const std::string& name);

int getEnergy() const;
void setEnergy(int energy);

int getSpeed() const;
void setSpeed(int speed);

int getAttack() const;
void setAttack(int attack);

int getDefense() const;
void setDefense(int defense);

int getMana() const;
void setMana(int mana);

int getExperience() const;
void setExperience(int experience);

int getLevel() const;
void setLevel(int level);

int getHunger() const;
void setHunger(int hunger);

const sf::Sprite& getSprite() const;
void setSprite(const sf::Sprite& sprite);

const Weapon& getWeapon() const;
void setWeapon(const Weapon& weapon);

const std::vector<MagicAttack>& getMagicAttacks() const;
void addMagicAttack(const MagicAttack& magicAttack);

const std::vector<PhysicalAttack>& getPhysicalAttacks() const;
void addPhysicalAttack(const PhysicalAttack& physicalAttack);
private:
std::string mName;
int mEnergy;
int mSpeed;
int mAttack;
int mDefense;
int mMana;
int mExperience;
int mLevel;
int mHunger;
sf::Sprite mSprite;
Weapon mWeapon;
std::vector<MagicAttack> mMagicAttacks;
std::vector<PhysicalAttack> mPhysicalAttacks;
};

#endif // NPC_HPP