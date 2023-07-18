#include <iostream>
using namespace std;

int main()
{
    string letter;

    cin >> letter;

    letter[0] = toupper(letter[0]);

    cout << letter;

    return 0;
}
