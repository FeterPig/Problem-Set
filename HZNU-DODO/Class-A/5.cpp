#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("image.jpg", ios::binary);
    if (!fin.is_open())
    {
        return 1;
    }

    unsigned char byte13, byte49, byte80;

    fin.seekg(12, ios::beg);
    byte13 = fin.get();

    fin.seekg(48, ios::beg);
    byte49 = fin.get();

    fin.seekg(79, ios::beg);
    byte80 = fin.get();

    fin.close();

    unsigned char result = byte13 ^ byte49 ^ byte80;

    const char hexTable[] = "0123456789abcdef";
    cout << hexTable[result >> 4] << hexTable[result & 0x0F] << endl;

    return 0;
}