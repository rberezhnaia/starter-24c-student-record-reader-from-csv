#include "solution.hpp"
#include "student.hpp"
#include <fstream>
#include <string>
struct Student {
  std::string full_name;
  unsigned int uin = 0;
  double gpa = 0.0;
};
Student ReadStudentRecFromStream(std::istream& is) {
  while(is.good()) {
    unsigned int student_uin = 0;
    double student_gpa = 0.0;
    char throw_away = '\0';
    is >> student_uin >> throw_away >> student_gpa >> throw_away >> student_midterm >> throw_away >> student_final;
  if (is.fail())
    break;
    return Student{};
  }
}
