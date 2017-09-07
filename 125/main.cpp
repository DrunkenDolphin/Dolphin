#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(0,"RUS");
    float b,c;
    cin>>b>>c;
    if(b!=0&&c!=0)
        cout<<-b/c;
        else if(c==0)
            cout<<"Решений бесконечное множество";
        else if(b==0&&c!=0)
            cout<<"Решений нет";
        return 0;
}
