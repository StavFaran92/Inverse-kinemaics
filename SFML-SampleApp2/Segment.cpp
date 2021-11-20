#include "Segment.h"

void Segment::setup()
{
}

void Segment::draw(sf::RenderWindow& window) const
{
    sf::RectangleShape line(sf::Vector2f(m_mag, 5.f));
    line.setPosition(window.getSize().x / 2, window.getSize().y / 2);
    float dx = sf::Mouse::getPosition(window).x - line.getPosition().x;
    float dy = sf::Mouse::getPosition(window).y - line.getPosition().y;

    float angle = atan2f(dy, dx);
    line.rotate(angle * 180 / PI);

    line.setPosition(sf::Mouse::getPosition(window).x - m_mag * cos(angle), sf::Mouse::getPosition(window).y - m_mag * sin(angle));

    window.draw(line);
}
