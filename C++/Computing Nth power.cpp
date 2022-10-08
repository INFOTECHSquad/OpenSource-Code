#include <iostream>
using namespace std;

int main()
{
    int userFirstInput, userLastInput, nthPower, totalValue = 0;
    cout << "Algo of summation\nCreate a program using c++";
    cout <<"\n*Florencio, John Allen A. BSIT 2C*";
    cout << "\n\nSIGMA CALCULATOR\n\n";

    cout <<"\nEnter First Value: ";
    cin >> userFirstInput;

    cout << "Enter Last Value: ";
    cin >> userLastInput;

    cout << "nth power: ";
    cin >> nthPower;

    for (userFirstInput; userFirstInput <= userLastInput; userFirstInput++)

	{
        totalValue += userFirstInput * nthPower;
        cout << userFirstInput << "x" << nthPower << " = " << userFirstInput * nthPower << endl;
    }

    cout << "The total sum of every nth number is: " << totalValue<< endl;

}
