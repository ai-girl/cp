#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

int main()
{

    int cases {0};

    cin >> cases;

    string output;

    //string test;

    //test = "C";

    //cout << tolower(test);

    vector <string> results {};

    // Loop through tests
    for (int i = 0; i < cases ; i++)
    {
        string output {};
        string s {};

        // Loop each row
        for (int j = 0; j < 8 ; j++)
        {
            cin >> s;

            //Loop each char
            for (int k = 0; k < 8 ; k++)
            {
                if(s[k] != '.')
                    output += s[k];

            }


        }
        results.push_back(output);

    }

    for (int k{};k<cases;++k)
    {
        std::cout << results[k] << "\n";
    }
    return 0;
}
