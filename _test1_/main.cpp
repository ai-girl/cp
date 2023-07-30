#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int cases;

    cin >> cases;

    vector  <vector<int>> vect ;

    int num {0};

    for (int i = 0; i < cases ; i++)
    {
        vector <int> row_ele;

        for (int j = 0; j < 3 ; j++)
        {
            cin >> num;
            row_ele.push_back(num);

        }

        sort(row_ele.begin(), row_ele.end(),greater<int>());

        //cout << row_ele[0];
        //cout << row_ele[1];
        //cout << row_ele[2];

        vect.push_back({row_ele[0],row_ele[1],row_ele[2]});

    }

    int sum {0};

    for (int k = 0; k < cases; k++)
    {

        sum = vect[k][0]+vect[k][1];
        if (sum >= 10)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;

    }

    return 0;
}
