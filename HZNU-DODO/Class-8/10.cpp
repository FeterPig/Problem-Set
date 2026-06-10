#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

template <typename T>
class TwoArray;

template <typename T>
istream &operator>>(istream &in, TwoArray<T> &obj);

template <typename T>
void printTwoArray(const TwoArray<T> &array);

template <typename T>
class TwoArray
{
private:
    int rowSize;
    int columnSize;
    T *pArray;

public:
    TwoArray(int r = 0, int c = 0) : rowSize(r), columnSize(c) { pArray = new T[rowSize * columnSize]; }

    TwoArray(const TwoArray &other)
    {
        rowSize = other.rowSize;
        columnSize = other.columnSize;

        pArray = new T[rowSize * columnSize];
        for (int i = 0; i < rowSize * columnSize; i++)
        {
            pArray[i] = other.pArray[i];
        }
    }

    ~TwoArray() { delete[] pArray; }

    TwoArray &operator=(const TwoArray &other)
    {
        if (this == &other)
            return *this;
        delete[] pArray;

        rowSize = other.rowSize;
        columnSize = other.columnSize;
        pArray = new T[rowSize * columnSize];
        for (int i = 0; i < rowSize * columnSize; i++)
        {
            pArray[i] = other.pArray[i];
        }

        return *this;
    }

    T &operator()(int row, int column)
    {
        if (row < 0 || row >= rowSize || column < 0 || column >= columnSize)
        {
            throw out_of_range("Row index out of range!");
        }
        return pArray[row * columnSize + column];
    }
    const T &operator()(int row, int column) const
    {
        if (row < 0 || row >= rowSize || column < 0 || column >= columnSize)
        {
            throw out_of_range("Row index out of range!");
        }
        return pArray[row * columnSize + column];
    }

    friend istream &operator>> <T>(istream &in, TwoArray<T> &obj);
    friend void printTwoArray<T>(const TwoArray<T> &array);

    int getRowSize() const { return rowSize; }
    int getColumnSize() const { return columnSize; }

    bool operator==(const TwoArray<T> &other) const
    {
        if (rowSize != other.rowSize || columnSize != other.columnSize)
        {
            return false;
        }
        int len = rowSize * columnSize;
        for (int i = 0; i < len; i++)
        {
            if (pArray[i] != other.pArray[i])
            {
                return false;
            }
        }
        return true;
    }
    bool operator!=(const TwoArray<T> &other) const
    {
        return !(*this == other);
    }
};

template <class T>
istream &operator>>(istream &in, TwoArray<T> &obj)
{
    for (int i = 0; i < obj.getRowSize(); i++)
    {
        for (int j = 0; j < obj.getColumnSize(); j++)
        {
            in >> obj(i, j);
        }
    }
    return in;
}

template <class T>
void printTwoArray(const TwoArray<T> &array)
{
    for (int i = 0; i < array.getRowSize(); i++)
    {
        for (int j = 0; j < array.getColumnSize(); j++)
        {
            cout << setw(3) << array(i, j);
        }
        cout << endl;
    }
}

int main()
{
    TwoArray<int> array(3, 4);
    cin >> array;
    printTwoArray(array);
    return 0;
}