#include "goldfish.h"

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

#include <iostream>

namespace test {
Goldfish::Goldfish(const sf::Texture& imagePath) :
                mSprite(imagePath){

    // do not need that line anymore, thanks to initialiser list
    //pSprite.setTexture(pTexture);

    mSprite.setScale(5, 5);

}

Goldfish::Goldfish(){
    rectangle.setSize(sf::Vector2f(100.f, 100.f));
}

void Goldfish::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(rectangle);
}


void Goldfish::move(){
    rectangle.move(x_, y_);

    sf::Vector2f position = rectangle.getPosition();

    if (position.x == 800){
        x_ = -1;
    }
    if (position.x == 0){
        x_ = 1;
    }
    if (position.y == 600){
        y_ = -1;
    }
    if (position.y == 0){
        y_ = 1;
    }

}


} //end of namespace