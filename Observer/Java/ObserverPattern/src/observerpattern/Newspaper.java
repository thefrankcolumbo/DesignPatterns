
package observerpattern;

import java.util.ArrayList;

// the newspaperis an observable, and when news gets updated, the state of newspaper changes. 
// When the change happens, the newspapers notifies the observers about this fact by calling their update() method.

public class Newspaper 
{
    private String news;
    private ArrayList<Subscriber> subscribers = new ArrayList<>();
    
    public void addSubscribers(Subscriber subscriber)
    {
        this.subscribers.add(subscriber);
    }
    public void removeSubscriber(Subscriber subscriber)
    {
        this.subscribers.remove(subscriber);
    }
    public void reportNewsFlash(String newsFlash)
    {
        this.news = newsFlash;
        for (Subscriber subscriber : this.subscribers)
        {
            subscriber.update(this.news);
        }
    }
  
}
