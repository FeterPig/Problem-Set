#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream is("plaintext.txt");
    ofstream os("ciphertext.txt");
    char ch;
    while (is.get(ch))
    {
        os << char(ch + 2);
    }
    is.close();
    os.close();
    return 0;
}