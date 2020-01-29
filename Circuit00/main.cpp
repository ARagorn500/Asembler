#include <iostream>
#include "Circuit.h"

using namespace std;

int main()
{
    Circuit myCircuit;
    double Voltage, Amperage, Resistance;
    int input;

    cout << "This program will calculate either the Amperage, Voltage," << endl;
    cout << "or Resistance of a circuit given the other two paramerters." << endl;

    cout << "" << endl;

    cout << "Enter 1, to calculate Amperage;" << endl;
    cout << "Enter 2 to calculate Voltage;" << endl;
    cout << "Enter 3 to calculate Resistance;" << endl;

    cin >> input;

    if (input ==1) {
     cout << "You chose to calculate Amperage." << endl;

     cout << "What is the Voltage of the ciruit?" << endl;
     cin >> Voltage;
     myCircuit.SetVoltage(Voltage);

     cout << "What is the Resistance of the ciruit?" << endl;
     cin >> Resistance;
     myCircuit.SetResistance(Resistance);

     myCircuit.calculateAmperage();
     cout << "The Amperage is " << myCircuit.GetAmperage()<< endl;
    }

    if (input ==2) {
     cout << "You chose to calculate Volage." << endl;

     cout << "What is the Amperage of the ciruit?" << endl;
     cin >> Amperage;
     myCircuit.SetAmperage(Amperage);

     cout << "What is the Resistance of the ciruit?" << endl;
     cin >> Resistance;
     myCircuit.SetResistance(Resistance);

     myCircuit.calculateVoltage();
     cout << "The Amperage is " << myCircuit.GetVoltage()<< endl;
    }

    if (input ==3) {
     cout << "You chose to calculate Resistance." << endl;

     cout << "What is the Voltage of the ciruit?" << endl;
     cin >> Voltage;
     myCircuit.SetVoltage(Voltage);

     cout << "What is the Amperage of the ciruit?" << endl;
     cin >> Amperage;
     myCircuit.SetAmperage(Amperage);

     myCircuit.calculateResistance();
     cout << "The Resistance is " << myCircuit.GetResistance()<< endl;
    }
/*    cout << "Please enter Voltage" << endl;

    cin >> Voltage;
    myCircuit.SetVoltage(Voltage);

    cout <<myCircuit.GetVoltage() << endl;
*/


}

