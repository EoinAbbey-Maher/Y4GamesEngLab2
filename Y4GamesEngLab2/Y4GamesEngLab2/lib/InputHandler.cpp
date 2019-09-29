#include "InputHandler.h"


void InputHandler::handleInput(sf::Event t_event)
{
	if (sf::Keyboard::Q == t_event.key.code)
	{
		m_commandSequence->add(buttonQ);
	}
	else if (sf::Keyboard::W == t_event.key.code)
	{
		m_commandSequence->add(buttonW);
	}
	else if (sf::Keyboard::E == t_event.key.code)
	{
		m_commandSequence->add(buttonE);
	}
	else if (sf::Keyboard::R == t_event.key.code)
	{
		m_commandSequence->add(buttonR);
	}
	else if (sf::Keyboard::T == t_event.key.code)
	{
		m_commandSequence->add(buttonT);
	}
	else if (sf::Keyboard::Y == t_event.key.code)
	{
		m_commandSequence->add(buttonY);
	}
	else if (sf::Keyboard::BackSpace == t_event.key.code)
	{
		m_commandSequence->undo();
	}
	else if (sf::Keyboard::LControl == t_event.key.code || sf::Keyboard::RControl == t_event.key.code)
	{ 
		m_commandSequence->redo();
	}
	m_commandSequence->execute();
}
