// #include<iostream>
// using namespace std;

// int main(){
//     cout.setf(ios::showpos);
//     // cout.width(10);
//     cout<<1<<"    "<<0<<"    "<<-1<<endl;
//     // cout.width(10);
//     cout<<"1"<<"  "<<"0"<<"  "<<"1"<<"     ";
//     return 0;
// }



















#include<iostream>
using namespace std;

int main(){
    float a = 30;
    float b = 10000.0;
    float pi = 3.1416;
    cout.setf(ios::fixed);

    cout.precision(3);
    cout<<a<<" ";
    cout.precision(0);
    cout<<b<<" ";
    cout.precision(4);
    cout<<pi<<endl;

    cout.precision(0);
    cout.width(6);
    cout<<a<<" ";
    cout<<b<<" ";
    cout.precision(4);
    cout<<pi<<endl;


    return 0;
}