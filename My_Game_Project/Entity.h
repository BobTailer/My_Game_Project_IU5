#ifndef MY_GAME_PROJECT_ENTITY_H
#define MY_GAME_PROJECT_ENTITY_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <vector>
#include <stack>
#include <map>

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Entity{
private:

protected:
    sf::RectangleShape shape;
    float movementSpeeed;

public:
    Entity();
    virtual ~Entity();

    //Functions
    virtual void move(const float& dt, const float x, const float y);

    virtual void update(const float& dt);
    virtual void render(sf::RenderTarget* target);

};


#endif //MY_GAME_PROJECT_ENTITY_H
