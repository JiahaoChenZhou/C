#include <iostream>
#include <cstring>

using namespace std;

enum Error{
  ERROR_WRONG_NAME,
  ERROR_WRONG_SURNAME,
  ERROR_WRONG_AGE,
  ERROR_WRONG_PHONE_NUMBER
};

struct Student
{
  string name;
  string surname;
  int age;
  int phoneNumber;
};



int main(){
  cout << "Hola mundo!" << endl;


  return 0;
}