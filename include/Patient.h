#pragma once
#include"Person.h"

class Patient : public Person{
  int patient_id;
  std::string sickness;
  int room_id;
  std::vector<std::string> medicine;
  static int num_of_patients;//something to help with giving an id to patients
  public:

  Patient(std::string name, int age, std::string sex, std::string sickness);
  //setter
  void set_patient_id(int id);
  void set_sickness(const std::string& sick);
  void add_medicine(std::string med);
  void set_room_id(int room);

  //getters
  int get_patient_id();
  std::string get_sickness();
  int get_room_id();
  std::vector<std::string>& get_medicine();

  void display_info() const override;
};
