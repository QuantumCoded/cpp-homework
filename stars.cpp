#include <stdio.h>

int main() {
    const char* LINE1 = "   *     *     *     *";
    const char* LINE2 = "*     *     *     *";

    printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", LINE1, LINE2, LINE1, LINE2, LINE1, LINE2, LINE1, LINE2);

    return 0;
}