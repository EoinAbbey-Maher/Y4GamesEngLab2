#include "Command.h"

MacroCommand::~MacroCommand()
{
	if (m_commands)
	{
		delete m_commands;
	}
}

void MacroCommand::add(Command* t_c)
{
	///erases the redo values from the vector
	m_commands->erase((m_commands->begin() + m_commandsEnd), m_commands->end());
	///adds the new command to the end of the list
	m_commands->insert(m_commands->begin() + (m_commandsEnd),t_c);
	/// Increases the size of the list iterator
	m_commandsEnd++;
}

void MacroCommand::remove(Command* t_c)
{
	/// Removes a command from the list
	m_commands->erase(std::find(m_commands->begin(), m_commands->end(), t_c ), m_commands->end());
}

void MacroCommand::execute()
{
	/// <summary>
	/// Clears the Console Window
	/// </summary>
	std::system("CLS");

	/// <summary>
	/// Loops through the vector of the commands up to the point the iterator is on
	/// </summary>
	for (int i = 0; i < m_commandsEnd; i++)
	{
		
		Command* c = m_commands->at(i);
		c->execute();
		std::cout << c->getString();
	}
}

void MacroCommand::undo()
{
	/// <summary>
	/// steps the Iterator back one in the list
	/// </summary>
	if (m_commandsEnd != 0)
	{
		m_commandsEnd--;
	}
}

void MacroCommand::redo()
{
	/// <summary>
	/// Increases the Iterator position on the list to reshow the undone words
	/// </summary>
	if (m_commandsEnd != m_commands->size())
	{
		m_commandsEnd++;
	}
}

