#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    std::cin >> n;
    vector<string> data {};

    // For loop for taking in the inputs in vector
    for (int i = 0; i < n; i++)
    {
        string input_word;
        std::cin >> input_word;
        data.push_back(input_word);

    }
    // for loop to apply logic to the inputs taken

    for (int i = 0; i < n; i++)
    {

        int len;
        len = data[i].length();

        if(len <= 10)
        {
            cout << data[i] << endl;
        }
        else
        {
            int num = len - 2;
            char first = data[i].at(0);
            char last = data[i].back();

            string abbr = first + to_string(num)  + last;
            cout << abbr<<endl;

        }

    }

    return 0;
}
