#include <iostream>
#include <SFML\Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "Mzuqp");

	sf::Texture shop; shop.loadFromFile("shop.png");
	sf::Sprite spr; spr.setTexture(shop); spr.setScale(3, 3); spr.setColor(sf::Color::Color(50, 50, 50, 255));
	while (window.isOpen())
	{ 
		window.clear(sf::Color::Color(0, 255, 255, 255));
		
		window.draw(spr);
		window.display(); 
	}
}