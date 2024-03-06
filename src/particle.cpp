#include "particle.h"

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

Particle::Particle(){
    particle.setRadius(50);
}

void Particle::update(){
    time += timestep;
    sf::Vector2f position = particle.getPosition(); 

    if (position.y >= 500){
        return;
    }
    int new_y = position.y + (timestep * (velocity + timestep * acceleration / 2));

    particle.setPosition(position.x, new_y);
    velocity += timestep * acceleration;
}