#define _CRT_SECURE_NO_WARNINGS
#include "NumberList.h"
#include <stdio.h>
int main() {
    NumberList number;
	number.Init();
    bool ok = 1;
    int x;
    while (scanf_s("%d",&x)) {
        if (x == 0)
            break;
        ok=number.Add(x);
        if (!ok)
            break;
    }
    number.Sort();
    number.Print();
}
