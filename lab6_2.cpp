//Dialog of the first example is given below.
#include <iostream>
#include <string>
using namespace std; 

int main() {
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;

    cout << "?????: ";
    string name="?????";
    getline(cin,name);
    cout << "Fahsai: I think you are Engineering student. What is your student ID?" << endl;

    cout << name << ": ";
    int sID;
    cin >> sID;
    int gear;
    gear = (sID/10000000)-12;

    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie tickets for you. " << endl;
    cout << "Fahsai: Let's go to cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;

    cin.ignore();
    cout << name << ": ";
    string name_movie;
    getline(cin,name_movie);
    
    cout << "Fahsai: So....which day are you free to go with me?" << endl;

    cout << name << ": ";
    string day;
    getline(cin,day);

    cout << "Fahsai:" << day << "....that is OK!!! I'm looking forward to watch " <<  name_movie << " with you." << endl;
    cout << name << ": ";
    string text1;
    getline(cin,text1);

    cout << "Fahsai: 555+ see you" << day << ". Bye Bye \\(^ ^)/ " << endl;

    return 0;
}
