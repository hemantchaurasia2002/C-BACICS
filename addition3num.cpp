@hemant


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int add(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    int sum=0;
    cin>>a>>b>>c;
    sum=add(a,b,c);
    cout<<sum;

}
