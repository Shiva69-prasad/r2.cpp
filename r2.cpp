#include<iostream>
using namespace std;
class Solution{
    public:
    void printLeftTriangle(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Solution obj;
    int n;
    cout<<"enter an n value:";
    cin>>n;
    obj.printLeftTriangle(n);
    return 0;
}
