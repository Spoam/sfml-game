#include <SFML/Graphics.hpp>
#include <utility>
#include "button.hpp"
#include "renderer.hpp"

namespace GameLoop{


sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");   

Renderer renderer(window);

void update() {

    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }

}

void draw() {

    window.clear();
    renderer.render();
    window.display();

}

void addShapes(){

    sf::CircleShape* shape = new sf::CircleShape(100.f);
    shape->setFillColor(sf::Color::Green);

    renderer.addShape(shape);

    //Button b = Button();
    //shape = b.shape;

    //renderer.addShape(shape);


}

void game(){

    addShapes();

    while (window.isOpen())
    {

        update();
        draw();

    }
}

}

int main()
{

    GameLoop::game();
    return 0;
}
