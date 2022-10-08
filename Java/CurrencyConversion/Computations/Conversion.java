package Computations;

public class Conversion {
    // public class
    // July 16, 2022 _ here I declare variables to be use across the program
    
    // variables for PHP to another currency
    public void phpToUsd(double amount){
        double phpToUsd = amount*0.018;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " PHP is " + phpToUsd + " in USD" );
        System.out.println("\n==================================================");
    }
    public double phpToPound(double amount){
        double phpToPound = amount*0.015;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " PHP is " + phpToPound + " in Pound" );
        System.out.println("\n==================================================");
        return phpToPound;
    }
    public double phpToYen(double amount){
        double phpToYen = amount*2.46;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " PHP is " + phpToYen + " in Japanse YEN" );
        System.out.println("\n==================================================");
        return phpToYen;
    }
    
    // variables for USD to another currency
    public double usdToPhp(double amount){
        double usdToPhp = amount*56.29;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " USD is " + usdToPhp + " in PHP" );
        System.out.println("\n==================================================");
        return usdToPhp;
    }
    public double usdToPound(double amount){
        double usdToPound = amount*0.84;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " USD is " + usdToPound + " in POUND" );
        System.out.println("\n==================================================");
        return usdToPound;
    }
    public double usdToYen(double amount){
        double usdToYen = amount*138.53;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " USD is " + usdToYen + " in Japanse YEN" );
        System.out.println("\n==================================================");
        return usdToYen;
    }
    
    
    //variables for POUNDS to another currency
    public double poundToPhp(double amount){
        double poundToPhp = amount*66.73;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " POUND is " + poundToPhp + " in PHP" );
        System.out.println("\n==================================================");
        return poundToPhp;
    }
    public double poundToUsd(double amount){
        double poundToUsd = amount*1.19;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " POUND is " + poundToUsd + " in USD" );
        System.out.println("\n==================================================");
        return poundToUsd;
    }
    public double poundToYen(double amount){
        double poundToYen = amount*164.23;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " POUND is " + poundToYen + " in Japanse YEN" );
        System.out.println("\n==================================================");
        return poundToYen;
    }

    //variables for YEN to another currency
    public double yenToPhp(double amount){
        double yenToPhp = amount*0.41;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " YEN is " + yenToPhp + " in PHP" );
        System.out.println("\n==================================================");
        return yenToPhp;
    }
    public double yenToUsd(double amount){
        double yenToUsd = amount*0.0072;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " YEN is " + yenToUsd + " in USD" );
        System.out.println("\n==================================================");
        return yenToUsd;
    }
    public double yenToPound(double amount){
        double yenToPound = amount*0.0061;
        System.out.print('\u000C');
        System.out.println("\n==================================================");
        System.out.println("Your amount of " + amount + " YEN is " + yenToPound + " in POUND" );
        System.out.println("\n==================================================");
        return yenToPound;
    }
}