#include <SFML/Graphics.hpp>
#include "button.hpp"
#include "renderer.hpp"

namespace GameLoop{


sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");   

Renderer renderer(window);

void update(sf::RenderWindow& window) {

    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }

}

void draw(sf::RenderWindow& window, Renderer& renderer) {

    window.clear();
    renderer.render();
    window.display();

}

void game(){

    sf::CircleShape* shape = new sf::CircleShape(100.f);
    shape->setFillColor(sf::Color::Green);

    renderer.addShape(shape);


    while (window.isOpen())
    {

        update(window);
        draw(window, renderer);

    }
}

}

int main()
{

    GameLoop::game();
    return 0;
}
