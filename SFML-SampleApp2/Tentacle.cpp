#include "Tentacle.h"

void Tentacle::update(sf::RenderWindow& window)
{
    m_segments[0]->follow(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);

    for (int i = 1; i < m_segments.size(); i++)
    {
        m_segments[i]->follow(m_segments[i - 1]->getPosition().x, m_segments[i - 1]->getPosition().y);
    }
}

void Tentacle::draw(sf::RenderWindow& window)
{
    for (auto seg : m_segments)
    {
        seg->draw(window);
    }
}
