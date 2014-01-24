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

    GameObject(int x, int y, int r);
    int getX();
    int getY();
    int getXV();
    int getYV();
    int getRadius();
    void setPos(int, int);
    void setVel(int, int);
    void updateVel(int, int);
    void move(int, int);
};

#endif // GAMEOBJECT_H
