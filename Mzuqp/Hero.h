#pragma once
#include "SFML\Graphics.hpp"

class Hero : public sf::Sprite
{
private:
	sf::Vector2f Velocity;
	float Speed = 1;

	void Move(); //Do stuff with this
	void Input()
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			Velocity.x = Speed;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			Velocity.x = Speed;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			Velocity.y =Speed;
		
	}
public:

	Hero() {
		sf::Texture spriteSheet; spriteSheet.loadFromFile("srite.png");
		setTexture(spriteSheet);
		setTextureRect(sf::IntRect(0, 0, 32, 32));
	}
};