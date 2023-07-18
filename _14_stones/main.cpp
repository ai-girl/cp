#include <iostream>

using namespace std;

int main()

{
    int num {0};
    cin >> num;
    string stones;
    cin >> stones;
    int  iter {0};
    for (int i = 1; i < num;i++)
    {
        if(stones[i-1] == stones[i])
            iter +=1;
        else
            continue;

    }

    cout << iter;

    return 0;
}
