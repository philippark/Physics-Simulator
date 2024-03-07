#include "particle.h"
#include <iostream>

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

Particle::Particle(){
    particle.setRadius(50);
}

Particle::Particle(int width, int height){
    particle.setRadius(50);
    screen_width = width;
    screen_height = height;
}

void Particle::update(){
    sf::Vector2f position = particle.getPosition(); 

    if (position.y + particle.getRadius() > screen_height){
        velocity = -velocity * energy_loss;
    }

    particle.move(0, velocity);
    velocity += acceleration;

}