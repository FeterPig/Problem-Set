#include <iostream>
#include <cmath>
using namespace std;
double mean(const double x[], int arraySize);
double deviation(const double x[], int arraySize);
int main()
{
    const int ARRAY_SIZE = 10;
    double array[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; ++i)
        cin >> array[i];
    cout << mean(array, ARRAY_SIZE) << endl;
    cout << deviation(array, ARRAY_SIZE) << endl;
    return 0;
}
// 请在下面分别编写mean函数和deviation函数
double mean(const double x[], int arraySize)
{
    double sum;
    for (int i = 0; i < arraySize; i++)
    {
        sum += x[i];
    }

    return sum / arraySize;
}

double deviation(const double x[], int arraySize)
{
    const double mean_n = mean(x, arraySize);
    double sum;
    for (int i = 0; i < arraySize; i++)
    {
        sum += (x[i] - mean_n) * (x[i] - mean_n);
    }
    return sqrt(sum / (arraySize - 1));
}