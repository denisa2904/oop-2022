//#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <cstdio>

char string[1000], word[100][100];
int main() {
    int nr = 1;
	scanf("%[^\n]s", string);
    char* p = strtok(string, " ");
    while (p) {
        strcpy(word[++nr], p);
        p = strtok(NULL, " ");
    }
    for (int i=1;i<nr;++i)
        for (int j=i+1;j<=nr;++j)
            if (strlen(word[i]) < strlen(word[j])) {
                char aux[101];
                strcpy(aux, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], aux);
            }
            else if (strlen(word[i]) == strlen(word[j])) {
                bool ok = 1;
                for (int ch = 0; word[i][ch]&&ok;++ch)
                    if (word[i][ch] > word[j][ch]) {
                        char aux[101];
                        strcpy(aux, word[i]);
                        strcpy(word[i], word[j]);
                        strcpy(word[j], aux);
                        ok = 0;
                    }
            }
    for (int i = 1; i <= nr; ++i)
        printf("%s %d\n", word[i], strlen(word[i]));
}