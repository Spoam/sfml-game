#include "renderer.hpp"

void Renderer::render(){
    for(auto i : this->shapes){
        this->windowRef_.draw(*i);
    }
}

void Renderer::addShape(sf::Shape* shape){
    this->shapes.push_back(shape);
}