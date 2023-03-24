#include <iostream>
using namespace std;
class Happiness{
    public:
        int n,i,j;
        int Meat(){
            cin>>n;
            int a[n],p[n];
            for(i=0;i<n;i++){
                cin>>a[i]>>p[i];
            }
            while(i<n-1){
                if(p[i]<p[i+1]){
                    p[i+1] = p[i];
                }
                i++;
            }
            int min =0;
            for(j=0;j<n;j++){
                min = min + a[j]*p[j];
                // return a[i];
            }
            cout<<min;
        }
};
int main()
{
    Happiness Purchase;
    Purchase.Meat();
	// return 0;
}