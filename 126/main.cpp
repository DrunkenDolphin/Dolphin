#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0,"RUS");
    float a,b,c;
    cin>>a>>b>>c;
    if((sqrt(b*b-4*a*c)-b)/(2*a)<0);
    else if(a!=0&&b!=0)
        cout<<((sqrt(b*b-4*a*c)-b)/(2*a))<<" "<<((-sqrt(b*b-4*a*c)-b)/(2*a));
        else if(a==0){
            if(b!=0&&c!=0)
                cout<<-b/c;
            else if(c==0)
            cout<<"Решений бесконечное множество";
                else if(b==0&&c!=0)
            cout<<"Решений нет";
    }

    return 0;
}
