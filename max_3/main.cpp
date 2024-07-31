# include <iostream>
using namespace std;

int main() {
    int a,b,c,mx=0;
    cout<<"This program will find the max. value amongst given 3 numbers\n";
    cout<<"Enter the numbers\n: ";
    cin>>a>>b>>c;

    if(a>b) {
        if(a>c)
            mx=a;
        else
            mx=c;
    }
    else {
        if(b>c)
            mx=b;
        else
            mx=c;
    }

    cout<<"Max Value: "<<mx;

return 0;
}
