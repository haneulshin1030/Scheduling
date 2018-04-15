#include<bits/stdc++.h>
using namespace std;

int teacherid = 0, courseid = 0, studentid = 0;

struct teacher{
  int id, hours;
  vector<bool> canteach;
 
}


struct course{
  course(): id(courseid++), teachr(0) {}
  
  int id, hour;
  vector<student*> students;
  teacher* teachr;
  vector<bool> days;
}

struct student{
  
  int id, grade;
  vector<course*> required, optional;
}


int main() {
  
  
}
