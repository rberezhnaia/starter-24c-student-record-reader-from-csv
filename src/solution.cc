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
  std::string first = "";
  std:: string last = "";
  unsigned int uin = 0;
  double gpa = 0.0;
  char throw_away = '\0';
  while(is.good()) {
    is >> first >> last >> throw_away >> uin >> throw_away >> gpa;
    if (is.fail()) {
      //break;
      return Student{};
    }
    //std::string full = first + " " + last;
    return Student(first + " " + last, uin, gpa);
  } 
  return Student{};
}
