#pragma once
#include<vector>
#include<string>
#include"Person.h"

class Employee: public Person{
  int Employee_id;
  protected:
  int salary;
  std::string shift;
  static int num_of_employee;
  public:
  
  Employee(std::string name, int age, std::string sex, int salary, std::string shift);

  //setter
  void set_employee_id(int id);
  void set_salary(int sal);
  void set_shift(const std::string& shf);

  //getter
  int get_employee_id();
  int get_salary();
  std::string get_shift();
};
