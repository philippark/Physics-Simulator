#include "goldfish.h"

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

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
    rectangle.move(.1f, .1f);
}


} //end of namespace