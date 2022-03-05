#define _CRT_SECURE_NO_WARNINGS
#include "students.h"
#include <cstring>

void studentList::set_name(char Name[]) {
    strcpy(this->name, Name);
}
void studentList::set_mathgr( float grade) {
    mathgrade = grade;
}
void studentList::set_historygr( float grade) {
    engrade = grade;
}
void studentList::set_englishgr( float grade) {
    histgrade = grade;
}
void studentList::set_average() {
    average = (mathgrade + engrade + histgrade) / 3;
}
const float studentList::get_average() {
    return average;
}

const char* studentList::get_name() {
    return name;
}

const float studentList::get_mathgr() {
    return mathgrade;
}

const float studentList::get_englishgr() {
    return engrade;
}

const float studentList::get_historygr() {
    return histgrade;
}
