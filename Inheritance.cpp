#include<iostream>
using namespace std;
class School{
    public:
        int id,rno;
        School (int a,int b){
            id  = a;
            rno = b;
        }
        School (){}
};

// class Student : School{   //With this it is not possible.
class Student : public School{
    public:
    int c,d;
    Student(int id,int rno){
        c = id;
        d = rno;
    }
    void display(){
        cout<<"The id and Roll no of student is "<<c<<" and "<<d<<endl;
    }
};
int main(){
    School s1(1,24), s2(2,25);
    cout<<"The id and Roll no of student is "<<s1.id<<" and "<<s1.rno<<endl;
    Student s3(1,24);
    s3.display();

    return 0;
}