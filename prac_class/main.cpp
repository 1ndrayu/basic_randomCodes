# include <iostream>
using namespace std;

class indc {
public:
    void in();
    int ovrAvg();
    int movAvg();
    void out();

    int n; // no.of total inputs
    int m; //no. of inputs to be selected from end
    float price[10000]; //storing the inputs
    float oAvg; //to store the avg of n inputs
    float mAvg; //to store the avg of m out n inputs
};

void indc::in() {
    cout<<"Enter no of inputs\n: ";
    cin>>n;
    cout<<"Enter the prices till date\n: ";
    for(int i=0; i<n;i++)
        cin>>price[i];
    cout<<"Enter the no. of days you want to consider(enter 0 for all):\n";
    cin>>m;
}

int indc::ovrAvg() {
    for(int i=0; i<n; i++)
        oAvg += price[i];

    return oAvg;
}

int indc::movAvg() {
    for(int i=(n-m)-1; i<n; i++)
        mAvg += price[i];

    return mAvg;
}

void indc::out() {
    if(price[n-1] > oAvg) {
        cout<<"Since Latest price > overall average\nYou can consider to BUY";
        if(price[n-1] > mAvg)
            cout<<"Latest price > moving average\nYou should BUY";
        else if(price[n-1] < mAvg)
            cout<<"Latest price < moving average\nYou should HOLD";
    }
    if(price[n-1] < oAvg)
        cout<<"Latest price < overall average\nYou should SELL";

}

int main() {
    indc x;
    x.in();
    x.ovrAvg();
    x.out();
}
