#ifndef MAGIC_ATTACK_HPP
#define MAGIC_ATTACK_HPP

#include <string>
#include <SFML/Graphics.hpp>

class MagicAttack {
public:
MagicAttack(const std::string& name, int manaCost, int damage, const sf::Sprite& sprite);
const std::string& getName() const;
void setName(const std::string& name);

int getManaCost() const;
void setManaCost(int manaCost);

int getDamage() const;
void setDamage(int damage);

const sf::Sprite& getSprite() const;
void setSprite(const sf::Sprite& sprite);

private:
std::string mName;
int mManaCost;
int mDamage;
sf::Sprite mSprite;
};

#endif // MAGIC_ATTACK_HPP