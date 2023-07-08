#include <iostream>

using namespace std;

int main()
{
    int M;
    int N;
    cin >> M;
    cin >> N;

    int dominos;
    int total_even_num;

    if (M*N % 2 == 0)
        total_even_num = M*N;
    else
        total_even_num = M*N - 1;

    dominos = total_even_num/2;

    cout << dominos;
    return 0;
}
