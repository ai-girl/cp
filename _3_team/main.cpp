#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <vector<int>> data;

    for (int i = 0; i < n ; i++)
    {
        vector<int> data_i;
        for (int j = 0; j < 3 ;j++)
        {
            int element;
            std::cin >> element;
            data_i.push_back(element);
        }
       data.push_back({data_i[0],data_i[1],data_i[2]});
    }

    vector <int> sum1 ;

    int questions_ans;

    for (int i = 0; i < n ;i++)
    {

        sum1.push_back(data[i][0]+data[i][1]+data[i][2]);
        if (sum1[i] < 2)
               questions_ans +=0;
        else
               questions_ans +=1;
    }


    cout << questions_ans;




    return 0;
}
