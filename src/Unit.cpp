#include"Unit.h"
#include"Doctor.h"
#include<algorithm>
using namespace std;

Unit::Unit(std::string name) : unit_name(name){}
bool Unit::operator==(const Unit& other) const {
    return unit_name == other.unit_name;
}
//setter
void Unit::set_unit_name(std::string& name){
  unit_name = name;
  cout << "The name has been set" << endl;
}
void Unit::set_num_of_rooms(int room){
  num_of_rooms = room;
  cout << "The number of rooms has been set" << endl;
}
void Unit::set_num_of_devices(int device){
  num_of_devices = device;
  cout << "The number of devices has been set" << endl;
}
void Unit::set_unit_head(Doctor& dr){
  unit_head = &dr;
  cout << "Doctor/ " << dr.get_name() << "has became the head of the unit " << unit_name << endl;
}
void Unit::add_doctor(Doctor& dr){
  auto it = std::find(drs_of_unit.begin(), drs_of_unit.end(), &dr);
  if(it == drs_of_unit.end()){
    drs_of_unit.push_back(&dr);
    dr.set_unit(unit_name);
    cout << "Dr/ " << dr.get_name() << " has been added\n";
  }else{
    cout << "The doctor already exist\n";
  }
}
void Unit::remove_doctor(Doctor& dr){
  auto it = std::find(drs_of_unit.begin(), drs_of_unit.end(), &dr);
  if(it != drs_of_unit.end()){
    drs_of_unit.erase(it);
    cout << "Dr/" << dr.get_name() << "has been removed\n";
  }else{
    cout << "The doctor dosen't exist\n";
  }
}

//getter
std::string Unit::get_unit_name(){
  return unit_name;
}
int Unit::get_num_of_rooms(){
  return num_of_rooms;
}
int Unit::get_num_of_devices(){
  return num_of_devices;
}
Doctor* Unit::get_unit_head(){
  return unit_head;
}
void Unit::display_all_doctors(){
  cout << "All doctors of the unit:\n";
  for(auto i: drs_of_unit){
    cout << i->get_name() << " ";
  }
}

bool Unit::is_there_a_head(){
  if(unit_head == nullptr)return false;
  else return true;
}