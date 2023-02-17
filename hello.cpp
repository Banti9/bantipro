#include<iostream>
#include<cmath>
using namespace std;
// int main(){
//     int i,n=8;
//     for ( i = 1; i<=n; i=pow(i,2))
//     {
//         cout<<"hello world!!!\n";
//     }
//     return 0;
// }

//formul parameter
void table(int x,int p){
        for (int i = 1; i <=p; i++)
        {
            cout<<x*i<<"\n";
        }
        return;
        
    }

int main(){
    int i,n,p;
    cin>>n>>p;
    table(n,p);///function call d
    return 0;}
