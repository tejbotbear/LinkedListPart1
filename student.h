#include <iostream>

using namespace std;

class Student {
 public:
  char* studentname;
}

  Student() {
    studentname = new char[100];
  }
