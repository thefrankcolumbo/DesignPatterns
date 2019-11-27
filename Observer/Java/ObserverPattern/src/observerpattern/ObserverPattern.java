
package observerpattern;

public class ObserverPattern 
{

    public static void main(String[] args) 
    {
        Newspaper newspaper = new Newspaper();
        
        //create subscribers
        Subscriber fred = new Subscriber("fred");
        Subscriber bert = new Subscriber("bert");
        
        //add subscribers to list
        newspaper.addSubscribers(fred);
        newspaper.addSubscribers(bert);
        
        //create news flash
        newspaper.reportNewsFlash("the tide is turning");
        
        //remove first subscriber
       newspaper.removeSubscriber(fred);
       
       // create another news flash
       newspaper.reportNewsFlash("subscribers fall by half");
        
    }
    
}
