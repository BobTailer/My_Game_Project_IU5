#ifndef MY_GAME_PROJECT_GAME_H
#define MY_GAME_PROJECT_GAME_H

#include "States/GameState.h"

class Game {
private:
    //Variables
    sf::RenderWindow *window;
    sf::Event sfEvent;

    sf::Clock dtClock;//tarck how long it takes to render and update 1 call
    float dt;

    std::stack<State*> states;

    //Initialization
    void initWindow();
    void initStates();

public:
    //ConstructionsDestructures
    Game();
    virtual ~Game();

    //Functions

    //Regular
    void endApplication();

    //Update
    void updateDT();
    void updateSFMLEvents();
    void update();

    //Render
    void render();

    //Core
    void run();
};


#endif //MY_GAME_PROJECT_GAME_H
