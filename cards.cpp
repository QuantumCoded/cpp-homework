#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

// prints out a pair of cards
void print_card_pair(string name, string address, string phone_num, string email) {

} 

int main() {
    // card parameters
    const string NAME = "Your Mom";
    const string ADDR = "123 Place";
    const string PNUM = "123-456-7890";
    const string EMAIL = "yourmom@void.com";

    // get max string length
    const long unsigned int LONGEST_CARD_LINE = std::max({NAME.size(), ADDR.size(), PNUM.size(), EMAIL.size()});

    printf("%s\n", foo);

    return 0;
}