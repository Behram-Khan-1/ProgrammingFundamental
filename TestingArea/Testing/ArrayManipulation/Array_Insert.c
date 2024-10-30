#include <stdio.h>
#include <stdbool.h>

void PrintArray(int Age[], int size);
void InsertAtNIndex(int Age[], int size, int index, int value);
void ReverseArray(int Age[], int size);
bool FindElement(int Age[], int size, int element);


int main()
{
    int studentAge[7] = {18,19,20,21,22,23,24};
    int arraySize = sizeof(studentAge)/sizeof(studentAge[0]);
    // PrintArray(studentAge, arraySize);
    InsertAtNIndex(studentAge, arraySize, 2, 25);
    // ReverseArray(studentAge,arraySize);
    // bool foundElement = FindElement(studentAge,arraySize,20);
    // printf("%i", foundElement);
}

void PrintArray(int Age[], int size)
{
    for(int i =0; i<size ;i++)
    {
        printf("%d ,", Age[i]);
    }
    printf("\n");
}

void InsertAtNIndex(int Age[], int size, int index, int element)
{
    printf("\n Insert At Index %i \n" ,  index);
    int temp;
    for(int i=index ; i<=size-index +1 ;i++)
    {
        temp = element;
        element = Age[i];
        Age[i] = temp;
        // if(i == size-index +1)
    }
        PrintArray(Age,size);
}

void ReverseArray(int Age[], int size)
{
    for (int i = size-1 ; i >= 0 ; i--)
    {
        printf("%i ,",  Age[i]);
    }
}

bool FindElement(int Age[], int size, int element)
{
    //finding 3
    for(int i=0; i<size; i++)
    {
        if(Age[i] == element)
        {
            return true;
        } 
    }
    printf("Element in not in the Array");
}