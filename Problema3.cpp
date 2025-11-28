#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x,y,z,resultado,divi1,divi2,divi3;

    cin>>x>>y;

    resultado = pow(x,3);
    resultado = resultado + pow(x,2);
    divi1 = pow(y,2);
    divi1 = divi1 - y;
    resultado = resultado / divi1;
    divi2= x/y;
    divi2 = divi2 + 5;
    resultado = resultado - divi2;
    divi3 = 2*x;
    resultado = resultado / divi3;
    cout<<setprecision(9)<<resultado;

    return 0;
}
