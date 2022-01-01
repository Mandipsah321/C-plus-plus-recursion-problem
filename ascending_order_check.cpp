#include<iostream>
using namespace std;
bool sortcheck(int array[], int n){
    if(n==1)
    return 1;
    bool result= sortcheck(array+1, n-1);
    return (array[0]<array[1] && result);
}
int main(){
cout<<"Enter the number of elements:";
int n;
cin>>n;
int array[n];
cout<<"Enter the elements:"<<endl;
for(int i=0; i<n; i++){
    cin>>array[i];
}
int result = sortcheck(array, n);
if(result == true){
    cout<<"The entered number is sorted.";
}
else {
    cout<<"The entered number is not sorted.";
}
return 0;
}