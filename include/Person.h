#pragma once
#include<iostream>
#include<string>
#include<vector>

class Person{
  protected:
  std::string name;
  int age;
  std::string sex;

  public:
  Person(std::string name, int age, std::string sex);
  virtual void display_info() const = 0;
  //setter
  void set_name(const std::string& name);
  void set_age(int age);
  void set_sex(const std::string& sex);

  //getter
  std::string get_name();
  std::string get_sex();
  int get_age();

  virtual ~Person() = default;
};
