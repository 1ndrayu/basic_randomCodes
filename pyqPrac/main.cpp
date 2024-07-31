#include <iostream>
using namespace std;

float factorial(float n){
    if(n==0||n==1)
        return 1;
    else
        return n*factorial(n-1);
}

float result(float n, float r) {
    float rs=0;
    for(float i=1; i<=n; i=i+r) {
            rs += i/factorial(i);
    }
    return rs;
}

int main(){
    float n,r;
    cout<<"Enter value of n(limiter): "<<endl;
    cin>>n;

    cout<<"Enter value of r(jumper): "<<endl;
    cin>>r;

    cout<<"Result: "<<result(n,r)<<endl;

return 0;
}
