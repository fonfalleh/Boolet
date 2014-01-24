#include <SFML/Graphics.hpp>
#include "hero.h"
#include "bullet.h"
#include "drawhandler.h"
#include "utils.h"


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "BOOLET");
    // Init
    DrawHandler drawer;
    Hero *hero = new Hero(400, 300);
    drawer.addGO(hero, 19, 5);
    Bullet *bullet = new Bullet(10, 10);
    drawer.addGO(bullet, 12, 17);

    //Timekeeping
    sf::Clock* timer = new sf::Clock();
    sf::Time step = sf::milliseconds(1000) / 60.0f; //60 fps
    sf::Time elapsed;
    while (window.isOpen())
    {
        elapsed += timer->restart();
        if(elapsed < step)
            continue;
        elapsed -= step;

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
