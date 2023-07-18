#include <iostream>

using namespace std;

int main()
{
    string players_standing ;

    cin >> players_standing;

    int check_stat {0};


    for (int i = 1 ; i < players_standing.length(); i++)
    {

        if (players_standing[i-1] == players_standing[i])
            check_stat +=1;

        else
            check_stat = 0;

        if (check_stat == 6)
            break;
        else
            continue;

    }

    if (check_stat == 6)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
