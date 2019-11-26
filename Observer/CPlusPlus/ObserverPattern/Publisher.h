#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include "Subscriber.h"

// This class keeps track of all the observers and provides the facility to add or remove the observers.
// It is the class that is responsible for updating the observers when any change occurs.

class Publisher
{
private:
	// stores the list of suibscribers / listeners
	std::vector<Subscriber*> subscribers;
public:
	Publisher();
	~Publisher();
	void addSubscriber(Subscriber* subscriber);
	void removeSubscriber(Subscriber* subscriber);
	void updateSubscriber(std::string message);
};