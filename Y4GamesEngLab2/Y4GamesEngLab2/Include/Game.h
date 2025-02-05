#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include "Command.h"
#include "InputHandler.h"

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	
	sf::RenderWindow m_window; // main SFML window

	/// <summary>
	/// Button Handler
	/// </summary>
	InputHandler m_handler;

	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP

