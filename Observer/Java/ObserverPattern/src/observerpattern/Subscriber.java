
package observerpattern;

public class Subscriber implements INewsFlash
{
    private String name;
    private String news;
    
    public Subscriber(String name)
    {
        this.name = name;
    }

    @Override
    public void update(String newsFlash) {
        this.news = newsFlash;
        getNews();
    }
    
    private void getNews()
    {
        System.out.println("this subscriber called " + name + " has just got this news flash " + news);
    }
}
