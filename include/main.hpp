#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <string>

const std::string SPRITE_PATH = "./assets/sprites/";
sf::Texture loadTexture(const std::string& filename);

const std::string SOUND_PATH = "./assets/sound/";
sf::SoundBuffer loadSound(const std::string& filename);

const std::string FONT_PATH = "./assets/font/";
sf::Font loadFont(const std::string& filename);

class Game {
public:
    Game();
    void run();

private:
    void processEvents();
    void update(sf::Time deltaTime);
    void render();

    sf::RenderWindow mWindow;
    sf::Texture mIconTexture;
    sf::Sprite mIcon;
    sf::Clock mClock;
    sf::RectangleShape mTitleBackground;
    sf::Text mTitleText;
    sf::Font mFont;
};



#endif // MAIN_HPP



