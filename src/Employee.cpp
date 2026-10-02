#include"Employee.h"
#include<iostream>
#include<set>
using namespace std;

int Employee::num_of_employee = 0;
set <int> Emp_id;
Employee::Employee(string name, int age, string sex, int salary, string shift):Person(name, age, sex),salary(salary), shift(shift){
  Employee_id = num_of_employee++;
}
//setter
void Employee::set_employee_id(int id){
  if(Emp_id.count(id) == 0){
    Employee_id = id;
    Emp_id.insert(id);
  }else{
    cout << "this id is already token" << endl;
  }
}
void Employee::set_salary(int sal){
  salary = sal;
}
void Employee::set_shift(const string& shf){
  shift = shf;
}

//getter
int Employee::get_employee_id(){
  return Employee_id;
}
int Employee::get_salary(){
  return salary;
}
string Employee::get_shift(){
  return shift;
}