#include <iostream>
using namespace std;

int main(){
    string name ,moviename,day,wut,name1,day1,moviename1,moviename2,name2;
    int lun,id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout << "?????: ";
    cin >> name >> name1 ;
    cout << "Fahsai: Wow!!! " << name << " "<< name1<<" is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
    cout << name << " " << name1<<": ";
    cin >> id;
    lun = (id/10000000)-12;
    cout << "Fahsai: I think you may be GEAR " << lun << ". I have a free movie ticket for you."<<endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << " "<<name1<<": ";
    cin >> moviename >> moviename1;
    cout << "Fahsai: So....which day are you free to go with me?"<<endl;
    cout << name << " "<< name1<<": ";
    cin >>day>>day1;
    cout << "Fahsai: "<< day << " " << day1 << "....that is OK!!! I'm looking forward to watching " << moviename <<" "<< moviename1 <<" with you."<<endl;
    cout << name << " " <<name1<<": ";
    cin >> wut;
    cout << "Fahsai: 555+ see you " << day <<" " << day1<< ". Bye Bye "<< "\\"<<"(^ ^)/";

}