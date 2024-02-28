#ifndef MY_GAME_PROJECT_GAMESTATE_H
#define MY_GAME_PROJECT_GAMESTATE_H

#include "State.h"

class GameState :
    public State{
private:


public:
    GameState(sf::RenderWindow* window);
    virtual ~GameState();

    //Functions
    void endState();
    void updateKeyBinds(const float& dt);
    void update(const float& dt);
    void render(sf::RenderTarget* target = nullptr);
};

#endif //MY_GAME_PROJECT_GAMESTATE_H
