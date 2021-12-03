#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);

    int id;
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name <<": ";
    cin >> id;

    cout << "Fahsai: I think you may be GEAR ";
    cout << (id / 10000000)-12;
    cout << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cin.ignore();

    string movie;
    cout << name <<": ";
    getline(cin,movie);


    string date;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,date);


    string answer;
    cout << "Fahsai: "<< date << "....that is OK!!! I'm looking forward to watching "<< movie <<" with you.\n";
    cout << name <<": ";
    getline(cin,answer);

    cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/";


}
