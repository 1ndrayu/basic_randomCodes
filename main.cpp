#include <iostream>"
using namespace std;
int main()
{
    int n=0, a=0, m=0;
    cout<<"This program will find the max. value among n numbers\n";
    cout<<"\nEnter the number of values you will enter\n: ";
    cin>>n;

    cout<<"Enter the values\n: ";
    for(int i=0; i<n; i++) {
        cin>>a;
        if(a>m)
            m=a;
    }

    cout<<"\nMax. value: "<<m;
    return 0;
}
