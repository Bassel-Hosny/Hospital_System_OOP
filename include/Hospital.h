#pragma once
#include"Department.h"
#include"Doctor.h"
class Hospital{
  std::string hospital_name;
  std::string address;
  std::vector<Department> Depts;
  Doctor* Hospital_dir = nullptr;
  Doctor* Medical_dir = nullptr;
  Doctor* Deputy_Medical_dir = nullptr;
  Doctor* chef_of_medical_staff = nullptr;
  Doctor* dir_of_medical_training = nullptr;
  Doctor* dir_of_quality = nullptr;
  Doctor* dir_of_outpatient_clinics = nullptr;

  public:
  Hospital(std::string name, std::vector<Department> Dept);
  //setter
  void set_hospital_name(std::string name);
  void set_hospital_address(std::string add);
  void add_department(Department& d);
  void del_department(Department& d);

  //getters
  std::string get_hospital_name();
  std::string get_hospital_address();
  std::vector<Department>& get_hospital_Depts();
  void display_all_departments() const;

  //Doctor - Admin roles - setters
  void set_hospital_director(Doctor& dr);
  void set_medical_director(Doctor& dr);
  void set_Deputy_Medical_director(Doctor& dr);
  void set_chef_of_medical_staff(Doctor& dr);
  void set_dir_of_medical_training(Doctor& dr);
  void set_dir_of_quality(Doctor& dr);
  void set_dir_of_outpatient_clinics(Doctor& dr);

  //Doctor - Admin roles - getters
  Doctor* get_hospital_director();
  Doctor* get_medical_director();
  Doctor* get_Deputy_Medical_director();
  Doctor* get_chef_of_medical_staff();
  Doctor* get_dir_of_medical_training();
  Doctor* get_dir_of_quality();
  Doctor* get_dir_of_outpatient_clinics();

};