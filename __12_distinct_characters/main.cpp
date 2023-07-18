#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   string username;

   cin >> username;

   vector <char> data;

   int num;

   for ( int i = 0; i < username.length(); i++ )
   {
        if(std::find(data.begin(),data.end(),username[i]) == data.end())
            data.push_back(username[i]);
        else
            continue;
   }

  //ut << data.size();

  if (data.size() % 2 == 0)
    cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";

  return 0;
}
