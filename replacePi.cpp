#include<iostream>
using namespace std;
void replacePi(string s)
{
    if(s.length()==0)
    return;
    if((s[0]=='p' || s[0]=='P')&& (s[1]=='i'|| s[1]=='I')){
        cout<<3.14;
       replacePi(s.substr(2)); 
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}
int main(){
cout<<"Enter the string:";
string s;
cin>>s;
replacePi(s);
return 0;
}