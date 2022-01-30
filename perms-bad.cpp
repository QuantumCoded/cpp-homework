#include <stdio.h>

const char* LINE1 = "string 1";
const char* LINE2 = "string 2";
const char* LINE3 = "string 3";

// Prints permuation 1
void permuation_1() {
    printf("%s\n%s\n%s\n", LINE1, LINE2, LINE3);
}

// Prints permuation 2
void permuation_2() {
    printf("%s\n%s\n%s\n", LINE1, LINE3, LINE2);
}

// Prints permuation 3
void permuation_3() {
    printf("%s\n%s\n%s\n", LINE2, LINE1, LINE3);
}

// Prints permuation 4
void permuation_4() {
    printf("%s\n%s\n%s\n", LINE2, LINE3, LINE1);
}

// Prints permuation 5
void permuation_5() {
    printf("%s\n%s\n%s\n", LINE3, LINE1, LINE2);
}

// Prints permuation 6
void permuation_6() {
    printf("%s\n%s\n%s\n", LINE3, LINE2, LINE1);
}

// Prints all permuatations
int main() {
    permuation_1();
    permuation_2();
    permuation_3();
    permuation_4();
    permuation_5();
    permuation_6();
    return 0;
}