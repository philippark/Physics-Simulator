#ifndef PARTICLE_H
#define PARTICLE_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


class Particle : public sf::Drawable {
public:
    Particle();
    void update();

private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
    {
        target.draw(particle);
    }

    int mass = 10;
    int velocity = 5;
    int acceleration = 9.8;

    float timestep = 0.2;
    float time = 0;

    sf::CircleShape particle;
};

#endif