#ifndef GOLDFISH_H
#define GOLDFISH

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

namespace sf {
class Texture;
}

namespace test{
class Goldfish : public sf::Drawable{
public:
    Goldfish(const sf::Texture& playerTexture);
    Goldfish();
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    void move();

private:
    sf::Sprite mSprite;
    sf::Vector2i mSource;
    sf::RectangleShape rectangle;

    int x_ = 1;
    int y_ = 1;
};

}

#endif