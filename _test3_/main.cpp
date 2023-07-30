#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int cases {0};

    cin >> cases;

    int n {0};

    int k {0};

    int num {0};

    int total_out1 {0};

    int total_out2 {0};

    vector <int> results;

    // Loop through tests
    for (int i = 0; i < cases ; i++)
    {
        cin >> n;
        cin >> k;
        int total_out1 {0};

        int total_out2 {0};

        vector  <int> row_ele;

        for (int j = 0; j < n ; j++)
        {
            cin >> num;
            row_ele.push_back(num);

        }

        sort(row_ele.begin(), row_ele.end());

        for (int j = 0; j < n-1 ; j++)
        {
            if (row_ele[j+1]-row_ele[j] <= k)
                total_out1 +=1;
            else
                break;

        }

        sort(row_ele.begin(), row_ele.end(),greater<int>());

        for (int j = 0; j < n ; j++)
        {
            if (row_ele[j]-row_ele[j+1] <= k)
                total_out2 +=1;
            else
                break;

        }

        if (total_out1 < total_out2)
            results.push_back(total_out1);
        else
            results.push_back(total_out2);

    }

    for (int k{};k<cases;++k)
    {
        std::cout << results[k] << "\n";
    }


    return 0;
}
