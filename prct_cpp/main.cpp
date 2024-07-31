#include <iostream>
using namespace std;

int main(){
float n, r;
int c;

cout<<"enter num and then follow with op, enter 0 for both to end:\n";
cin>>n;
cin>>c;
while(n!=0 && c!=0) {
    switch(c) {
        case 1:
            r+=n;
            break;
        case 2:
            r-=n;
            break;
        case 3:
            r*=n;
            break;
        case 4:
            r/=n;
            break;
        case 0:
            continue;
        default:
            cout<<"Invalid";
    }

    cout<<r;

    cin>>n;
    cin>>c;

}

}
