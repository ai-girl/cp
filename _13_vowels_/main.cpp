#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string name;

    cin >> name;

    vector <char> vowels = {'a','e','i','o','u','y'};

    vector <char> new_name ;

    for (int i = 0 ; i < name.length() ; i++)
    {
        if( find(vowels.begin(),vowels.end(),tolower(name[i])) == vowels.end())
           {
                new_name.push_back('.');
                new_name.push_back(tolower(name[i]));
           }
        else
            continue;
    }
    string new_letter {};

    for (int i = 0; i < new_name.size() ; i++ )
    {
        new_letter += new_name[i];

    }

    cout<< new_letter;

    return 0;
}
