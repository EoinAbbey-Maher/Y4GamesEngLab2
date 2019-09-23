#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
using namespace std;
class Command
{
public:
	virtual ~Command() {};
	virtual void Execute() = 0;

protected:
	Command() {};
};

class QCommand : public Command
{
public:
	virtual void execute() { cout << "Q" << endl; }
};

class WCommand : public Command
{
public:
	virtual void execute() { cout << "W" << endl; }
};

class ECommand : public Command
{
public:
	virtual void execute() { cout << "E" << endl; }
};

class RCommand : public Command
{
public:
	virtual void execute() { cout << "R" << endl; }
};

class TCommand : public Command
{
public:
	virtual void execute() { cout << "T" << endl; }
};

class YCommand : public Command
{
public:
	virtual void execute() { cout << "Y" << endl; }
};


#endif // !COMMAND_H

