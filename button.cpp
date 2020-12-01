#include "button.hpp"

Button::Button(){
    sf::CircleShape* s  = new sf::CircleShape(50.f);
    s->setFillColor(sf::Color::Blue);
    shape = s;
}
