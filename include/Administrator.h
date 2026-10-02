#pragma once
#include"Employee.h"
#include"Patient.h"

class Administrator:public Employee{
  std::string degree;
  public:

  Administrator(std::string name, int age, std::string sex, int salary, std::string shift, std::string degree);
  //setter
  void set_degree(const std::string& deg);

  
  //getter
  std::string get_degree();


  //Another methods
  void book_room(Patient& p, int room);
  void leave_the_room(Patient& p);
  void display_info() const override;
};
