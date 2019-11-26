#pragma once
#include <iostream>

// This represents an interface that defines the method that should be called whenever there is change

class IObserver
{
public:
	virtual void update(std::string message) = 0;
};