#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x,y,z,resultado,divisor;

    cin>>x>>y>>z;

    resultado = (2*x + y - z);
    resultado = pow(resultado,(2 * x) + y - z);
    resultado = resultado + 7;
    divisor = 2 * x ;
    divisor = divisor + y - z;
    resultado = resultado / divisor;
    cout<<setprecision(9)<<resultado;

    return 0;
}
