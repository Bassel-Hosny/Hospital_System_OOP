#include"Doctor.h"
#include"Unit.h"
#include"Department.h"
using namespace std;

Doctor::Doctor(string name, int age, string sex, int salary, string shift, string rank, string adminrole):Employee(name, age, sex, salary, shift), rank(rank), admin_role(adminrole){}

//setter
void Doctor::set_rank(string rnk){
  rank = rnk;
  cout << "The rank has been set\n";
}
void Doctor::set_admin_role(const string& admin_rol){
  admin_role = admin_rol;
  cout << "The admin role has been set\n";
}
void Doctor::set_unit(std::string& _unit){
  unit = _unit;
  cout << "The unit has been set\n";
}
void Doctor::set_dept(std::string& _dept){
  dept = _dept;
  cout << "The department has been set\n";
}

//getter
void Doctor::display_info() const {
  cout << "Name: " << name << "\n";
  cout << "Age: " << age << "\n";
  cout << "Sex: " << sex << "\n";
  cout << "Rank: " << rank << "\n";
  cout << "Adminrole: " << admin_role << "\n";
  cout << "Unit: " << unit << "\n";
  cout << "Department: " << dept << "\n";
}
string Doctor::get_rank(){
  return rank;
} 
string Doctor::get_admin_role(){
  return admin_role;
} 
std::string Doctor::get_unit(){
  return unit; 
}
std::string Doctor::get_dept(){
  return dept;
}

//another methods
void Doctor::add_medicine(Patient& copy, std::string med){
  copy.add_medicine(med);
}