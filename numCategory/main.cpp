#include <iostream>
using namespace std;

bool armstrong(int x) {
    int h,t,o;
    h=x/100;
    o=x%100;
    t=(x%10)-o;

    int armsN=0;
    armsN=(h*h*h) + (t*t*t) + (o*o*o);

    if(armsN == x)
        return true;
    else
        return false;

}

bool prime(int x) {
    int n=0;
    for(int i=1; i<=x; i++) {
        if(x%i==0)
            n++;
    }

    if(n==2)
        return true;
    else
        return false;
}

bool perfect(int x) {
    int s=0;
    for(int i=1; i<x; i++) {
        if(x%i==0)
            s += i;
    }

    if(s == x)
        return true;
    else
        return false;
}


int main()
{
    //int n=0;
    //cout<<"This program will classify the entered number as armstrong, prime or perfect number.\n";
    //cout<<"Enter number (max: 3 digits)\n: ";
    //cin>>n; while(n>=1000) {cout<<"Please enter appropriate value!"; cin>>n;}

    cout<<"Armstrong Number:\n";
    int i;
    for(i=0; i<=1000; i++)
        if(armstrong(i) == true); cout<<i<<endl;
    cout<<"Prime Number:\n";
    for(i=0; i<=1000; i++)
        if(prime(i) == true); cout<<i<<endl;
    cout<<"Perfect Number:\n";
    for(i=0; i<=1000; i++)
        if(perfect(i) == true); cout<<i<<endl;

    return 0;
}


