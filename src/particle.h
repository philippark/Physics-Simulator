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

    float mass = 10;
    float velocity = 0;
    float acceleration = 1;
    float energy_loss = 0.95;

    float timestep = 0.2;
    float time = 0;

    sf::CircleShape particle;
};

#endif