#include "Segment.h"

void Segment::setup()
{
    //m_line.setPosition(0, window.getSize().y / 2);
}

void Segment::follow(float targetX, float targetY) 
{
    float dx = targetX - m_line->getPosition().x;
    float dy = targetY - m_line->getPosition().y;

    float angle = atan2f(dy, dx);
    m_line->setRotation(angle * 180 / PI);

    m_line->setPosition(targetX - m_mag * cos(angle), targetY - m_mag * sin(angle));
}

void Segment::draw(sf::RenderWindow& window)
{ 
    window.draw(*m_line);
}
