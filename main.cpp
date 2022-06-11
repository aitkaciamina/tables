#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray z;
    cout<<z;
    DoubleSubscriptedArray c(2,2);
    cout<<"enter c table : "<<endl;
    c.set_table();
    cout<<"display c table : "<<endl;
    cout<<c;
    cout<<endl;
    DoubleSubscriptedArray b(3,3);
    cout<<"enter b table : "<<endl;
    cin>>b;
    cout<<" display b table : "<<endl;
    cout<<b;
    cout<<endl;
    if(b==c)
        cout<<"they're equal "<<endl;
    else
        cout<<"they're not equal "<<endl;
    DoubleSubscriptedArray a(2,2);
    a=c;
    cout<<" display a table (assignemnet): "<<endl;
    cout<<a;
    cout<<endl;
    cout<<" a table post-increment : "<<endl;
    a--;
    cout<<endl;
    cout<<a;
    cout<<endl;
    cout<<" a table pre-increment : "<<endl;
    --a;
    cout<<a;
    cout<<endl;
    DoubleSubscriptedArray x(2,2);
    cout<<"enter x table : "<<endl;
    x.set_table();
    cout<<" display x table : "<<endl;
    cout<<x(1,2);
    return 0;
}
