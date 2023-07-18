#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string num;

    cin >> num;
    num.erase(remove(num.begin(), num.end(), '+'), num.end());
    sort(num.begin(), num.end());

    string output_num;
    for (int i ; i < num.length() ; i++)
    {
        output_num.append(1,num[i]);
        output_num.append(1,'+');

    }

    output_num.pop_back();
    cout << output_num;

    return 0;


}
