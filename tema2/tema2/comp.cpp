#define _CRT_SECURE_NO_WARNINGS
#include "comp.h"
//#include "students.h"
#include <cstring>

int Compname(studentList x,studentList y) {
    
    return strcmp(x.get_name(), y.get_name());
}

int Compmath( studentList x, studentList y) {
    if (x.get_mathgr() > y.get_mathgr())
        return 1;
    if (x.get_mathgr() == y.get_mathgr())
        return 0;
    else return -1;
}

int Compenglish( studentList x, studentList y) {
    if (x.get_englishgr() > y.get_englishgr())
        return 1;
    if (x.get_englishgr() == y.get_englishgr())
        return 0;
    else return -1;
}

int Comphistory(studentList x, studentList y) {
    if (x.get_historygr() > y.get_historygr())
        return 1;
    if (x.get_historygr() == y.get_historygr())
        return 0;
    else return -1;
}

int Compaverage(studentList x, studentList y) {
    if (x.get_average() > y.get_average())
        return 1;
    if (x.get_average() == y.get_average())
        return 0;
    else return -1;
}
