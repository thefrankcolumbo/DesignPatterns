#include "ConcretePublisher.h"

void ConcretePublisher::ChangeMessage(std::string message)
{
	updateSubscriber(message);
}