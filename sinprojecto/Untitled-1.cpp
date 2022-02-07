#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string name, location, school;


    cout << "Enter your name first middle and last: ";
    getline(cin, name);

    cout << "Enter your city and state: ";
    getline(cin, location);

    cout << "Enter your school name: ";
    getline(cin, school);

    cout << "\n Name, location, school: " << name << location << school << endl;
  
     system("pause");
    return 0;
}