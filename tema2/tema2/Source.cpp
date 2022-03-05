#define _CRT_SECURE_NO_WARNINGS
#include "students.h"
#include "comp.h"
#include <stdio.h>
#include <cstring>

studentList v[101];
void Read() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        char Name[101];
        printf("%d ", i);
        scanf("%s ", &Name);
        v[i].set_name(Name);
        float grade1, grade2, grade3;
        scanf("%f %f %f", &grade1, &grade2, &grade3);
        v[i].set_mathgr(grade1);
        v[i].set_englishgr(grade2);
        v[i].set_historygr(grade3);
        v[i].set_average();
        printf("%s %f %f %f %f\n", v[i].get_name(), v[i].get_mathgr(), v[i].get_englishgr(), v[i].get_historygr(),v[i].get_average());
    }
}

int main() {
    Read();
    int c1 = Compname(v[1], v[2]);
    int c2 = Compmath(v[1], v[2]);
    int c3 = Compenglish(v[1], v[2]);
    int c4 = Comphistory(v[1], v[2]);
    int c5 = Compaverage(v[1], v[2]);
    printf("%d %d %d %d %d", c1, c2, c3, c4, c5);
}