#include <iostream>
#include <fstream>
using namespace std;

int main(){ 
    ofstream fails("dati.txt");
    cout<<"Ievadi savu vārdu!"<<endl;
    string name;
    cin >> name;

    cout<<"Ievadi savu uzvārdu!"<<endl;
    string last_name;
    cin >> last_name;

    cout<<"Ievadi savu vecumu!"<<endl;
    int age;
    cin >> age;

    fails <<"Vārds: "<<name<<endl;
    fails <<"Uzvārds: "<<last_name<<endl;
    fails <<"Vecums: "<<age<<endl;
    fails.close();
    return 0;
}