#include <iostream>

using namespace std;

int main()

{
    int num;
    std::cin >> num; //Get input from user

    if(num == 2)
        std::cout <<"NO"<<endl;
    else if (num%2==0)
        std::cout <<"YES"<<endl;
    else
        std::cout <<"NO"<<endl;

    return 0;
}
