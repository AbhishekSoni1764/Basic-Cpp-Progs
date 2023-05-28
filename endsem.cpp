// #include<iostream>
// using namespace std;
// class base{
//     int a,b;
//     public:
//         void read(int x,int y){
//             a = x;
//             b = y;
//         }
//         friend int sum(base &obj);
// };

// int sum(base &obj){
//     return obj.a+obj.b;
// }
// int main(){
//     base b1;
//     b1.read(5,10);
//     cout<<sum(b1);
// return 0;
// }

// #include<iostream>
// using namespace std;
// // class B;
// class Complex{
//     int real,img;
//     public:
//         void read(int a,int b){
//             real = a;
//             img = b;
//         }
//         void display(){
//             cout<<"Real= "<<real<<" and Imaginary= "<<img<<endl;
//         }
//         friend Complex sumComplex(Complex,Complex);
//         friend Complex diffComplex(Complex,Complex);
// };
// Complex sumComplex(Complex o1,Complex o2){
//     Complex o3;
//     o3.read((o1.real+o2.real),(o1.img+o2.img));
//     return o3;
// }
// Complex diffComplex(Complex o1,Complex o2){
//     Complex o4;
//     o4.read(abs(o1.real-o2.real),abs(o1.img-o2.img));
//     return o4;
// }
// int main(){
// Complex obj1,obj2,S,D;
// obj1.read(1,2);
// obj1.display();
// obj2.read(2,4);
// obj2.display();
// S = sumComplex(obj1,obj2);
// D = diffComplex(obj1,obj2);
// S.display();
// D.display();
// return 0;
// }

// #include<iostream>
// using namespace std;
// class A{
//     int a,b;
//     public:
//         A(int x,int y){
//             a = x;
//             b = y;
//         }
//         void display(){
//             cout<<"The Value of A and B is "<<a<<" and "<<b<<endl;
//         }
//         void operator -(){
//             a = -a;
//             b = -b;
//         }
// };
// int main(){
// A obj(10,20);
// obj.display();
// -obj;
// obj.display();
// return 0;
// }

// #include <iostream>
// using namespace std;
// class Complex
// {
//     int real, img;

// public:
//     void read(int a, int b)
//     {
//         real = a;
//         img = b;
//     }
//     void display()
//     {
//         cout << "Real= " << real << " and Imaginary= " << img << endl;
//     }
//     Complex operator+(Complex &obj)
//     {
//         Complex o1;
//         o1.real = real + obj.real;
//         o1.img = img + obj.img;
//         return o1;
//     }
// };

// int main()
// {
//     Complex obj1, obj2, obj3;
//     obj1.read(10, 20);
//     obj2.read(20, 40);
//     obj3 = obj1 + obj2;
//     obj3.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Fraction{
//     int num,den;
//     public:
//         void read(int a,int b){
//             num = a;
//             den = b;
//         }
//         void display(){
//             cout<<num<<endl;
//             cout<<"---"<<endl;
//             cout<<den<<endl;
//         }
//         Fraction operator *(Fraction &obj){
//             Fraction f1;
//             f1.num = num * obj.num;
//             f1.den = den * obj.den;
//             return f1;
//         }
// };
// int main(){
// Fraction obj1,obj2,obj3;
// obj1.read(10,20);
// obj2.read(1,2);
// obj3 = obj1 * obj2;
// obj3.display();
// return 0;
// }

// #include<iostream>
// using namespace std;
// class Cinematography{
//     int a;
//     public:
//         Cinematography(int x){
//             a = x;
//         }
//         virtual void display()=0;
//         // {
//         //     cout<<a<<" Cinematography"<<endl;
//         // }
// };
// class Photography:public Cinematography{
//     int b;
//     public:
//         Photography(int x,int y):Cinematography(x){
//             b = y;
//         }
//         void display(){
//             cout<<b<<" Photography"<<endl;;
//         }
// };
// class Video:public Cinematography{
//     int c;
//     public:
//         Video(int x,int z):Cinematography(x){
//             c = z;
//         }
//         void display(){
//             cout<<c<<" Video"<<endl;
//         }
// };
// int main(){
// Photography ph1(10,50);
// Video vd1(10,30);

// Cinematography *bptr[2];
// bptr[0] = &ph1;
// bptr[1] = &vd1;
// bptr[0]->display();
// bptr[1]->display();

// return 0;
// }

// #include<iostream>
// using namespace std;
// template <typename T>
// T sum(T a,T b){
//     return a+b;
// }
// int main(){
// int a,b;
// cin>>a>>b;
// float c,d;
// cin>>c>>d;
// cout<<sum(a,b)<<endl;
// cout<<sum(c,d)<<endl;
// return 0;
// }

// #include <iostream>
// using namespace std;
// template <class T>
// class Base
// {
//     T a, b;

// public:
//     Base(T x, T y)
//     {
//         a = x;
//         b = y;
//     }
//     T sum()
//     {
//         return a + b;
//     }
//     void display()
//     {
//         cout << "The sum of numbers is = " << sum() << endl;
//     }
// };
// int main()
// {
//     Base <int> b1(10, 20);
//     Base <float> b2(10.235, 20.235);
//     Base <double> b3(10.25852, 20.3254678);
//     b1.display();
//     b2.display();
//     b3.display();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// template <class t1, class t2>
// class Base{
//     t1 a;
//     t2 b;
//     public:
//         Base(t1 x, t2 y){
//             a = x;
//             b = y;
//         }
//         void mul(){
//             cout<<a*b<<endl;
//         }
// };
// int main(){
// Base <int,int> obj1(10,20);
// Base <int,float> obj2(10,30.256);
// obj1.mul();
// obj2.mul();
// return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     try{
//         if(a<0 || b<0){
//             throw('e');
//         }
//         else if(b==0){
//             throw b;
//         }
//         else if(a<0 && b<0){
//             throw 404;
//         }
//         else{
//             cout<<(float)a/b<<endl;
//         }
//     }
//     // catch(char c){
//     //     cout<<"Negative values detected";
//     // }
//     // catch(int x){
//     //     cout<<"Division by zero is caught";
//     // }
//     catch(...){
//         cout<<"Exception caught";
//     }

// return 0;
// }           




#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1;
    for (int i = 0; i <= 10; i++)
    {
        vec1.push_back(i*5);
    }
    vector<int> vec2;
    for (int i = 0; i <= 10; i++)
    {
        vec1.push_back(i*9);
    }
    cout<<"Table of 5"<<endl;
    vector <int> :: iterator itr;
    for (itr = vec1.begin(); itr != vec1.end(); itr++)
    {
            cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<"Table of 9"<<endl;
    vector <int> :: iterator itr1;
    for (itr1 = vec2.begin(); itr1 != vec2.end(); itr1++)
    {
            cout<<*itr1<<" ";
    }
    cout<<endl;
    
    vec1.front();
    cout<<endl;
    vec1.back();
    cout<<endl;
    vec1.capacity();
    cout<<endl;
    vec1.size();
    cout<<endl;
    vec1.max_size();
    cout<<endl;
    vec1.pop_back();
    cout<<endl;
    vec1.swap(vec2);
    cout<<endl;
    


return 0;
}   