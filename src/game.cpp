#ifndef GAME_CPP
#define GAME_CPP

#include "main.hpp"


Game::Game()
  : mWindow(sf::VideoMode(1080, 720), "Celestial Odyssey")
{
  // Load and set the window icon
  mIconTexture = loadTexture("icon.png");
  mIcon.setTexture(mIconTexture);
  mWindow.setIcon(mIconTexture.getSize().x, mIconTexture.getSize().y, mIconTexture.copyToImage().getPixelsPtr());

  // Load font
  mFont = loadFont("ReturnofGanon.ttf");

  // Set title text
  mTitleText.setString("Celestial Odyssey");
  mTitleText.setFont(mFont);
  mTitleText.setCharacterSize(48);
  mTitleText.setFillColor(sf::Color(255, 165, 0)); // Yellow/orange color
  mTitleText.setStyle(sf::Text::Bold);

  // Center title
  sf::FloatRect textRect = mTitleText.getLocalBounds();
  mTitleText.setOrigin(textRect.left + textRect.width/2.0f, textRect.top  + textRect.height/2.0f);
  mTitleText.setPosition(sf::Vector2f(mWindow.getSize().x / 2.0f, mWindow.getSize().y / 2.0f));

  // Set title background
  mTitleBackground.setSize(sf::Vector2f(textRect.width + 20.0f, textRect.height + 20.0f));
  mTitleBackground.setFillColor(sf::Color::Black);
  mTitleBackground.setOutlineThickness(5.0f);
  mTitleBackground.setOutlineColor(sf::Color(255, 165, 0));
  mTitleBackground.setOrigin(mTitleBackground.getSize() / 2.0f);
  mTitleBackground.setPosition(mTitleText.getPosition());

  // Set title
  mWindow.setTitle("Celestial Odyssey");
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
      if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
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

    // Draw title background and text
    mWindow.draw(mTitleBackground);
    mWindow.draw(mTitleText);

    // Draw game objects here
    mWindow.display();
}

// Load sprites from ./assets/sprites/*.png
sf::Texture loadTexture(const std::string& filename) {
  sf::Texture texture;
  if (!texture.loadFromFile(SPRITE_PATH + filename)) {
    std::cout << "Failed to load texture: " << filename << std::endl;
  }
  return texture;
}


// Load sound from ./assets/sound/*.mp4
sf::SoundBuffer loadSound(const std::string& filename)
{
    sf::SoundBuffer buffer;
    buffer.loadFromFile(SOUND_PATH + filename);
    return buffer;
}

// Load font from ./assets/font/*.ttf
sf::Font loadFont(const std::string& filename)
{
    sf::Font font;
    font.loadFromFile(FONT_PATH + filename);
    return font;
}


#endif