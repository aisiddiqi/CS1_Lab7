#include <stdio.h>
#include <stdlib.h>

void selectionSort(int array[][2], int size)
{
    int totalSwaps = 0;
    int smallestIndex;
    int i;
    int tempValue;
    int tempSwaps;
    for (i = 0; i < size - 1; i++)
    {
        smallestIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j][0] < array[smallestIndex][0])
            {
                smallestIndex = j;
            }
        }
        if (array[smallestIndex][0] != array[i][0])
        {
            (array[smallestIndex][1])++;
            (array[i][1])++;
            totalSwaps++;
            tempValue = array[smallestIndex][0];
            tempSwaps = array[smallestIndex][1];
            array[smallestIndex][0] = array[i][0];
            array[smallestIndex][1] = array[i][1];
            array[i][0] = tempValue;
            array[i][1] = tempSwaps;
        }
    }
    for(int j = 0; j < size; j++)
    {
        printf("%d: %d\n", array[j][0], array[j][1]);
    }
    printf("%d\n\n", totalSwaps);
}
void bubbleSort(int array[][2], int size)
{
    int totalSwaps = 0;
    int i;
    int j;
    int tempValue;
    int tempSwaps;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j + 1][0] < array[j][0])
            {
                totalSwaps++;
                (array[j + 1][1])++;
                (array[j][1])++;
                tempValue = array[j][0];
                tempSwaps = array[j][1];
                
                array[j][0] = array[j + 1][0];
                array[j][1] = array[j + 1][1];

                array[j + 1][0] = tempValue;
                array[j + 1][1] = tempSwaps;
            }
        }
    }
    for(int j = 0; j < size; j++)
    {
        printf("%d: %d\n", array[j][0], array[j][1]);
    }
    printf("%d\n\n", totalSwaps);
}
int main()
{
    int arrayOriginalOne[9][2] = {{97, 0},
                                {16, 0},
                                {45, 0},
                                {63, 0},
                                {13, 0},
                                {22, 0},
                                {7, 0},
                                {58, 0},
                                {72, 0}};

    int arrayOriginalTwo[9][2] = {{90, 0},
                                  {80, 0},
                                  {70, 0},
                                  {60, 0},
                                  {50, 0},
                                  {40, 0},
                                  {30, 0},
                                  {20, 0},
                                  {10, 0}};
    int array[9][2];
    int size = 9;


    for (int i = 0; i < size; i++)
    {
        array[i][0] = arrayOriginalOne[i][0];
        array[i][1] = arrayOriginalOne[i][1];
    }

    printf("Selection Sort Array 1:\n");
    selectionSort(array, size);

    for (int i = 0; i < size; i++)
    {
        array[i][0] = arrayOriginalOne[i][0];
        array[i][1] = arrayOriginalOne[i][1];
    }

    printf("Bubble Sort Array 1:\n");
    bubbleSort(array, size);

    printf("Selection Sort Array 2:\n");
    for (int i = 0; i < size; i++)
    {
        array[i][0] = arrayOriginalTwo[i][0];
        array[i][1] = arrayOriginalTwo[i][1];
    }

    selectionSort(array, size);

    printf("Bubble Sort Array 2:\n");
    for (int i = 0; i < size; i++)
    {
        array[i][0] = arrayOriginalTwo[i][0];
        array[i][1] = arrayOriginalTwo[i][1];
    }
    bubbleSort(array, size);

}