#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n {0};

    cin >> n;

    vector  <vector<int>> vect ;

    int num {0};

    for (int i = 0; i < n ; i++)
    {
        vector <int> row_ele;

        for (int j = 0; j < 3 ; j++)
        {
            cin >> num;
            row_ele.push_back(num);

        }

        vect.push_back({row_ele[0],row_ele[1],row_ele[2]});

    }

    int first {0};
    int second {0};
    int third {0};

    for (int k = 0; k < n; k++)
    {
        first += vect[k][0];
        second += vect[k][1];
        third += vect[k][2];

    }

    if ( first == 0 && second == 0 &&  third == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
