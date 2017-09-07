#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a+b<<' '<<abs(a-b)<<' '<<a*b;
    if(a*b==0)
        cout<<' '<<0;
     else if(a>b&&a!=0&&a%b==0)
        cout<<' '<<a/b;
        else if(a<b&&b!=0&&b%a==0)
            cout<<' '<<b/a;
    return 0;
}
