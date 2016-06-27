#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char*
reverse_string(char *s) {
    // do not change the data that s point to
    int l = strlen(s);
    if (0 == l) return 0;

    char *r = (char*)calloc(l+1, sizeof(char));
    char *s1 = s;
    for (int i = l-1; i >= 0; i--) {
        r[i] = *s1++;
    }
    return r;
}

char*
reverse_string1(char *s) {
    // will change the s point to
    int l = 0;
    int r = strlen(s)-1;
    char c;

    while (l < r) {
        c = s[l];
        s[l] = s[r];
        s[r] = c;
        l++;
        r--;
    }

    return s;
}

int
main(int argc, const char *argv[]) {
    char *s[] = {"hello", "QZrD2 7UL91z,i`O2ef:6e'2\"yP !:,U.:pX90PU3CXo'i!;3 `j 0?\"'hK8 ? BAjM2\"DBw?7!4R3?U2E8F2y!?3 R2!fw 6e!:0  ErCi98KM`,8`8648,mi3P0`,!5 E.?00J3A 52\"x8,tHy!'2!DLBbK'j!tt1C' 7`JPulW\"\"uRTbr\"',\",U`ZOW5'\"LMDQDMJ\"'5WOZ`U,\",'\"rbTRu\"\"WluPJ`7 'C1tt!j'KbBJD!2'!yHt,8x\"25 A3J00?.E 5!,`0P3im,8468`8,`MK89iCrE  0:!e6 wf!2R 3?!y2F8E2U?3R4!7?wBD\"2MjAB ? 8Kh'\"?0 j` 3;!i'oXC3UP09Xp:.U,:! Py\"2'e6:fe2O`i,z19LU7 2DrZQ"};

    char *r1= reverse_string(s[0]);
    printf("#source:\n%s\n#reversed:\n%s\n", s[0], r1);
    if (r1) free(r1);

    char *r2 = reverse_string(s[1]);
    printf("#source:\n%s\n#reversed:\n%s\n", s[1], r2);
    if (r2) free(r2);

    char s1[] = "hello";
    char *r11 = reverse_string1(s1);
    printf("#reversed:\n%s\n", r11);

    return 0;
}
