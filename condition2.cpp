#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Enter the score";
    cin>>score;
    if(score>=90)
    {
        cout<<"Grade A";
    }
    else if(score>=80)
    {
        cout<<"Grade B";
    }
    else
    {
        cout<<"GRADE C";
    }
    return 0;
}