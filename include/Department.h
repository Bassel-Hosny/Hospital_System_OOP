#pragma once
#include<iostream>
#include<vector>
#include<string>
#include"Unit.h"
class Doctor;
class Department{
  std::string dept_name;
  std::vector<Unit> units_of_dept;
  Doctor* dept_head = nullptr;
  public:
  Department(std::string name, std::vector<Unit> _dept);
  bool operator==(const Department& other) const;
  //setter
  void set_dept_name(std::string& name);
  void add_unit(Unit& u);
  void del_unit(Unit& u);
  void set_dept_head(Doctor& dr);

  //getter
  std::string get_dept_name();
  std::vector<Unit>& get_all_units();
  void display_all_units();
  Doctor* get_dept_head();

  bool is_there_a_head();
  std::vector<Department> load_departments();
};
