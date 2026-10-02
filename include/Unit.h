#pragma once
#include<iostream>
#include<string>
#include<vector>
class Doctor;


class Unit{
  std::string unit_name;
  Doctor* unit_head = nullptr;
  int num_of_rooms;
  int num_of_devices;
  std::vector<Doctor*> drs_of_unit;
  public:
  Unit(std::string name);
  bool operator==(const Unit& other) const;
  //setter
  void set_unit_name(std::string& name);
  void set_num_of_rooms(int room);
  void set_num_of_devices(int device);
  void set_unit_head(Doctor& dr);
  void add_doctor(Doctor& dr);
  void remove_doctor(Doctor& dr);

  //getter
  std::string get_unit_name();
  int get_num_of_rooms();
  int get_num_of_devices();
  Doctor* get_unit_head();
  void display_all_doctors();
  bool is_there_a_head();
};