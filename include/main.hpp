#ifndef MAIN_HPP
#define MAIN_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <string>

// Load sprites from ./assets/sprites/*.png
const std::string SPRITE_PATH = "./assets/sprites/";
sf::Texture loadTexture(const std::string& filename) {
  sf::Texture texture;
  texture.loadFromFile(SPRITE_PATH + filename);
  return texture;
}

// Load sound from ./assets/sound/*.mp4
const std::string SOUND_PATH = "./assets/sound/";
sf::SoundBuffer loadSound(const std::string& filename) {
  sf::SoundBuffer buffer;
  buffer.loadFromFile(SOUND_PATH + filename);
  return buffer;
}

// Load font from ./assets/font/*.ttf
const std::string FONT_PATH = "./assets/font/";
sf::Font loadFont(const std::string& filename) {
  sf::Font font;
  font.loadFromFile(FONT_PATH + filename);
  return font;
}

class Game {
public:
  Game();
  void run();

private:
  void processEvents();
  void update(sf::Time deltaTime);
  void render();
  sf::RenderWindow mWindow;
  sf::Sprite mIcon;
  sf::Clock mClock;
};
Game::Game()
  : mWindow(sf::VideoMode(800, 600), "SFML Game")
  , mIcon(loadTexture("icon.png"))
{
  // Set the window icon
  mWindow.setIcon(mIcon.getTexture()->getSize().x, mIcon.getTexture()->getSize().y, mIcon.getTexture()->copyToImage().getPixelsPtr());
}

void Game::run()
{
  while (mWindow.isOpen())
    {
      processEvents();
      update(mClock.restart());
      render();
    }
}

void Game::processEvents()
{
  sf::Event event;
  while (mWindow.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
	mWindow.close();
    }
}

void Game::update(sf::Time deltaTime)
{
  // Update game logic here
}

void Game::render()
{
  mWindow.clear(sf::Color::Black);
  // Draw game objects here
  mWindow.display();
}

#endif // MAIN_HPP
