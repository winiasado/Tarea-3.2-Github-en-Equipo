#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x,y,z,resultado,sum1,divi1,divi2,sum2,sum3,diviD,divii,sumam;

    cin>>x>>y>>z;

    resultado = 2*x;
    resultado = resultado + y;
    resultado = resultado / z;
    sum1 = pow(y,3);
    sum1 = sum1 - z;
    resultado = resultado * sum1;
    divi1 = x;
    divi1 = divi1 + 2*y;
    divi1 = divi1 + 3*z;
    divi2 = z - 2*y;
    divi2 = divi2 - 3*x;
    sum2 = pow(x,2);
    sum3 = pow(z,2);
    divii = divi1 / divi2;
    sumam = sum2 + sum3;
    diviD = divii + sumam;
    resultado = resultado / diviD;

    cout<<setprecision(10)<<resultado<<endl;

    return 0;
}
