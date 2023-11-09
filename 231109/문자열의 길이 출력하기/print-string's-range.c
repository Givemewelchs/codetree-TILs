#include <stdio.h>
#include <string.h>

int main() {
    int len1, len2;
    char st1[101];
    char st2[101];
    scanf("%s\n%s", st1, st2);

    len1=strlen(st1);
    len2=strlen(st2);
    printf("%d", len1+len2);

    return 0;
}