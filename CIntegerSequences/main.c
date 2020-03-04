#include <stdio.h>
#include <stdlib.h>

void CalculateTotal(int, int, int*);

int main()
{
    int num1;
    int num2;
    int total;

    printf("what is your starting integer?\n");
    scanf("%i", &num1);

    printf("What is your ending integer?\n");
    scanf("%i", &num2);

    total = 0;




/*    for (int x = num1; x<= num2; x++)
    {
        total += x;
    }
*/
    printf("The sum of the integers from %i to %i = %i", num1, num2, total);
    return 0;


}
