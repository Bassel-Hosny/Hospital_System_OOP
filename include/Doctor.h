#pragma once
#include"Employee.h"
#include"Patient.h"

class Doctor:public Employee{
  std::string rank;
  std::string admin_role;
  std::string unit;
  std::string dept;
  public:
  Doctor(std::string name, int age, std::string sex, int salary, std::string shift, std::string rank, std::string adminrole);

  //setter
  void set_rank(std::string rnk);
  void set_admin_role(const std::string& admin_rol);
  void set_unit(std::string& unit);
  void set_dept(std::string& dept);
  

  //getter
  void display_info() const override;
  std::string get_rank();
  std::string get_admin_role();
  std::string get_unit();
  std::string get_dept();

  //another methods
  void add_medicine(Patient& copy, std::string med);
};
