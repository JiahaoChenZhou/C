#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

enum Error{
  ERROR_WRONG_NAME,
  ERROR_WRONG_SURNAME,
  ERROR_WRONG_AGE,
  ERROR_WRONG_PHONE_NUMBER
};

int errors(Error e){
  switch (e)
  {
    case ERROR_WRONG_NAME: cout << "Wrong name." << endl;
      break;
    case ERROR_WRONG_SURNAME: cout << "Wrong surname." << endl;
      break;
    case ERROR_WRONG_AGE: cout << "Wrong age." << endl;
      break;
    case ERROR_WRONG_PHONE_NUMBER: cout << "Wrong phone number." << endl;
      break;
  }
}

struct Student{
  string name;
  string surname;
  int age;
  int phoneNumber;
};

bool checkName(string validName){

  if(!isalpha(){
    return false;
  }
  
  return true;
}

void addName(Student student){
  string auxName;
  cout << "Introduce your name: ";
  getline(cin, auxName);
  
}

int main(){
  
  return 0;
}