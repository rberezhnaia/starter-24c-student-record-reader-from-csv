#include "solution.hpp"
#include "student.hpp"
#include <fstream>
#include <string>
/*
struct Student {
  std::string full_name;
  unsigned int uin = 0;
  double gpa = 0.0;
};
*/
Student ReadStudentRecFromStream(std::istream& is) {
  std::string line;
  if (!std::getline(is, line)) {
    return Student{};
  }
  
  std::string first = "";
  std:: string last = "";
  unsigned int uin = 0;
  double gpa = 0.0;
  char comma1 = '\0';
  char comma2 = '\0';
  
  while(is.good()) {
    //if (is >> first >> last >> comma1 >> uin >> comma2 >> gpa) {
    is >> first >> last >> comma1 >> uin >> comma2 >> gpa;
    if (is.fail()) {
      //break;
      return Student{};
    }
    if (comma1 == ',' && comma2 == ',') {
      first += " " + last;
      return Student(first, uin, gpa);
    }
   
  }
  return Student{};
}
