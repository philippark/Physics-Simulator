#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "goldfish.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    std::vector<test::Goldfish> objs; 

    test::Goldfish fish;
    objs.push_back(fish);


    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Blue);

        test::Goldfish obj;
        objs.push_back(obj);

        for (int i = 0; i < objs.size(); i++){
            objs[i].move();
            window.draw(objs[i]);
        }
        
        
        window.display();
    }

    return 0;
}