#include"Person.h"
using namespace std;

Person::Person(std::string name, int age, std::string sex) : name(name), age(age), sex(sex){}

//setter
void Person::set_name(const std::string& n){
  name = n;
}

void Person::set_age(int a){
  age = a;
}

void Person::set_sex(const std::string& s){
  sex = s;
}

//getter
std::string Person::get_name(){
  return name;
}

std::string Person::get_sex(){
  return sex;
}

int Person::get_age(){
  return age;
}
