package java3project;
import java.util.Scanner;

public class Human
{
    private String name;
    private int grade;
    
    public Human(){
    }
    
    private static void prt(String _str) {System.out.println(_str);}
    
    private static boolean QuitChecker(Scanner _scn){
        prt("Your choice?");
		int n = _scn.nextInt();
		return n != 1;
    }
    
    private static void rank(Human _hs[], int _ns){
        
        for(int i = 0; i < _ns; i++){
            
            prt("The " 
             + ((i > 1) ? i+1+"th " : (i == 0) ? "first " : "second ")
             + "grade is "
             + _hs[i].name
             + " and "
             + (((_hs[i].grade >= 90) ? "A" : (_hs[i].grade >= 80) ? "B" : "C"))
            );
        }
    }
    
    private static void sort(Human _hs[], int _ns){
        
        for(int i = 0; i < _ns-1; i++){
            for(int j = 0; j < _ns-i-1; j++){
                if(_hs[j].grade < _hs[j+1].grade){
                    Human temp = _hs[j];
                    _hs[j] = _hs[j+1];
                    _hs[j+1] = temp;
                }
            }
        }
    }
    
	public static void main(String[] args) {
		
		Scanner scn = new Scanner(System.in);
		Human humans[] = new Human[100];
		
		prt("Welcome to system.  Choice NO in below.");
		prt(" 0. quit.");
		prt("1. input.");
		prt("");
		
		int num = 0;
		while(!QuitChecker(scn)){
		    
		    humans[num] = new Human();
		    
		    prt("Name?");
		    humans[num].name = scn.next();
		    
		    prt("grade?");
		    humans[num].grade = scn.nextInt();
		    
		    num++;
		}
		
		sort(humans, num);
		rank(humans, num);
	}
}
