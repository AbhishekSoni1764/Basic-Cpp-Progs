#include<iostream>
#include<string>
using namespace std;

class binary
{
    private:
        string str;
        void check_bin(void);  // If check_bin is made private then only class functions can use that it cannot be used in main 
                               //function like line 63.
    public:
        void read(void);
        void opposite(void);   
        void display(void);

};

void binary :: read(void){
    cout<<"Enter the Number: "<<endl;
    cin >> str;
}

void binary :: check_bin(void){
    for (int i = 0; i < str.length();i++)
    {
        if(str.at(i)!='0' && str.at(i)!='1'){
            cout<<"Not a Binary Number"<<endl;
            exit(0);
        }
        else{
            cout<<"Binary Number"<<endl;
        }
      
    }
    
}

void binary :: opposite(void){
    for (int i = 0; i < str.length(); i++)
    {
        if(str.at(i)=='0'){
            str.at(i) = '1';
        }
        else{
            str.at(i) = '0';
        }
    }
    
}

void binary :: display(void){
    check_bin();
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str[i];
    }
    cout<<endl;
}
int main(){
    binary s,b;
    s.read();
    // s.check_bin();   // can also be used inside of the display function (Called nesting Functions)
    s.display();
    s.opposite();
    s.display();

    b.read();
    // b.check_bin();  // Now this wont work as check_bin is private
    b.display();
    b.opposite();
    b.display();
    return 0;
}           