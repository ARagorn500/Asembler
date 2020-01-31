#include <iostream>
#include <list>
#include "Circuit.h"
using namespace std;

int main()
{
    list<double> myList();

    Circuit myCircuit;
    double circuitType;

    cout << "This program will calculate total resistance of a series or parallel circuit." << endl;

    cout <<"Please enter resistance of each resistor and press 'Enter' after each number. After you have entered all ofthe resistances, enter '-1'." << endl;

    double in;
    cin >> in;

    while (in != -1) {
    myList.add(in);
    }

    C.setMyList(myList);
    cout >> "Is the circuit type 1) parallel or 2) series?" >> endl;
    return 0;
}
