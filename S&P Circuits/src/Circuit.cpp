#include "Circuit.h"

Circuit::Circuit(int pNumberOfResistors)
{
    NumberOfResistors = pNumberOfResistors;
    Resistances = new double[NumberOfResistors];
}

Circuit::~Circuit()
{
    delete(Resistances);
}

double Circuit::SeriesResistance()
    {
        double runningSum = 0;

        for (int n = 0; n<NumberOfResistors; ++n) {
            runningSum += Resistances[n];
        }
        return runningSum;
    }

    double Circuit::ParallelResistance()
    {
        double runningSum = 0;

        for (int n = 0; n<NumberOfResistors; ++n) {
            runningSum +=1 / Resistances[n];
        }
        return 1/ runningSum ;
    }


    double Circuit::TotalResistance() {
    if (CircuitType == SERIES) {
        return SeriesResistance();
    } else {
        return ParallelResistance();
    }

}
