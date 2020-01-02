#include <iostream>

using namespace std;

void insert(int arr[],int ele,int index,int *len){
   int i=*len-1;
    while(i>=index){
        arr[i+1]=arr[i];
        i--;
    }
    arr[index]=ele;
    (*len)++;
}


int main()
{   int len,arr[20];
   cout << "enter length of array"<<endl;
   cin>>len;
   cout<<"enter  elements of array"<<endl;
   for(int i=0;i<len;i++){
       cin>>arr[i];
   }
   insert(arr,13,6,&len);
   for(int i=0;i<len;i++){
       cout<<arr[i]<<"   ";
   }
   return 0;
}
