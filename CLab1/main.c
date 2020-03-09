#include <stdio.h>
#include <stdlib.h>

void CalculateVoltage(double* Voltage, double Amperage, double Resistance)
    {
        *Voltage = Amperage * Resistance;
    }

void CalculateAmperage(double Voltage, double* Amperage, double Resistance)
    {
         *Amperage = Voltage / Resistance;
    }

void CalculateResistance(double Voltage, double Amperage, double* Resistance)
    {
        *Resistance = Voltage / Amperage;
    }

int main()
{
    double Voltage = 0;
    double Resistance = 0;
    double Amperage = 0;
    int UserChoice;

    printf("What would you like to calculate 1) Voltage, 2) Amperage, or 3) Resistance:\n");

    scanf("%i", &UserChoice);

    if (UserChoice == 1) {
        printf("Please enter the Amperage:\n");
        scanf("%lf", &Amperage);

        printf("Please enter the Resistance:\n");
        scanf("%lf", &Resistance);

        //finish calculations.
        CalculateVoltage(&Voltage, Amperage, Resistance);
        printf("The Voltage is: %lf", Voltage);

    } else if (UserChoice == 2) {
        printf("Please enter the Voltage:\n");
        scanf("%lf", &Voltage);

        printf("Please enter the Resistance:\n");
        scanf("%lf", &Resistance);

        //finish calculation
        CalculateAmperage(Voltage, &Amperage, Resistance);
        printf("The Amperage is: %lf", Amperage);

    } else if (UserChoice == 3) {
        printf("Please enter Voltage:\n");
        scanf("%lf", &Voltage);

        printf("Please enter Amerage:\n");
        scanf("%lf", &Amperage);

        //finish calculation
        CalculateResistance(Voltage, Amperage, &Resistance);
        printf("The Resistance is: %lf", Resistance);

    } else {
        printf("Please enter '1', '2', or '3'.");

    }
    return 0;
}
