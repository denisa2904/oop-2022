#include <cstdio>
#include "Math.h"

int main() {
    Math A;
    printf("%d \n", A.Add(12, 17));
    printf("%d \n", A.Add(12, 24, 34));
    printf("%d \n", A.Add(1.6, 2.4));
    printf("%d \n", A.Add(1.3, 2.8, 3.7));
    printf("%d \n", A.Mul(2, 12));
    printf("%d \n", A.Mul(12, 22, 3));
    printf("%d \n", A.Mul(2.4, 3.7));
    printf("%d \n", A.Mul(2.4, 15.3, 4.5));
    printf("%d \n", A.Add(51, 27, 32, 75, 44, 25));
    printf("%s \n", A.Add("pr", "info"));
    return 0;
}