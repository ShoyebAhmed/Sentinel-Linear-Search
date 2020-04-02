#include<iostream>
#include<cstdlib>
//#include<new>
using namespace std;
void sentinelSearch(int arr[],int n,int x){

int i=0;
int last=arr[n-1];
arr[n-1]=x;
while(arr[i]!=x){
    i++;
}
arr[n-1]=last;
if((i<n-1)||(arr[n-1]==x)){
    cout<<x<<"is found in index :"<<i;
}
else{
    cout<<"Not found!";
}
}


int main(){
int *arr,n,x,i;
cout<<"Enter the number of elements in the array:";
cin>>n;
arr= new int[n];

for(i=0;i<n;i++){
    arr[i]=rand()%20+5;
    cout<<arr[i]<<endl;
}
cout<<"Enter the number you want to search (between 5 and 24):";
cin>>x;
sentinelSearch(arr,n,x);

return 0;
}
