#include <stdio.h>
#include <stdlib.h>

void CalculateTotal(int num1, int num2, int* total)
    {
        for (int x = num1; x<= num2; x++)
        {
            *total += x;
        }
    }

int main()
{
    int num1;
    int num2;
    int total = 0;
    int dif;

    printf("what is your starting integer?\n");
    scanf("%i", &num1);

    printf("What is your ending integer?\n");
    scanf("%i", &num2);

    CalculateTotal(num1, num2, &total);

    printf("The sum of the integers from %i to %i = %i", num1, num2, total);
    return 0;


}
