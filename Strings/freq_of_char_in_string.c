#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i, j, freq;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }

    for (i = 0; i < count; i++) {
        freq = 1;

        for (j = i + 1; j < count; j++) {
            if (str[i] == str[j]){// && str[i] != ' ') {
                freq++;
                str[j] = '0';
// printf("%c - %d\n", str[j], freq);
           } 
        }

        if (str[i] != '0'){// && str[i] != ' ') {
            printf("%c - %d\n", str[i], freq);
        }
    }

    return 0;
}
/*
string is hemachandar
h-2
e-1
m-1
a-3
c-1
n-1
d-1
r-1
*/
