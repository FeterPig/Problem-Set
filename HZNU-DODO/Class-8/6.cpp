#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

class TwoArray
{
private:
    int rowSize;
    int columnSize;
    int *pArray;

public:
    TwoArray(int r = 0, int c = 0) : rowSize(r), columnSize(c) { pArray = new int[rowSize * columnSize]; }

    TwoArray(const TwoArray &other)
    {
        rowSize = other.rowSize;
        columnSize = other.columnSize;

        // 一维模拟二维
        pArray = new int[rowSize * columnSize];
        for (int i = 0; i < rowSize * columnSize; i++)
        {
            pArray[i] = other.pArray[i];
        }
    }

    ~TwoArray() { delete[] pArray; }

    TwoArray &operator=(const TwoArray &other)
    {
        delete[] pArray;

        rowSize = other.rowSize;
        columnSize = other.columnSize;
        pArray = new int[rowSize * columnSize];
        for (int i = 0; i < rowSize * columnSize; i++)
        {
            pArray[i] = other.pArray[i];
        }

        return *this;
    }

    int &operator()(int row, int column)
    {
        if (row < 0 || row >= rowSize || column < 0 || column >= columnSize)
        {
            throw out_of_range("Row index out of range!");
        }
        return pArray[row * columnSize + column];
    }
    const int &operator()(int row, int column) const
    {
        if (row < 0 || row >= rowSize || column < 0 || column >= columnSize)
        {
            throw out_of_range("Row index out of range!");
        }
        return pArray[row * columnSize + column];
    }

    friend istream &operator>>(istream &in, TwoArray &obj);
    friend void printTwoArray(const TwoArray &array);

    int getRowSize() { return rowSize; }
    int getColumnSize() { return columnSize; }
};

istream &operator>>(istream &in, TwoArray &obj)
{
    for (int i = 0; i < obj.rowSize; i++)
    {
        for (int j = 0; j < obj.columnSize; j++)
        {
            in >> obj(i, j);
        }
    }
    return in;
}

void printTwoArray(const TwoArray &array)
{
    for (int i = 0; i < array.rowSize; i++)
    {
        for (int j = 0; j < array.columnSize; j++)
        {
            cout << setw(3) << array(i, j);
        }
        cout << endl;
    }
}

int main()
{
    TwoArray array1(3, 4);
    for (int i = 0; i < array1.getRowSize(); ++i)
        for (int j = 0; j < array1.getColumnSize(); ++j)
            cin >> array1(i, j);
    cout << "array1:" << endl;
    printTwoArray(array1);
    TwoArray array2(4, 4);
    for (int i = 0; i < array2.getRowSize(); ++i)
        for (int j = 0; j < array2.getColumnSize(); ++j)
            cin >> array2(i, j);
    cout << "array2:" << endl;
    printTwoArray(array2);
    TwoArray array3(array1);
    cout << "array3:" << endl;
    printTwoArray(array3);
    try
    {
        array1(3, 4) = 1000;
    }
    catch (out_of_range &ex)
    {
        cout << ex.what() << endl;
    }
    array1 = array2;
    cout << "array1:" << endl;
    printTwoArray(array1);
    return 0;
}