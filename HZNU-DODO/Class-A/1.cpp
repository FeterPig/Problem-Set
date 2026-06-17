#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream os("example.txt");
    int num;
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        os << num;
        if (i != 4 && i != 9)
        {
            os << " ";
        }
        if (i == 4)
        {
            os << endl;
        }
    }
    os.close();
    return 0;
}