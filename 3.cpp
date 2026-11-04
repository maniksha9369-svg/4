#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string:";
    getline(cin,s);
    cout<<"non repeating characters";
    for(int i=0;s[i]!='\0';i++){
        int count=0;//assume that the we have not found the non repating charcters
       
        for(int j=0;s[j]!='\0';j++)
            if(s[i]==s[j])
            count++;//found
                
            if(count==1){
                cout<<s[i]<<" ";
            }
            
        
    }

    return 0;
}