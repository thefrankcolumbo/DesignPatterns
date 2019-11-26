#include "Publisher.h"

Publisher::Publisher() 
{

}
Publisher::~Publisher()
{

}
void Publisher::addSubscriber(Subscriber* subscriber)
{
	subscribers.push_back(subscriber);
}
void Publisher::removeSubscriber(Subscriber* subscriber)
{
	subscribers.erase(std::remove(subscribers.begin(), subscribers.end(), subscriber), subscribers.end());
}
void Publisher::updateSubscriber(std::string message)
{
	for (Subscriber* listen : subscribers)
	{
		listen->update(message);
	}
}