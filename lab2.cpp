#include<iostream>
using namespace std;
bool isValid (int len_of_inp, string str){
if(!(str[0]=='_' || (str[0]>='A' && str[0]<='Z') || (str[0]>='a' && str[0]<='z')))
    return false;
for (int i = 1; i<len_of_inp;i++){
     if(!(str[i]=='_' || (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')))
     return false;
}
 return true;

}
int main(){
string inp;
cout<<"Enter string: ";
cin>> inp;
int len = inp.length();
if(isValid(len,inp))
    cout<< "This is VALID string";
    else
        cout<<"This is INVALID string";
}

