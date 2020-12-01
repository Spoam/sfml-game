#include "renderer.hpp"
#include <iostream>

void Renderer::render() const{
    for(auto i : this->shapes){
        this->windowRef_.draw(*i);
    }
}

Renderer::~Renderer(){
    for(auto i : this->shapes){
        delete i;
    }
}

void Renderer::addShape(sf::Shape* shape){
    this->shapes.push_back(shape);
}