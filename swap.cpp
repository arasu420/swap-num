#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1,n2,temp;
    cout<<"Enter the numbers";
    cin>>n1>>n2;
    cout<<"before swap "<<"n1="<<n1<<"    n2="<<n2<<endl;
    temp=n1;
    n1=n2;
    n2=temp;
    cout<<"after swap "<<"n1="<<n1<<"     n2="<<n2<<endl;
    return 0;
}
