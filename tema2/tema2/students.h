#pragma once

class studentList {
  private:
    char name[100];
    float mathgrade;
    float engrade;
    float histgrade;
    float average;

  public:
    void set_average();
    void set_name( char Name[]);
    void set_mathgr(float grade);
    void set_englishgr(float grade);
    void set_historygr(float grade);
    const char* get_name();
    const float get_mathgr();
    const float get_englishgr();
    const float get_historygr();
    const float get_average();
};