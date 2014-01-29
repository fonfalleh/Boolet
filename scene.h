#ifndef SCENE_H
#define SCENE_H

#include "gameobject.h"
#include "hero.h"
#include "bullet.h"
#include "drawhandler.h"
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <list>

class Scene
{
private:
    sf::RenderWindow* window;
    DrawHandler* drawer;
    Hero *hero;
public:
    Scene(int, int, DrawHandler*, sf::RenderWindow*);
    void update();
};

#endif // SCENE_H
