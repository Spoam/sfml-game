#include <SFML/Graphics.hpp>

class Button{

    public:

        Button();
        sf::CircleShape* shape;

    private:
        double width_;
        double height_;
        double x_;
        double y_;
};