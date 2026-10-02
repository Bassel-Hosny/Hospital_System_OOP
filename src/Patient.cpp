#include"Patient.h"
#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;

set <int> id;
int Patient::num_of_patients = 1;

Patient::Patient(string name, int age, string sex,string sickness) : Person(name, age, sex),sickness(sickness){
  room_id = 0;
  patient_id = num_of_patients++;
}

//setter
void Patient::set_patient_id(int p_id){
  if(id.count(p_id) == 0){
    patient_id = p_id;
    id.insert(p_id);
  }else{
    cout << "this id is already token" << endl;
  }
}

void Patient::set_sickness(const string& sick){
  sickness = sick;
}

void Patient::add_medicine(std::string med){
  medicine.push_back(med);
}

void Patient::set_room_id(int room){
  room_id = room;
}

//getter
int Patient::get_patient_id(){
  return patient_id;
}
string Patient::get_sickness(){
  return sickness;
}
int Patient::get_room_id(){
  return room_id;
}
vector<string>& Patient::get_medicine(){
  return medicine;
}

void Patient::display_info() const {
  cout << "Aame: " << name << "\n";
  cout << "Age: " << age << "\n";
  cout << "Sex: " << sex << "\n";
  cout << "Sickness: " << sickness << "\n";

  if(room_id <= 0){
    cout << "the patient has no room." << endl;
  }
  else{
    cout << "Room id: " << room_id << "\n";
  }

  cout << "Medicins: \n";
  for(auto i : medicine){
    cout << i << " ";
  }
}

