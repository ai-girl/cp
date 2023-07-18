#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    typedef long long int ll;

    ll n{0}, m{0}, a{0};

    cin >> n >> m >> a;

    ll first {0};
    ll sec {0};

    if (n % a == 0)
        first = n/a;
    else
        first = n/a + 1;

    if (m % a == 0)
        sec = m/a;
    else
        sec = m/a + 1;

    cout << first * sec;



    //ll  total_tiles {0};

    //cout << float(m)/float(a)<<endl;
    //cout<<ceil(float(m)/float(a))<<endl;

    //long long u = ceil(float(m)/float(a));
    //long long j = ceil(float(n)/float(a));

    //cout << u*j;

    return 0;
}
