#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "particle.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    Particle p1;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Blue);

        p1.update();
        window.draw(p1);

        window.display();
        
    }

    return 0;
}