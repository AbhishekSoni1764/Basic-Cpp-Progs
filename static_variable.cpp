#include<iostream>
#include<string>
using namespace std;

class School{
    int id;
    string name;
    static int count; // making this static it will act as the only count for all objects in a class
    // int count;  // This counts value will be different for all objects in a class
    public:
        void Ename(void){
            cout<<"Enter your Name: "<<endl;
            cin>>name;
            count++;
            
        }
        void Display(void){
            cout<<"You are Student No "<<count<<" and your name is "<<name<<endl;
        }
    

};

int School:: count;
int main(){
    School s1,s2;  // s1 and s2 both objects are sharing static int count and because of that the value of count is incrementing
    s1.Ename();
    s1.Display();
    s2.Ename();
    s2.Display();
    return 0;
}