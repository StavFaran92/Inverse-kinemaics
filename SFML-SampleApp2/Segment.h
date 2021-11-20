#pragma once

#include <SFML/Graphics.hpp>
#include <math.h>
#include <SFML/Graphics/Drawable.hpp>

extern const float PI;

class Segment
{
public:
	Segment(const int mag) : m_mag(mag) {

	}
	void setup();
	void draw(sf::RenderWindow& window) const;

private:
	const int m_mag = 0;
};

