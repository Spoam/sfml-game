#include <SFML/Graphics.hpp>


class Renderer {

    public:

        Renderer(sf::RenderWindow& window) : windowRef_(window){};

        ~Renderer();

        Renderer(const Renderer&) = delete;
        Renderer& operator=(const Renderer&) = delete;

        void render() const;

        void addShape(sf::Shape* shape);


    private:

        sf::RenderWindow& windowRef_;
        std::vector<sf::Shape*> shapes;
};