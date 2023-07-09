#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string one;
    string two;

    cin >> one;
    cin >> two;


    for (int i = 0; i < one.length() ; i++)
    {
        if (tolower(one[i]) < tolower(two[i]))
        {
            cout << "-1";
            return 0;

        }

        else if ( tolower(one[i]) > tolower(two[i]))
        {
            cout << 1;
            return 0;

        }

    }
    cout << 0;
    return 0;
}
