#include "hero.h"

Hero::Hero(int x, int y):
    GameObject(x,y,5)
{
}


void Hero::readInput()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        GameObject::move(0, -1);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        GameObject::move(0, 1);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        GameObject::move(-1, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        GameObject::move(1, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
        fire();
    //std::cout<<"X: " << getX() << " Y: " << getY() << std::endl;
}

void Hero::update(Scene *)
{
}

void Hero::fire(){
    //TODO Check cooldown
    //std::cout << "Pew!\n";
    //Bullet* bulle = new Bullet(this->getX(), this->getY());
    //bulle->setVel(0, -10);
}
