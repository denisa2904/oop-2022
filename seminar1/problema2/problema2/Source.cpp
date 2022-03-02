#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int convert(const char* s) {
    int numar = 0;
    for (int i = 0; s[i] && s[i] !='\n'; ++i)
        numar = numar * 10 + (s[i] - '0');
    return numar;
}

bool solve(int &rez) {
    FILE* fisier = fopen("Text.txt", "r");
    if (fisier == NULL) {
        printf("Nu exista fisierul");
        return false;
    }
    char sir[100];
    int suma = 0;
    while (fgets(sir, sizeof(sir), fisier) != NULL) {
        suma += convert(sir);
    }
    fclose(fisier);
    rez=suma;
    return true;
}

int main() {
    int rez;
    if (solve(rez) == true)
        printf("%d", rez);
    else
        printf("Eroare");
    return 0;
}