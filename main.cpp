#include "drawhandler.h"
#include "utils.h"
#include "scene.h"

int main()
{
    // Init
    const int height = 315, width = 420;
    sf::RenderWindow window(sf::VideoMode(width, height), "BOOLET");
    DrawHandler drawer;
    Scene scene(width, height, &drawer, &window);

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

        scene.update();
    }
    return 0;
}
