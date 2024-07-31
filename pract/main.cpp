#include <iostream>
using namespace std;

int main(){
float n, r=0;
int c=5;

cout<<"enter num and then follow with op";
cout<<"\nenter 0 in 'op: ' to terminate:";
cout<<"\nenter 1: to add (+)";
cout<<"\nenter 2: to add (-)";
cout<<"\nenter 3: to add (*)";
cout<<"\nenter 4: to add (/)\n";

cout<<"num: "; cin>>r;

while(c!=0) {
    cout<<"op: ";cin>>c;
    cout<<"num: ";cin>>n;
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
            cout<<"Invalid\n";
    }
    cout<<"\t>>> "<<r<<endl;
}

}
