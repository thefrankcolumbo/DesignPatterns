#pragma once
#include "IObserver.h"
#include <iostream>

// This is the class which needs to keep itself updated with the change.
// This class just needs to implement the Observer and register itself
// ConcreteSubject and it is all set to receive the updates.

class Subscriber : IObserver
{
	std::string name;
	std::string message;
public:
	Subscriber(std::string name);
	~Subscriber();
	virtual void update(std::string message) override;
};