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
    std::list<GameObject*> objs;
public:
    Scene(int, int, DrawHandler*, sf::RenderWindow*);
    void update();
    void fireBullet(int, int, int, int);
};

#endif // SCENE_H
