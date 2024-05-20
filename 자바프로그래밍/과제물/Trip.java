import java.util.Scanner;

public class Trip
{
    Scanner sc = new Scanner(System.in);
    
    int cost = 0; // n만 원 단위.
    boolean peakSeason = false;
    
    void dateQuester(String _dateAndMonth){
        
        int index = _dateAndMonth.indexOf("/");
        
        String month = _dateAndMonth.substring(index+1);
        
        switch(month){
            case "May":
            case "June":
            case "July":
                peakSeason = true;
                break;
        }
    }
    
    void ticketQuester(int _ticket){
        if(_ticket > 2){
            System.out.println("there are no tickets.  Please buy the tickets, not more than 3");
            int n = sc.nextInt();
            ticketQuester(n);
        }
    }
    
    void priceCalculator(String _dest){
        switch(_dest){
            case "New York":
                cost+=150;
                break;
            case "Manila":
                cost+=100;
                break;
            case "London":
                cost+=200;
                break;
            default:
                break;
        }
        
        if(peakSeason){
            cost+=50;
        }
    }
    
	public static void main(String[] args) {
	    
	    Trip trip = new Trip();
	    Scanner sc = new Scanner(System.in);
	    
	    System.out.println("input departure date");
	    String date = sc.next();
		trip.dateQuester(date);
		
		System.out.println("How many tickets will you buy?");
		int ticket = sc.nextInt();
		trip.ticketQuester(ticket);
		
		System.out.println("where will you go?");
		String destination = sc.next();
		trip.priceCalculator(destination);
		
		System.out.print("your purchase is successful.  Price is ");
		System.out.println(trip.cost);
		
		sc.close();
	}
}
