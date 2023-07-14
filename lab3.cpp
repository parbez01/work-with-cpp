#include<iostream>
using namespace std;
void isValid(string input, int len_input){
for(int i=0; i<len_input;i++){
if(input[i]== '* ')
cout << "It is an arithmetical operator and Multiple"<<endl;
if(input[i]== '+')
cout << "It is an arithmetical operator and Addition"<<endl;
if(input[i]== '-')
cout << "It is an arithmetical operator and Substraction"<<endl;
if(input[i]== '/')
cout << "It is an arithmetical operator and Division"<< endl;
if(input[i]== '*')
cout << "It is an arithmetical operator and Multiplication"<<endl;
if(input[i]== '=')
cout << "It is a relational operator and equal arithmetical equal operator " << endl;
if(input[i]== '!')
cout << "It is a relational operator and not operator " << endl;
if(input[i]== '>')
cout << "It is a relational operator and Greater than"<< endl;
if(input[i]== '<')
cout << "It is a relational operator and lesser than"<<endl;
if(input[i]== '& ')
cout << "It is a Bitwise operator and Binary AND operator"<<endl;
if(input[i]== '| ')
cout << "It is a Bitwise operator and Binary OR operator"<<endl;
if(input[i]== '^ ')
cout << "It is a Bitwise operator and Binary XOR operator"<<endl;
}
}
int main()
{
string inp;
cout << "Enter your operator:"<< endl ;
cin >> inp;
int len=inp.size();
isValid(inp,len);
}
