#ifndef CIRCUIT_H
#define CIRCUIT_H

class Circuit
{
    public:
        Circuit(int);
        virtual ~Circuit();
        unsigned int CircuitType;
        double* Resistances;
        double TotalResistance();

        const unsigned int SERIES =1;
        const unsigned int PARALLEL =2;

    protected:

    private:
        double SeriesResistance();
        double ParallelResistance();
        int NumberOfResistors;

};

#endif // CIRCUIT_H
