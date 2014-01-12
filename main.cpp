#include <SFML/Graphics.hpp>
#include "hero.h"
#include "drawhandler.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "BOOLET");


    // Init
    Hero *hero = new Hero(400, 300);
    DrawHandler drawer;

    while (window.isOpen())
    {
        // Magic stuff. Doesn't work wihout it.
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //Testing
        hero->readInput();
        //Testing

        drawer.doStuff(&window);

    }
    return 0;
}
