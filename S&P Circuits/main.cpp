#include <iostream>
#include "Circuit.h"

using namespace std;

int main()
{

    int numberOfResistors;
    cout << "Please enter number of resistors:" << endl;
    cin >> numberOfResistors;
    Circuit myCircuit(numberOfResistors);

    cout << "Please enter the circuit type. 1) Series 2) Parallel:" <<endl;
    cin >> myCircuit.CircuitType;

    for(int n=0; n<numberOfResistors; ++n) {
        cout <<"Please enter the resistance for resistor " << n+1 << endl;
        cin >> myCircuit.Resistances[n];
    }

    cout <<"The total resistance is: " <<myCircuit.TotalResistance() << endl;
}
