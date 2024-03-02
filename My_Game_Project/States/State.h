#ifndef MY_GAME_PROJECT_STATE_H
#define MY_GAME_PROJECT_STATE_H

#include "Entity.h"

class State {
private:
    sf::RenderWindow* window;
    std::vector<sf::Texture> textures;
    bool quit;

public:
    State(sf::RenderWindow* window);
    virtual ~State();

    const bool& getQuit() const;

    virtual void CheckForQuit();

    virtual void endState() = 0;
    virtual void updateKeyBinds(const float& dt) = 0;
    virtual void update(const float& dt) = 0;
    virtual void render(sf::RenderTarget* target = nullptr ) = 0;
};


#endif //MY_GAME_PROJECT_STATE_H
