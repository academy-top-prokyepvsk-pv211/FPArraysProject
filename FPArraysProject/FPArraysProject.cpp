#include <iostream>

using namespace std;

void ArrayPrint(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << "\n";
}

void ArrayInit(int array[], int size, int begin = 0, int end = 100)
{
    srand(time(nullptr));
    for (int i = 0; i < size; i++)
        array[i] = begin + rand() % (end - begin + 1);
}

int ArrayMin(int array[], int size)
{
    int indexMin{};
    for (int i = 0; i < size; i++)
        indexMin = (array[indexMin] < array[i]) ? indexMin : i;
    return indexMin;
}

int ArrayMax(int array[], int size)
{
    int indexMax{};
    for (int i = 0; i < size; i++)
        indexMax = (array[indexMax] > array[i]) ? indexMax : i;
    return indexMax;
}

void ArrayReverse(int array[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

void ArrayShiftLeft(int array[], int size, int steps)
{
    steps %= size;
    for (int s = 0; s < steps; s++)
    {
        int temp = array[0];
        for (int i = 0; i < size - 1; i++)
            array[i] = array[i + 1];
        array[size - 1] = temp;
    }
}

void ArrayShiftRight(int array[], int size, int steps)
{
    steps %= size;
    for (int s = 0; s < steps; s++)
    {
        int temp = array[size - 1];
        for (int i = size - 1; i > 0; i--)
            array[i] = array[i - 1];
        array[0] = temp;
    }
}


int main()
{
    const int size{ 10 };
    int array[size];

    ArrayInit(array, size);
    ArrayPrint(array, size);

    //ArrayReverse(array, size);

    

    ArrayPrint(array, size);
    
 /*   int indexMin = ArrayMin(array, size);

    cout << "Min index: " << indexMin << ", min value: " << array[indexMin] << "\n";

    int indexMax = ArrayMax(array, size);

    cout << "Max index: " << indexMax << ", max value: " << array[indexMax] << "\n";*/

    //int a = rand() % 10;
    //int b = rand() % 10;
    //int c = rand() % 10;
    //int d = rand() % 10;
    //int min;

    //
    ///*if (a < b)
    //    min = a;
    //else
    //    min = b;*/

    //min = (a < b) ? a : b;
    //min = (min < c) ? min : c;
    //min = (min < d) ? min : d;
    

    /*
    const int size{ 16 };

    int array[size];

    int count;
    cout << "input size of group: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "input label " << i + 1 << " student: ";
        cin >> array[i];
    }
        
    int totalLabel{};
    for (int i = 0; i < count; i++)
        totalLabel += array[i];
    
    float avgLabel = (float)totalLabel / count;

    cout << "Avg label of group = " << avgLabel << "\n";
    

    int arr1[5]{ 12, 45, 31, 86, 54 };
    ArrayPrint(arr1, 5);

    int arr2[10]{ 42, 98, 17 };
    ArrayPrint(arr2, 10);

    int arr3[10]{};
    ArrayPrint(arr3, 10);

    char arr4[5]{};
    ArrayPrint(arr4, 5);

    int arr5[]{ 32, 78, 11, 29 };
    ArrayPrint(arr5, 3);
    
    int arr6[20];
    */



    return 0;
}

// перегрузка функций
//int Sum(int a, int b)
//{
//    return a + b;
//}
//
//float Sum(float a, int b)
//{
//    return a + b;
//}