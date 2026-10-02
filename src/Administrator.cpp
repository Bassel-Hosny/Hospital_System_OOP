#include"Administrator.h"
#include<map>
using namespace std;

map <int, string> room_availability;

Administrator::Administrator(string name, int age, string sex, int salary, string shift, string degree) : Employee(name, age, sex, salary, shift), degree(degree){}

//setter
void Administrator::set_degree(const string& deg){
  degree = deg;
}

//getter
string Administrator::get_degree(){
  return degree;
}

//Another methods
void Administrator::book_room(Patient& p, int room){
  auto it = room_availability.find(room);
  if(it != room_availability.end() && it->second == "used"){
    cout << "the room is fulled" << endl;
  }else{
    room_availability[room] = "used";
    p.set_room_id(room);
    cout << "the room is booked" << endl;
  }
}

void Administrator::leave_the_room(Patient& p){
  room_availability.erase(p.get_room_id());
  p.set_room_id(0);
  cout << "The room is empty now" << endl;
}

void Administrator::display_info() const {
  cout << "Name: " << name << "\n";
  cout << "Age: " << age << "\n";
  cout << "Sex: " << sex << "\n";
  cout << "Degree: " << degree << "\n";
}
