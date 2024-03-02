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

class Entity {
private:

public:
    Entity();
    virtual ~Entity();

    //Functions
    void update(const float& dt) = 0;
    void render(sf::RenderTarget& target) = 0;

};


#endif //MY_GAME_PROJECT_ENTITY_H
