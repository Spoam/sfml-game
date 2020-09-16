#include <SFML/Graphics.hpp>


class Renderer {

    public:

        Renderer(sf::RenderWindow& window) : windowRef_(window){};

        void render();

        void addShape(sf::Shape* shape);


    private:

        sf::RenderWindow& windowRef_;
        std::vector<sf::Shape*> shapes;
};