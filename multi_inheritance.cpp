#include<iostream>
using namespace std;
class Student{
    protected:
    int rollnumber;
    public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};

void Student :: set_rollnumber(int r){
    rollnumber = r;
}

void Student ::get_rollnumber(){
    cout<<"Your Roll Number is: "<<rollnumber<<endl;
}

class Marks : public Student{
    protected:
    float maths,physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
};

void Marks :: set_marks(float f1, float f2){
    maths = f1;
    physics = f2;
}

void Marks :: get_marks(){
    cout<<"Your Marks in Maths are: "<<maths<<endl;
    cout<<"Your Marks in Physics are: "<<physics<<endl;
}

class Result : public Marks{
    public:
    void display(){
        get_rollnumber();
        get_marks();
        cout<<"Your Result is: "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main(){
    Result S1;
    S1.set_rollnumber(1185);
    S1.set_marks(96,99);
    S1.display();
    return 0;
}