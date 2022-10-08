/* C++ Program to Convert Decimal Number to Octal  */

#include <iostream>
#include <cmath>
using namespace std;

int decimalToOctal(int decimalNumber);

int main()
{
   int decimalNumber;
   cout << "Enter a decimal number :: ";
   cin >> decimalNumber;
   cout <<"\n [ "<< decimalNumber << " ] in decimal = [ " << decimalToOctal(decimalNumber) << " ] in octal\n";
   return 0;
}

// Function to convert decimal number to octal
int decimalToOctal(int decimalNumber)
{
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}

/* C++ Program to Convert Decimal to Octal  */

Enter a decimal number :: 123

 [ 123 ] in decimal = [ 173 ] in octal

Process returned 0