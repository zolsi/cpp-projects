#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    string longphrase;
    string firstname ="hanna ";
    string lastname ="khalid";
    string full =firstname +lastname;
    cout <<full<<"\n";
    cout <<lastname.append(firstname).length();
    cout <<"\n";
    cout <<lastname.at(3);
    cout <<"\n";
    lastname.at(3)='j';
    cout <<lastname;
    cout <<"\n";
    cout <<"it's fine \""; //we avoided special character " usign backlslash
    cout <<"\n";
    cout <<"enter a long phrase "<<"\n";
    cin >> longphrase;// will take only store a single word
    cout <<longphrase;
    //getline(cin,longphrase);will resolve the problem of storing only the first  word
    //cout <<longphrase;
return 0;
