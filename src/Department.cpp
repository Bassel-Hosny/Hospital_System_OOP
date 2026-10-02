#include"Department.h"
#include"Unit.h"
#include<algorithm>
using namespace std;

Department::Department(std::string name, vector<Unit> _units) : dept_name(name), units_of_dept(_units){}
bool Department::operator==(const Department& other) const {
    return dept_name == other.dept_name;
}
//setter
void Department::set_dept_name(std::string& name){
  dept_name = name;
  cout << "The department name has been set \n";
}
void Department::add_unit(Unit& u){
  auto it = find(units_of_dept.begin(), units_of_dept.end(), u);
  if(it != units_of_dept.end()){
    cout << "the unit is already exist\n";
  }else{
    units_of_dept.push_back(u);
    cout << "The unit has been added \n";
  }
}
void Department::del_unit(Unit& u){
  auto it = find(units_of_dept.begin(), units_of_dept.end(), u);
  if(it != units_of_dept.end()){
    units_of_dept.erase(it);
    cout << "The unit has been deleted\n";
  }else{
    cout << "The unit dosen't exist\n";
  }
}
void Department::set_dept_head(Doctor& dr){
  dept_head = &dr;
}

//getter
std::string Department::get_dept_name(){
  return dept_name;
}
std::vector<Unit>& Department::get_all_units(){
  return units_of_dept; 
}
void Department::display_all_units(){
  cout << "All units of the department:\n";
  for(auto i: units_of_dept){
    cout << i.get_unit_name() << " ";
  }
}
Doctor* Department::get_dept_head(){
  return dept_head;
}

bool Department::is_there_a_head(){
  if(dept_head == nullptr) return false;
  else return true;
}

vector<Department> Department::load_departments(){
  //dept_1
  Unit IMD_1("Intensive Care Unit (ICU)");
  Unit IMD_2("Coronary Care Unit (CCU)");
  Unit IMD_3("Gastroenterology Unit");
  Unit IMD_4("Nephrology & Dialysis Unit");
  Unit IMD_5("Endocrinology Unit");
  Unit IMD_6("Pulmonology Unit");
  Unit IMD_7("Hematology Unit");
  Unit IMD_8("Infectious Diseases Unit");
  Department IMD("Internal Medicine Department", {
    IMD_1, IMD_2, IMD_3, IMD_4, IMD_5, IMD_6, IMD_7, IMD_8
  });

  //dept_2
  Unit SD_1("General Surgery Unit");
  Unit SD_2("Orthopedic Surgery Unit");
  Unit SD_3("Neurosurgery Unit");
  Unit SD_4("Vascular Surgery Unit");
  Unit SD_5("Plastic & Reconstructive Surgery Unit");
  Unit SD_6("Urology Unit");
  Unit SD_7("Operating Rooms Complex");
  Department SD("Surgery Department", {
    SD_1, SD_2, SD_3, SD_4, SD_5, SD_6, SD_7
  });

  //dept_3
  Unit PD_1("Neonatal Intensive Care Unit (NICU)");
  Unit PD_2("Pediatric Intensive Care Unit (PICU)");
  Unit PD_3("General Pediatrics Unit");
  Unit PD_4("Pediatric Cardiology Unit");
  Unit PD_5("Pediatric Neurology Unit");
  Department PD("Pediatrics Department", {
    PD_1, PD_2, PD_3, PD_4, PD_5
  });

  //dept_4
  Unit OGD_1("Labor and Delivery Unit");
  Unit OGD_2("Maternity Ward");
  Unit OGD_3("High-Risk Pregnancy Unit");
  Unit OGD_4("Gynecology Unit");
  Unit OGD_5("Reproductive Medicine Unit");
  Department OGD("Obstetrics & Gynecology Department", {
    OGD_1, OGD_2, OGD_3, OGD_4, OGD_5
  });

  //dept_5
  Unit CD_1("Cardiac Intensive Care Unit");
  Unit CD_2("Catheterization Laboratory (Cath Lab)");
  Unit CD_3("Heart Failure Unit");
  Unit CD_4("Electrophysiology Unit");
  Unit CD_5("Cardiac Rehabilitation Unit");
  Department CD("Cardiology Department", {
    CD_1, CD_2, CD_3, CD_4, CD_5
  });

  //dept_6
  Unit ED_1("Resuscitation Unit");
  Unit ED_2("Trauma Unit");
  Unit ED_3("Emergency Observation Unit");
  Unit ED_4("Triage Area");
  Department ED("Emergency Department", {
    ED_1, ED_2, ED_3, ED_4
  });

  //dept_7
  Unit RD_1("CT Scan Unit");
  Unit RD_2("MRI Unit");
  Unit RD_3("Ultrasound Unit");
  Unit RD_4("Interventional Radiology Unit");
  Unit RD_5("X-Ray Unit");
  Department RD("Radiology Department", {
    RD_1, RD_2, RD_3, RD_4, RD_5
  });

  //dept_8
  Unit LD_1("Clinical Chemistry Unit");
  Unit LD_2("Hematology Lab Unit");
  Unit LD_3("Microbiology Unit");
  Unit LD_4("Blood Bank Unit");
  Unit LD_5("Pathology Unit");
  Department LD("Laboratory Department", {
    LD_1, LD_2, LD_3, LD_4, LD_5
  });

  return { IMD, SD, PD, OGD, CD, ED, RD, LD };
}