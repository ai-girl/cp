#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row ;
    int column ;
    vector <vector<int>> matrix;

    for (int i = 0; i < 5 ; i++)
    {
        vector<int> matrix_in;
        for (int j = 0; j < 5 ;j++)
        {
            int element;
            std::cin >> element;
            matrix_in.push_back(element);
        }
       matrix.push_back({matrix_in[0],matrix_in[1],matrix_in[2],matrix_in[3],matrix_in[4]});
    }

    for (int i = 0; i < 5 ; i++)
    {
        for (int j = 0 ; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                row = i;
                column = j;
            }
        }
    }

    int pos;

    cout << row<<"r1ow"<<endl;
    cout << column<<"co1lumn"<<endl;

    pos = abs(row-2)+abs(column - 2);
    cout << pos;

    return 0;
}
