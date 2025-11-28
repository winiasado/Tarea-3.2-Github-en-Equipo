#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x,y,z,resultado,divisor;

    cin>>x>>y>>z;

    resultado = 2 * y;
    resultado = resultado + z;
    resultado = pow(resultado,2.8);
    resultado = resultado - z;
    divisor = x + y;
    divisor = divisor - x/z;
    resultado = resultado / divisor;
    cout<<setprecision(9)<<resultado;

    return 0;
}
