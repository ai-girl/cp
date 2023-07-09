#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x = 0;
    int n;

    cin >> n;

    vector <string> data;

    for (int i = 0 ; i < n ; i++)
    {
        string val;
        cin >> val;
        data.push_back(val);
    }

    for (int i = 0; i < n ; i++)
    {
       if (data[i] == "++X" || data[i] == "X++")
            x +=1;
        else
            x -=1;
    }
    cout << x;

    return 0;
}
