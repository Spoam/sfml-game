#include "button.hpp"
#include <iostream>

Button::Button(){
    std::cout << "Button created" << std::endl;
    sf::CircleShape* s  = new sf::CircleShape(50.f);
    s->setFillColor(sf::Color::Blue);
    shape = s;
}
