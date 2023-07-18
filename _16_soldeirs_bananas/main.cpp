#include <iostream>

using namespace std;

int main()
{
    int price_one_banana {0};
    int total_amount {0};
    int num_banana {0};

    cin >> price_one_banana >> total_amount >> num_banana;

    int total_money_need {0};

    for (int i = 0; i < num_banana ; i++)
    {
        total_money_need += price_one_banana * (i+1);
    }

    int diff {0};

    diff = total_money_need - total_amount;

    if (diff <= 0)
        cout << 0;
    else
        cout << diff;

    return 0;
}
