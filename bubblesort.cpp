/*
     Ghaly, Mina
     Westerlund, Michaela
     Hoang, Huy
     Do, Kenny
     Tan, Engkanchanith

     October 13, 2020

     CS A200
     Lab 4
*/

#include <iostream>
using namespace std;

// Function declarations
void heapsort(int a[], int numOfEle);
void insert(int a[], int* dArr, int numOfEle);
void bubbleUp(int* dArr, int idx);
void remove(int a[], int* dArr, int numOfEle);
void bubbleDown(int* dArr, int numOfEle, int idx);
void swap(int& idx1, int& idx2);
void print(int* a, int numOfEle);

int main()
{
    int a[] = { 49, 32, 75, 15, 25, 53, 9 };
    int numOfElem = 7;

    /*int a[] = { 56, 47, 23, 49, 65, 12, 35, 85, 73, 36 };
    int numOfElem = 10;*/

    /*int a[] = { 98, 93, 87, 82, 76, 70, 67, 62, 54, 47, 43, 33, 24, 20, 11 };
    int numOfElem = 15;*/

    heapsort(a, numOfElem);

    return 0;
}

// Function definitions
void heapsort(int a[], int numOfEle)
{
    // Print out the original array. Output Line 1
    print(a, numOfEle);

    int* dArr = new int[numOfEle];
    // Output Line 2
    insert(a, dArr, numOfEle);
    print(dArr, numOfEle);

    // Output Line 3 & 4
    remove(a, dArr, numOfEle);
    print(dArr, numOfEle);
    print(a, numOfEle);
}

void insert(int a[], int* dArr, int numOfEle)
{
    int dArrSize = 0;
    for (int i = 0; i < numOfEle; ++i)
    {
        dArr[i] = a[i];
        bubbleUp(dArr, dArrSize);
        ++dArrSize;
    }
}

void bubbleUp(int* dArr, int idx)
{
    int parentIndex = (idx - 1) / 2;

    if (idx > 0 && dArr[parentIndex] > dArr[idx])
    {
        swap(dArr[idx], dArr[parentIndex]);
        bubbleUp(dArr, parentIndex);
    }
}

void remove(int a[], int* dArr, int numOfEle)
{
    int dArrSize = numOfEle - 1;
    for (int i = 0; i < numOfEle; ++i)
    {
        swap(dArr[0], dArr[dArrSize]);
        a[i] = dArr[dArrSize];
        if (dArrSize > 1)
            bubbleDown(dArr, dArrSize, 0);
        --dArrSize;
    }
}

void bubbleDown(int* dArr, int numOfEle, int idx)
{
    int leftChild = 2 * idx + 1;
    int rightChild = 2 * idx + 2;
    int minIndex = idx;

    if (leftChild < numOfEle && dArr[idx] > dArr[leftChild])
        minIndex = leftChild;

    if (rightChild < numOfEle && dArr[minIndex] > dArr[rightChild])
        minIndex = rightChild;

    if (minIndex != idx)
    {
        swap(dArr[idx], dArr[minIndex]);
        bubbleDown(dArr, numOfEle, minIndex);
    }
}

void swap(int& idx1, int& idx2)
{
    int temp = idx1;
    idx1 = idx2;
    idx2 = temp;
}

void print(int* a, int numOfEle)
{
    for (int i = 0; i < numOfEle; ++i)
        cout << a[i] << " ";
    cout << endl;
}