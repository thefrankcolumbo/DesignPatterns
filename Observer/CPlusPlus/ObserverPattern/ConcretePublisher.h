#pragma once
#include "Publisher.h"

// This class is the real class that implements the Publisher.
// This class is the entity whose change will affect other objects.

class ConcretePublisher : public Publisher
{
public:
	void ChangeMessage(std::string message);
};