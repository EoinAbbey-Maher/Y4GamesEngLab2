#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "SFML/Graphics.hpp"
#include "Command.h"
class InputHandler
{
public:
	///Function to handle each button Press
	void handleInput(sf::Event t_event);

	/// <summary>
	/// List of Commands
	/// </summary>
	Command* buttonQ = new QCommand();
	Command* buttonW = new WCommand();
	Command* buttonE = new ECommand();
	Command* buttonR = new RCommand();
	Command* buttonT = new TCommand();
	Command* buttonY = new YCommand();
	Command* buttonBackSp = new BackspCommand();
	Command* buttonCTRL = new CtrlCommand();
private:

	/// <summary>
	/// Vector holding all Commands
	/// </summary>
	MacroCommand* m_commandSequence = new MacroCommand();

};

#endif // !INPUTHANDLER_H
