#include "Subscriber.h"

Subscriber::Subscriber(std::string name)
{
	this->name = name;
}
Subscriber::~Subscriber()
{

}
void Subscriber::update(std::string message)
{
	this->message = message;
	std::cout << "this is a message from a subscriber which is called " << name
		<< ". message is " << message << std::endl;
}