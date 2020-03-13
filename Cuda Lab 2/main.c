#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Input:
Ask how large vectors the vectors are.
Save size.

 USE Arrays

Ask for values of vector one
Save values

Ask for values of vector two
Save values

Processing:
Calculate hadamard product (1st # of array1 * 2nd # of array2, etc.

Output:
Display final vector product
*/
void printArray1(int *array1, int size) {
    printf("\nArray1 [");
    for (int i = 0; i < size - 1; i++) {
        printf("%i, ", array1[i]);
    }
    if (size >= 1) printf("%i", array1[size-1]);
    printf("]\n");
}

void printArray2(int *array2, int size) {
    printf("Array2 [");
    for (int i = 0; i < size - 1; i++) {
        printf("%i, ", array2[i]);
    }
    if (size >= 1) printf("%i", array2[size-1]);
    printf("]\n");
}

void printArray3(int *array3, int size) {
    printf("Array3 [");
    for (int i = 0; i < size - 1; i++) {
        printf("%i, ", array3[i]);
    }
    if (size >= 1) printf("%i", array3[size-1]);
    printf("]\n");
}
int main()
{
    int count;

    //Ask for size of vectors
    printf("How many numbers are in the vectors:\n");
    scanf("%d", &count);

    int *array1 = malloc(count * sizeof(*array1));
    int *array2 = malloc(count * sizeof(*array2));
    int *array3 = malloc(count * sizeof(*array3));


    printf("\nEnter the numbers of the 1st array:\n");
    for (int i = 0; i < count; i++) scanf("%d", &array1[i]);

    printf("\nEnter the numbers of the 2nd array:\n");
    for (int i = 0; i < count; i++) scanf("%d", &array2[i]);

    for (int i = 0; i < count; i++)
    {
       array3[i] = array1[i] * array2[i];
    }

    printArray1(array1,count);
    printArray2(array2,count);
    printArray3(array3,count);

    free(array1);
    free(array2);
    free(array3);

    return 0;
}
