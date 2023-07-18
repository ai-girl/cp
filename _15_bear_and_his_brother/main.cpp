#include <iostream>

using namespace std;

int main()
{
    int limak {0};
    int Bob {0};

    cin >> limak;
    cin >> Bob;

    int iter {1};


    while (limak <= Bob)
    {
        limak = limak*3*iter;
        Bob = Bob * 2 * iter;

        if (limak > Bob)
            break;

        iter+=1;
    }

    cout <<iter;

    return 0;
}
