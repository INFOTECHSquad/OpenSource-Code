import Computations.*;
import java.util.Scanner;

public class main{
    public static void main(){
        // getting user input
        // public class
        // July 16, 2022 _ here I declare variables to be use across the program
        
        //string that contains the list of currency available
        String[] currency = {"PHP", "USD", "POUND", "YEN"};
        
        // variables to store the user input
        int current, convertToWhat, answer;
        double amount;
        
        // calling the package/method to use for conversion
        process Process = new process();
        
        // using scan method
        Scanner user = new Scanner(System.in);
        
        // do while loop to continuously execute the program
        
        do {
            // ask user what current currency currently have?
            System.out.println("==================================================");
            do{
                System.out.println("\n\nwhat type of currency do you currently have? ");
                System.out.println("Input its corresponding number ");
                for (int i = 0; i < 4; i++){
                    System.out.println(i + " : " + currency[i]);
                }
                current = user.nextInt();    
                
                if (current >= 4 ){
                        System.out.println("\n==================================================");
                        System.out.println("ERRROR \nthe number you input is not on the option");
                        System.out.println("==================================================");
                }  
            } while (current >= 4 );
            
            // how much money the user has?
            System.out.println("\n\nHow much? ");
            amount = user.nextDouble();
            
            // to check if the input the user is valid
            do{
            // convert in what currency?
            System.out.println("\nyou want to convert your " + amount + " " + currency[current] + " into what currency? ");
            for (int i = 0; i < 4; i++){
                System.out.println(i + " : " + currency[i]);
            }
            convertToWhat = user.nextInt();
                if (convertToWhat >= 4 ){
                        System.out.println("\n==================================================");
                        System.out.println("ERRROR \nthe number you input is not on the option, \nplease refer to its corresponding number, Thank you.");
                        System.out.println("==================================================");
                }   
                
            } while (convertToWhat >= 4 );
            
            // using if to identify
            if (currency[current] == currency[0] ){
                Process.phpTo(amount, convertToWhat);
            } else if (currency[current] == currency[1] ){
                Process.usdTo(amount, convertToWhat);
            } else if (currency[current] == currency[2] ){
                Process.poundTo(amount, convertToWhat);
            } else {
                Process.yenTo(amount, convertToWhat);
            }
            
            System.out.println("\n\nDo you want to convert again? \n1 : YES \n2 : NO ");
            answer = user.nextInt();
            System.out.print('\u000C');
        } while (answer != 2);
        
        System.out.println("==================================================");
        System.out.println("THANK YOU FOR USING OUR CURRENCY CONVERSION SYSTEM !");
        System.out.println("==================================================");
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}