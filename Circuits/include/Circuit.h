#ifndef CIRCUIT_H
#define CIRCUIT_H
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;
class Circuit
{
    public:
        Circuit();
        virtual ~Circuit();

    private: list<double> myList;

	/**
	 * Holds the resistance of the object.
	 */
	private: double resistance;

	/**
	 * Holds the circuit type of the object.
	 */
	private: double circuitType;

	/**
	 * Holds sum.
	 */
	private: double sum = 0;
	/**
	 * Holds reciprocal.
	 */
	private: double reciprocal = 0;

	/**
	 * The setResistance method stores a value in the resistance field.
	 * @param r The value to store in resistance.
	 */
	public: void setResistance(double r) {
		resistance = r;
	}

	/**
	 * The getResistance method return's a Business object's resistance.
	 * @return The value in the resistance field.
	 */
	public: double getResistance() {
		return resistance;
	}

	/**
	 * The setCircuitType method stores a value in the circuitType field.
	 * @param ct The value to store in circuitType.
	 */
	public: void setCircuitType(double ct) {
		circuitType = ct;
	}

	/**
	 * the getCircuitType return's a Business object's resistance.
	 * @return The value in the circuitType field.
	 */
	public:  double getCircuitType() {
		return circuitType;
	}

	/**
	 * The getSeries return's a Business object's series.
	 * @return The value in the Series field.
	 */
	public: double getSeries() {
//		for (int i = 0; i < myList.size(); i++)
{
//			sum += myList.get(i);
        //sum += myList.get(i);
		}
        return sum;
	}
	/**
	 * The getParallel return's a Business object's parallel.
	 * @return The value in the parallel field.
	 */
	public:  double getParallel() {
		for (int n = 0; n < myList.size(); n++) {
//			reciprocal += (1 / myList.get(n));
		}
		return 1 / reciprocal;
	}

	/**
	 * The setMyList method stores a value in the myList field.
	 * @param ml The value to store in myList.
	 */

	 //std::vector<double> resistors;

	public:  void setMyList( list<double> ml) {
		myList = ml;
	}



	/**
	 * the getMyList method return's a Business object's myList.
	 * @return The value in myList field.
	 */
	public:  list<double> getMyList() {
		return myList;
	}

	/**
	 * The setSum method stores a value in the sum field.
	 * @param s The value to store in sum.
	 */
	public: void setSum( double s) {
		sum = s;
	}

	/**
	 * the getSum method returns a Business object's sum.
	 * @return the value to store in sum.
	 */
	public: double getSum() {
		return sum;
	}

	/**
	 * The setReciprocal method stores a value in the reciprocal field.
	 * @param re the value to in reciprocal.
	 */
	public:  void setReciprocal( double re) {
		reciprocal = re;
	}

//    public: addResistors
/*
        unsigned int CircuitType;
        int getCircuitType() {return CircuitType; }
        void setCircuitType()(int val) {CircuitType = val; }

        double Resistance;
        double GetResistance() {return Resistances; }
        void setResistance(double val) {Resistances = val; }

        double TotalResistance();
        double getTotalResistance() {return TotalResistance; }



        double getParallelResistance() {return ParallelResistance; }

        double get ParallelResistance() {return ParallelResistance}

        double calculateParallelResistance();
        double calculateSeriesResistance();

    protected:

    private:
        double SeriesResistance();
        double ParallelResistance();
        int NumberOfResistors;
*/
};

#endif // CIRCUIT_H
