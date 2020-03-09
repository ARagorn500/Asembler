#include<stdio.h>
#include<stdlib.h>

double TotalResistance(double rValues[],int num, char config);

int main()

{

     char config;

     int num;

     double rValues[10], rVal, Total;

     printf("Please enter the circuit type.: S= Series P= Parallel:\n");

     scanf("%c", &config);

    printf("Enter the number of resistors in the circuit:\n");
    scanf("%i",&num);



     for(int i=0;i<num;i++)

     {

    printf("Enter the resistor value for resistor %i \n", i);
    scanf("%d", &rVal);

              rValues[i]=rVal;

     }
     return 0;

}

double TotalResistance(double rValues[],int num, char config)

{

     double Total=0.0;

     if(config=='S')

     {

          for(int i=0;i<num;i++)

          {

              Total=Total+rValues[i];

          }

     }

     else if(config=='P')

     {

          double inverse,sum=0.0;

          for(int i=0;i<num;i++)

          {

              inverse=1/rValues[i];

              sum=sum+inverse;

          }

          Total=1/sum;

     }

     return Total;

}
