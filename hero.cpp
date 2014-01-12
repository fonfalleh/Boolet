#include "hero.h"
#include <SFML/Window.hpp>

Hero::Hero(int x, int y):
    pX(x), pY(y)
{
}
void Hero::move(int x, int y)
{
     pX += x;
     pY += y;
}

void Hero::readInput()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        move(0, -1);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        move(0, 1);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        move(-1, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        move(1, 0);
    }
    std::cout<< "pX: " << pX << "\npY: " << pY << std::endl;
}
