#include "Publisher.h"
#include "Subscriber.h"

int main()
{
	Publisher publisher;

	// create subscribers
	Subscriber fred("fred");
	Subscriber bert("bert");

	// add subscribers to the publisher subscriber list
	publisher.addSubscriber(&fred);
	publisher.addSubscriber(&bert);

	// change the message in the publisher - both subscribers should print to console
	publisher.updateSubscriber("message one");

	// remove the first subscriber
	publisher.removeSubscriber(&fred);

	// change the message in the publisher - only bert should print to console
	publisher.updateSubscriber("message two");

	std::cin.get();

	return 0;
}