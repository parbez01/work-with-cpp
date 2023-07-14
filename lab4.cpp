#include<iostream>
using namespace std;
int main()
{
    string input;
    cout << "Enter input: ";
    cin >> input;
    int len = input.length();
    int temp1=0, temp2=0, temp3=0, temp4=0;
    for(int i=0;i<len;i++)
    {
        if(input[i]=='a')
            temp1++;
        else if(input[i]=='b')
            temp2++;
        else if(input[i]=='c')
            temp3++;
        else
            temp4++;
    }
    if(temp1>=1 && temp2>=1 && temp3==0 && temp4==0)
        cout << "Input is in a*b+ state";
    else if(temp1>=1 && temp2>=1 && temp3>=1 && temp4==0)
        cout << "input is in aabc+ state";
    else if(temp4!=0)
        cout << "Invalid input......!!";
}


