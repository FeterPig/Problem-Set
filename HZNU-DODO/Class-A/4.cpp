#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin("log.txt");

    string userList[2000];
    int count = 0;

    string date, timeStr, username, operation;
    while (fin >> date >> timeStr >> username >> operation)
    {
        bool isExist = false;
        for (int i = 0; i < count; i++)
        {
            if (userList[i] == username)
            {
                isExist = true;
                break;
            }
        }
        if (!isExist)
        {
            userList[count] = username;
            count++;
        }
    }

    fin.close();
    cout << count << endl;
    return 0;
}