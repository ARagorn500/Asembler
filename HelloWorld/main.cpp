#include <iostream>

using namespace std;

int main()
{
    double Voltage;
    double Resistance;
    double Amperage;
    int UserChoice;

    cout << "What would you like to calculate 1) Voltage,"
        << "2) Amperage, or 3) Resistance" << endl;

    cin >> UserChoice;

    if (UserChoice == 1) {
        cout << "Please enter the Amperage" << endl;
        cin >> Amperage;

        cout << "Please enter the Resistance" << endl;
        cin >> Resistance;

        //finish calculations.
        Voltage = Amperage * Resistance;
        cout << "The Voltage is: " << Voltage << endl;

    } else if (UserChoice == 2) {
        cout << "Please enter the Voltage" << endl;
        cin >> Voltage;

        cout << "Please enter the Resistance" << endl;
        cin >> Resistance;

        //finish calculation
        Amperage = Voltage / Resistance;
        cout << "The Amperage is: " << Amperage << endl;

    } else if (UserChoice == 3) {
        cout << "Please enter Voltage" << endl;
        cin >> Voltage;

        cout << "Please enter Amerage" << endl;
        cin >> Amperage;

        //finish calculation
        Resistance = Voltage / Amperage;
        cout << "The Resistance is: " << Resistance << endl;

    } else {
        cout << "Please enter '1', '2', or '3'." << endl;
    }
    return 0;
}
