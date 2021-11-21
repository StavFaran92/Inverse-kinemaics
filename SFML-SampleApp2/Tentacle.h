#pragma once

#include <memory>
#include <vector>

#include "src/Segment.h"

class Tentacle
{
public:
	Tentacle(const int x, const int y, const int segCount, const float segLength)
	{
		m_segments.reserve(segCount);
		for (int i = 0; i < segCount; i++)
		{
			m_segments.push_back(std::make_shared<Segment>(x, y, segLength));
		}
	}

	void update(sf::RenderWindow& window);
	void draw(sf::RenderWindow& window);

private:
	std::vector<std::shared_ptr<Segment>> m_segments;
};

