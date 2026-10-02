#include"Hospital.h"
#include<iostream>
#include<algorithm>
using namespace std;

Hospital::Hospital(std::string name, std::vector<Department> Dept) : hospital_name(name), Depts(Dept) {}
//setter
void Hospital::set_hospital_name(std::string name){
  hospital_name = name;
  cout << "The name has been set\n";
}
void Hospital::set_hospital_address(std::string _address){
  address = _address;
  cout << "The address has been set\n";
}
void Hospital::add_department(Department& d){
  auto it = std::find(Depts.begin(), Depts.end(), d);
  if(it != Depts.end()){
    cout << "the unit is already exist\n";
  }else{
    Depts.push_back(d);
    cout << "The unit has been added \n";
  }
}
void Hospital::del_department(Department& d){
auto it = std::find(Depts.begin(), Depts.end(), d);
  if(it != Depts.end()){
    Depts.erase(it);
    cout << "The department has been deleted\n";
  }else{
    cout << "The department isn't exist\n";
  }
}

//getters
std::string Hospital::get_hospital_name(){
  return hospital_name;
}
std::string Hospital::get_hospital_address(){
  return address;
}
std::vector<Department>& Hospital::get_hospital_Depts(){
  return Depts;
}
void Hospital::display_all_departments() const {
  cout << "The hospital Departments:\n";
  for(auto i : Depts){
    cout << i.get_dept_name() << " ";
  }
}


//Doctor - Admin roles - setters
void Hospital::set_hospital_director(Doctor& dr){
  if(dr.get_rank() == "Senior Consultant"){
    Hospital_dir = &dr;
    cout << "seted!\n";
  }else{
    cout << "still not quallified\n";
  }
}
void Hospital::set_medical_director(Doctor& dr){
  if(dr.get_rank() == "Senior Consultant"){
    Medical_dir = &dr;
    cout << "assigned!\n";
  }else{
    cout << "still not quallified\n";
  }
}
void Hospital::set_Deputy_Medical_director(Doctor& dr){
  if(dr.get_rank() == "Senior Consultant"){
    Deputy_Medical_dir = &dr;
    cout << "assigned!\n";
  }else{
    cout << "still not quallified\n";
  }
}
void Hospital::set_chef_of_medical_staff(Doctor& dr){
  if(dr.get_rank() == "Senior Consultant"){
    chef_of_medical_staff = &dr;
    cout << "assigned!\n";
  }else{
    cout << "still not quallified\n";
  }
}
void Hospital::set_dir_of_medical_training(Doctor& dr){
  if(dr.get_rank() == "Consultant"){
    dir_of_medical_training = &dr;
    cout << "assigned!\n";
  }else{
    cout << "still not quallified\n";
  }
}
void Hospital::set_dir_of_quality(Doctor& dr){
  if(dr.get_rank() == "Consultant"){
    dir_of_quality = &dr;
    cout << "assigned!\n";
  }else{
    cout << "still not quallified\n";
  }
}
void Hospital::set_dir_of_outpatient_clinics(Doctor& dr){
  if(dr.get_rank() == "Consultant"){
    dir_of_outpatient_clinics = &dr;
    cout << "assigned!\n";
  }else{
    cout << "still not quallified\n";
  }
}

//Doctor - Admin roles - getters
Doctor* Hospital::get_hospital_director(){
  return Hospital_dir;
}
Doctor* Hospital::get_medical_director(){
  return Medical_dir;
}
Doctor* Hospital::get_Deputy_Medical_director(){
  return Deputy_Medical_dir;
}
Doctor* Hospital::get_chef_of_medical_staff(){
  return chef_of_medical_staff;
}
Doctor* Hospital::get_dir_of_medical_training(){
  return dir_of_medical_training;
}
Doctor* Hospital::get_dir_of_quality(){
  return dir_of_quality;
}
Doctor* Hospital::get_dir_of_outpatient_clinics(){
  return dir_of_outpatient_clinics;
}