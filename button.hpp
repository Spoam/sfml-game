#include <SFML/Graphics.hpp>

class Button : sf::Shape{

    public:

        Button();

    private:
        double width_;
        double height_;
        double x_;
        double y_;
};