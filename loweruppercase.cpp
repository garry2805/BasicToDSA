#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the char:";
    cin>>ch;
    //below I have discuss the very easy methos of checking whether the char is lowercase or uppercase.
    /*we have one another method as well which is basically the correct method or more efficient method as a problem solver 
    which is by using the ASCII value of the alphabet*/

    if(ch>='a'&& ch<='z')
    {
        cout<<"Character is lowercase";
    }
    else{
        cout<<"Character is uppercase";
    }
    return 0;

}