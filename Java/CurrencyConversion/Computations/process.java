package Computations;
import java.util.Scanner;

public class process {
    // this is where computation and process happens
    // public class
    // July 16, 2022 _ here I declare variables to be use across the program
    
    // Philippine peso to USD, POUND , JAPANESE YEN
    public void phpTo(double amount, int input){
         Conversion conversions = new Conversion();
        
         if (input == 1){
         conversions.phpToUsd(amount);
        } else if (input == 2){
         conversions.phpToPound(amount);
        } else if (input == 3) {
         conversions.phpToYen(amount);
        } else {
            System.out.println("\n==================================================");
            System.out.println("You can't convert same currency to your current currency");
            System.out.println("==================================================");
        }
    }
    
    // USD to PHP, POUND , JAPANESE YEN
    public void usdTo(double amount, int input){
         Conversion conversions = new Conversion();
        
         if (input == 0){
         conversions.usdToPhp(amount);
        } else if (input == 2){
         conversions.usdToPound(amount);
        } else if (input== 3){
         conversions.usdToYen(amount);
        } else {
            System.out.println("\n==================================================");
            System.out.println("You can't convert same currency to your current currency");
            System.out.println("==================================================");
        }
    }
    
    // POUND to PHP, USD , JAPANESE YEN
    public void poundTo(double amount, int input){
         Conversion conversions = new Conversion();
         
         if (input == 0){
         conversions.poundToPhp(amount);
        } else if (input == 1){
         conversions.poundToUsd(amount);
        } else if (input == 3) {
         conversions.poundToYen(amount);
        } else {
            System.out.println("\n==================================================");
            System.out.println("You can't convert same currency to your current currency");
            System.out.println("==================================================");
        }
    }
    
    // JAPANESE YEN to PHP, POUND , USD
    public void yenTo(double amount, int input){
         Conversion conversions = new Conversion();
         
         if (input == 0){
         conversions.yenToPhp(amount);
        } else if (input == 2){
         conversions.yenToPound(amount);
        } else if (input == 1) {
         conversions.yenToUsd(amount);
        } else {
            System.out.println("\n==================================================");
            System.out.println("You can't convert same currency to your current currency");
            System.out.println("==================================================");
        }
    }
}