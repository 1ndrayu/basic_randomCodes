#include <iostream>
using namespace std;

struct div {
    int s;
    string ct;
    int n=0;
    string sub_tchr[100][1];
};

void in(struct div &x) {
    cout<<"\nEnter class strength: ";
    cin>>x.s;
    while(x.s<=0) {cout<<"please enter valid input!\n: ";cin>>x.s;}

    cout<<"\nEnter class teacher's name: ";
    cin>>x.ct;

    cout<<"\nEnter no. of subjects: ";
    cin>>x.n;

    cout<<"\nEnter name of subject following the teacher assigned: \n";
    for(int i=0; i<=x.n-1; i++) {
        cout<<"\nSub: ";
        cin>>x.sub_tchr[i][0];
        cout<<"\nTeacher: ";
        cin>>x.sub_tchr[i][1];
    }
}

void out(struct div &x) {
    cout<<"\n\---\t---\t---\n";
    cout<<"Strength: "<<x.s<<endl;
    cout<<"Class teacher: "<<x.ct<<endl;

    cout<<"Subject\tTeacher: \n";
    for(int i=0; i<=x.n-1; i++) {
        cout<<x.sub_tchr[i][0]<<"\t"<<x.sub_tchr[i][1]<<"\n";
    }
}

int main()
{
    struct div a,b;
    in(a);
    out(a);
}
