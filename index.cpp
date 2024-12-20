#include <iostream>
using namespace std;
int main(){
    int arr[]={12,21,30,41,51};
    int max=0;
    
    for(int i=0; i<5; ++i){
        if(arr[i+1] > max){
            max=arr[i+1];
        }
       
    }
     cout<<max;
}