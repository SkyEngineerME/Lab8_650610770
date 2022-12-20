#include <iostream>
using namespace std;

int main(){
    string name ,moviename,day,wut,name1,day1,moviename1,moviename2,name2;
    int lun,id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name <<" is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
    cout << name <<": ";
    cin >> id;
    lun = (id/10000000)-12;
    cout << "Fahsai: I think you may be GEAR " << lun << ". I have a free movie ticket for you."<<endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name <<": ";
    cin.ignore();
    getline(cin,moviename);
    cout << "Fahsai: So....which day are you free to go with me?"<<endl;
    cout << name <<": ";
    getline(cin,day);
    cout << "Fahsai: "<< day<< "....that is OK!!! I'm looking forward to watching " << moviename <<" with you."<<endl;
    cout << name <<": ";
    cin >> wut;
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye "<< "\\"<<"(^ ^)/";

}