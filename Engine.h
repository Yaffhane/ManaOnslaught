
/* 
 * File:   Engine.h
 * Author: iaphanemekki-felix
 *
 * Created on 7 novembre 2018, 14:59
 */

#ifndef ENGINE_H
#define ENGINE_H

class Engine {
    
private:
    
    //SFML Render Window
   // sf::RenderWindow* window;

    //Initializes the engine
    bool Init();               

    //Main Game Loop
    void MainLoop();           

    //Renders one frame
    void RenderFrame();

    //Processes user input
    void ProcessInput();

    //Updates all Engine internals
    void Update();             
 
public:

    Engine();
    ~Engine();
    void Go();                  //Starts the engine

};


#endif /* ENGINE_H */

