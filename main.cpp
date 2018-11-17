/**
this program creates by : Sarah Said
this program for calculate the number of chocolate that you can take
each one of chocolate is price 1$ and each one has coupon
for each 7 coupon you can take one chocolate
**/

#include <iostream>

using namespace std;

/// return number of chocolate that buyer can take by money and coupon
int num_chocolate (int num)
{
    if (num < 7)
        return num ;
    return 7+num_chocolate(num - 6) ;
}

int main()
{
    int N_Dollar = 0 ;
    cin >> N_Dollar ;
    cout << num_chocolate(N_Dollar);
    return 0;
}
