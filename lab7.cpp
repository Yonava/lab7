#include <iostream>
#include <iomanip>
using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) {

    return (drivenMiles / milesPerGallon) * dollarsPerGallon;

}

int getInput() {

    cout << "Enter Change (In Cents): ";
    int input;
    cin >> input;
    return input;

}

int computeCoins(int coinValue, int& amount) {

    int output = 0;

    if (amount >= coinValue) {
        output = amount / coinValue;
        amount %= coinValue;
    }
   
    return output;

}

void DisplayChange(int half, int quar, int dime, int nick, int penn) {

    cout << "\n   Half Dollars: " << half;
    cout << "\n   Quarters: " << quar;
    cout << "\n   Dimes: " << dime;
    cout << "\n   Nickles: " << nick;
    cout << "\n   Pennies: " << penn << endl;

}

int main() {

    double mpg, dpg, arr[3] = { 10.0, 50.0, 400.0 };

    cout << "Enter Miles/Gallon then Dollars/Gallon:\n";

    cin >> mpg >> dpg;

    cout << "Miles Driven\tCost\n";

    for (int i = 0; i <= 2; i++) {

        cout << right << setw(6) << arr[i];
        cout << right << setw(14) << DrivingCost(arr[i], mpg, dpg) << endl;

    }

    int penn, quar, dime, nick, half;

    penn = getInput();

    half = computeCoins(50, penn);
    quar = computeCoins(25, penn);
    dime = computeCoins(10, penn);
    nick = computeCoins(5, penn);
    
    DisplayChange(half, quar, dime, nick, penn);

    return 0;

}