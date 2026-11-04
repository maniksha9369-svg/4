#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int units;
    float charge;

    cout<<"enter the name of the user";
    getline(cin,name);

    cout<<"enter the units";
    cin>>units;

    if(units<=100){
        charge=units*0.60;
    }
    else if(units<=300){
        charge=units*0.60+(units-100)*0.80;
    }
    else{
        charge=units*0.60+(units-100)*0.80+(units-300)*0.90;
    }
    if(charge<50){
        charge=50;
    }
    if(charge>300){
        charge+=charge*0.15;
    }
    cout<<"name is"<<name<<endl;
    cout<<"charge is"<<charge<<endl;
    return 0;
}

