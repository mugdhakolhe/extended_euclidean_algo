#include<iostream>
using namespace std;
int gcd(int a, int b, int& x, int& y) 
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x_coef, y_coef;
    int d = gcd(b, a % b, x_coef, y_coef);
    x = y_coef;
    y = x_coef - y_coef * (a / b);
    return d;
}

int main()
{
	int a,b,x,y;
	cin>>a>>b;
	int gc=gcd(a,b,x,y);
	int sum=x+y;
	cout<<sum;
	return 0;
}
