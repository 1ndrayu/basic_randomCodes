#include <iostream>
using namespace std;

int main()
{
    float p,r,i,a;
    int t;

    cout<<"This program will calculate simple interest on a sum lent at a rate for stipulated time";
    cout<<"\nEnter principal value: ";
    cin>>p;

    while(p<1){
        cout<<"Enter appropriate value!";
        cin>>p;
    }

    cout<<"Enter rate of interest: ";
    cin>>r;
    while(r<0){
        cout<<"Enter appropriate value!";
        cin>>r;
    }

    cout<<"Enter time period in months: ";
    cin>>t; while(t<1){cout<<"Enter appropriate value!"; cin>>t;}

    i = (p*r*(t/12))/100;
    a = p+i;

    cout<<"\nInterest: "<<i;
    cout<<"\n>>> Amount: "<<a;

    return 0;
}
