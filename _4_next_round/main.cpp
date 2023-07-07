#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k ;

    vector <int> scores;

    for (int i = 0; i < n ; i++)
    {
        int element;
        cin >> element;
        scores.push_back(element);

    }

    int total {0};

    for (int i = 0; i < n ; i++)
    {
        if (scores[i] >= scores[k-1] && scores[i]>0 )
            total +=1 ;
        else
            total +=0;
    }

    cout << total;
    return 0;
}
