//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker that is a really cool name.
Fahsai: I think you are Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47.  I have a free movie tickets for you. 
Fahsai: Let's go to cinema together!!! 
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watch Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/ 
*/

#include <iostream>
using namespace std;
string ans;
string name ;
string day;
string movie;
int k;
int ID=k;

 
int main(){
     cout <<"Fahsai:Sawadee ka...Can you tell me your name?"<<endl;
     cout << "????:";
     getline(cin,name);
     cout << "FFahsai: Wow!!!"<<name<< "that is a really cool name.ahsai: I think you are Engineering student. What is your student ID?"<<endl;
     cout << name<<":";
     cin >> ID;
     cin.ignore();
     int k = ID/10000000-12;
     cout << "Fahsai: I think you may be GEAR"<<k<<". I have a free movie tickets for you."<<endl;
     cout << "Fahsai: Let's go to cinema together!!!"<<endl;
     cout << "Fahsai: What movie do you want to watch?"<<endl;
     cout << name<<":";
     getline(cin,movie);
     cout << "Fahsai: So....which day are you free to go with me?"<<endl;
     cout << name<<":";
     getline(cin,day);
     cout << "Fahsai:"<<day<<"....that is OK!!! I'm looking forward to watch Star Wars VII with you."<<endl;
     cout << name<<":";
     cin >> ans;
     cout << "Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/"<<endl;


 

}
