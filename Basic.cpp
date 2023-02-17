// #include<iostream>
// using namespace std;
// int main(){
//    int a;
//    int b;
//    cin>>a;
//    cin>>b;
//    // cout<<"Abhishek "<<a;  (<<) is called the insertion operator.  (>>) is the extraction operator
//    cout<<"Value of a is "<<a<<"\nValue of b is "<<b<<"\n";
//    cout<<"Sum is "<<a+b;
//    return 0;
//    }


// #include<iostream>
// using namespace std;
// int c = 45;
// int main(){
//       int c;
//       cin>>c;
//       cout<<"Local "<<c<<endl;
//       cout<<"Global "<<::c;  // scope resolusion = (::) used to get value of global variable in main function
//     return 0;
// }


//USING SETW MANIPULATOR
// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//       int a = 1,b=34,c=124,d=1234;
//       cout<<"Without setW: "<<a<<endl;
//       cout<<"Without setW: "<<b<<endl;
//       cout<<"Without setW: "<<c<<endl;
//       cout<<"Without setW: "<<d<<endl;
//       cout<<"With setW: "<<setw(4)<<a<<endl;
//       cout<<"With setW: "<<setw(4)<<b<<endl;
//       cout<<"With setW: "<<setw(4)<<c<<endl;
//       cout<<"With setW: "<<setw(4)<<d<<endl;

//     return 0;
// }   


// CREATIG FUNCTIONS

// #include<iostream>
// using namespace std;
// int table(int a){  // a is called the formal parameter in which copy of num1 is stored.
//     int i;
//     for(i=1;i<=10;i++){
//         cout<<a*i<<"\t";
//     }
// }


// int main(){
//     int num1;  // num1 is called the actual parameter.
//     cout<<"Enter the number whose table you want: "<<endl;
//     cin>>num1;
//     cout<<"Table of "<<num1<<" is:\t";
//     table(num1);      
    
// }


#include<iostream>
using namespace std;

int main(){
    // int *p = new int(45);
    float *p = new float(45.25);
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 11;
    arr[2] = 12;
    delete[] arr;
    cout<<"Value at address p is : "<<*p<<endl;
    cout<<"Value at address arr[0] is : "<<arr[0]<<endl;
    cout<<"Value at address arr[1] is : "<<arr[1]<<endl;
    cout<<"Value at address arr[2] is : "<<arr[2]<<endl;
    return 0;
}
