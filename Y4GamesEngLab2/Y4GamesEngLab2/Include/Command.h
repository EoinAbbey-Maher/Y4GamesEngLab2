#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <vector>
using namespace std;

/// <summary>
/// Foundation Class for each command
/// </summary>
class Command
{
public:
	virtual ~Command() {};
	virtual void execute() = 0;
	virtual void undo() = 0;
	void setString(std::string t_string) { m_text = t_string; };
	std::string getString() { return m_text; };

protected:
	Command() {};
	std::string m_text;
	
};

// ----------------------- MACRO COMMANDS ------------------------- //

/// <summary>
/// Vector Class to hold and Execute all the commands input by the user
/// </summary>
class MacroCommand : public Command
{
public:
	MacroCommand(){ m_commands = new vector<Command* >(); };
	virtual ~MacroCommand();
	virtual void add( Command* );
	virtual void remove(Command*);
	virtual void execute();
	virtual void undo();
	virtual void redo();
	
private:
	int m_commandsEnd{};
	vector<Command*>* m_commands;
};

// -------------------------- COMMANDS ---------------------------- //
//-------------- All Commands available to the User --------------- //
class QCommand : public Command
{
public:
	virtual void execute() 
	{ 
		setString("Q"); 
	}
	virtual void undo() { setString(""); }
};

class WCommand : public Command
{
public:
	virtual void execute() 
	{ 
		setString("W"); 
	}
	virtual void undo() { setString(""); }
};

class ECommand : public Command
{
public:
	virtual void execute() { 
		setString("E"); 
	}
	virtual void undo() { setString(""); }
};

class RCommand : public Command
{
public:
	virtual void execute() { 
		setString("R"); 
	}
	virtual void undo() { setString(""); }
};

class TCommand : public Command
{
public:
	virtual void execute() { 
		setString("T"); 
	}
	virtual void undo() { setString(""); }
};

class YCommand : public Command
{
public:
	virtual void execute() { 
		setString("Y"); 
	}
	virtual void undo() { setString(""); }
};

class BackspCommand : public Command
{
public:
	virtual void execute() {}
	virtual void undo() { setString(""); }
};


class CtrlCommand : public Command
{
public:
	virtual void execute() {}
	virtual void undo() { setString(""); }
};




#endif // !COMMAND_H

