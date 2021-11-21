#pragma once

#include <SFML/Graphics.hpp>
#include <math.h>
#include <SFML/Graphics/Drawable.hpp>
#include <memory>

extern const float PI;

class Segment
{
public:
	Segment(const int x, const int y, const int mag) : m_mag(mag) {
		m_line = std::make_shared<sf::RectangleShape>(sf::Vector2f(m_mag, 5));
		m_line->setPosition(x, y);
	}
	void setup();
	void follow(float targetX, float targetY) ;
	void draw(sf::RenderWindow& window) ;
	inline sf::Vector2f getPosition() const {
		return m_line->getPosition();
	}

private:
	const int m_mag = 0;
	std::shared_ptr<sf::RectangleShape> m_line;
};

