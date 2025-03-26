#include<iostream>

using namespace std;

void luhn(int arr[],int size){
    int total=0;
    // string z="llf";
    for(int i =size-1;i>=0;i--){
        
        cout<<size-i<<"index\n";
        if((size-i)%2==0){
            int temp=0;
            int o=0;
            cout<<"index genap: "<<arr[i]<<endl<<endl;
            arr[i]*=2;
            if(arr[i]>9){
                o=arr[i];
                while(o!=0){
                    temp+=o%10;
                    o=o/10;

                }
                arr[i]=temp;
            }
        }
    }

 for (int  k = 0; k < size; k++)
 {
    cout<<arr[k]<<",";
    total+=arr[k];

 }

 if(total%10==0){
    cout<<"saaaaah";
 }else{
    cout<<"error";
 }
//  cout<<endl;
 
    
}


int main(){
    int n[11]={7,9,9,2,7,3,9,8,7,1,3};
    int leng=sizeof(n)/sizeof(n[0]);
    luhn(n,leng);

    
}