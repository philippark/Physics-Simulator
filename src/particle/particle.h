#ifndef PARTICLE_H
#define PARTICLE_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


class Particle : public sf::Drawable {
public:
    Particle();
    Particle(int width, int height);
    void update();

private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
    {
        target.draw(particle);
    }

    int screen_width;
    int screen_height;

    float y_velocity = 5;
    float x_velocity = 0;
    float acceleration = 1;
    float energy_loss = 0.8;

    sf::CircleShape particle;
};

#endif