#include<iostream>
using namespace std;
void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string rest= s.substr(1);
    subseq(rest, ans);
    subseq(rest, ans+ch);

}
int main(){
cout<<"Enter the string:";
string s ;
cin>>s;
cout<<"The possible substring are:"<<endl;
subseq(s, "");
return 0;
}
