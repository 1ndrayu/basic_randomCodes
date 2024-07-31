#include <iostream>
using namespace std;

int main() {

int n;
cout<<"Enter value of n: ";
cin>>n;

for(int t=1; t<=n; t++) {

    for(int s=1; s<=n-t; s++)
        cout<<" ";

    for(int l=1; l<=t; l++)
        cout<<l;

    for(int r=t-1; r>=1; r--)
        cout<<r;

    cout<<endl;
}

for(int b=1; b<n; b++) {

    for(int sp=1; sp<=b; sp++)
        cout<<" ";

    for(int L=1; L<=n-b; L++)
        cout<<L;

    for(int R=n-1-b; R>0; R--)
        cout<<R;

    cout<<endl;
}



return 0;
}
