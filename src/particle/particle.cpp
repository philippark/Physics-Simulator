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
    particle.setPosition(100, 100);
    screen_width = width;
    screen_height = height;
}

void Particle::update(){
    sf::Vector2f position = particle.getPosition(); 

    //bounce off bottom
    if (position.y + 2*particle.getRadius() > screen_height){
        y_velocity = -y_velocity * energy_loss;
        particle.setPosition(position.x, screen_height - 2*particle.getRadius());
    }

    //bounce off top
    if (position.y < 0){
        y_velocity = -y_velocity * energy_loss;
        particle.setPosition(position.x, 0);
    }

    //bounce off right wall
    if (position.x + 2*particle.getRadius() > screen_width){
        x_velocity = -x_velocity * energy_loss;
        particle.setPosition(screen_width - 2*particle.getRadius(), position.y);
    }

    //bounce off left wall
    if (position.x < 0){
        x_velocity = -x_velocity * energy_loss;
        particle.setPosition(0, position.y);
    }

    particle.move(x_velocity, y_velocity);
    y_velocity += acceleration;

}