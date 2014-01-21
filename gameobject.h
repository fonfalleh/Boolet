#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
private:
    int px;
    int vx;
    int py;
    int vy;
    int radius;
public:
    int getX();
    int getY();
    int getRadius();
    void setPos(int, int);
    void move(int, int);
    GameObject(int x, int y, int r);
};

#endif // GAMEOBJECT_H
