#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    char ch;
    string result;
    cout<<"enter the string:";
    getline(cin,s);
    cout<<"enter the string to remove";
    cin>>ch;

    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=ch){
            result=result+s[i];
        }
    }
    cout<<"updated string"<<result;
    return 0;
    
}