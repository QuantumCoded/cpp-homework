#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    /*
        Program compiles cleanly: No errors/warnings on Linux 5.15.13 using g++ (GCC) 11.1.0
        Uses no global variables: None used
        Program uses modular constructs in the prescribed order: Follows same structure as described
        Calculates correctly: Provided values produce accurate report
        Follows editing requirements for inputs: Bounds checking implemented to prevent values out of range
        Uses while loop for all input routines: All routines use while loops for bounds checking
        Produces report in an acceptable format: Report is formatted correctly
        User friendly prompts: Used the magic word
        Uses variable naming standards as defined by text: Variable names are the same
        Program is cleanly written with descriptive comments: Added comments where necessary
        Program has comment block at beginning of program: Right here it is
        Program conforms to Midterm written specifications: Used only the allowed programming concepts
    */

    // declarations
    int noMonths;
    float price, downPayment, tradeIn,
          loanAmt, annualIntRate, annualIntPercent,
          monIntRate, monPayment;

    // get price routine
    while (1) {
        cout << "Price of vehicle: ";
        cin >> price;

        if (price > 50.0 && price < 50000.0) break;
        else cout << "Please input a number between (50 and 50,000)." << endl;
    }

    // get trade in routine
    while (1) {
        cout << "Trade in value: ";
        cin >> tradeIn;

        if (tradeIn >= 0.0 && tradeIn < price) break;
        else cout << "Please input a number between [0 and " << price << ")." << endl;
    }

    // get down payment routine
    while (1) {
        cout << "Down payment: ";
        cin >> downPayment;

        if (downPayment >= 0.0 && downPayment < price - tradeIn) break;
        else cout << "Please input a number between [0 and " << price - tradeIn << ")." << endl;
    }

    // get annual interest rate routine
    while (1) {
        cout << "Annual interest rate: ";
        cin >> annualIntRate;

        if (annualIntRate >= 0.0 && annualIntRate < 0.5) break;
        else cout << "Please input a number between [0 and 0.5)." << endl;
    }

    // calculate monthly loan payments and display output
    monIntRate = annualIntRate / 12.0;
    annualIntPercent = annualIntRate * 100.0;
    loanAmt = price - downPayment - tradeIn;

    //display report
    cout
        << fixed << setprecision(2)
        << "\n\nHonest Dave's Used Cars\n\n"
        << "Vehicle price           " << setw(8) << price << "\n"
        << "Trade in value          " << setw(8) << tradeIn << "\n"
        << "Down payment            " << setw(8) << downPayment << "\n"
        << "                        --------\n"
        << "Loan amount             " << setw(8) << loanAmt << "\n\n"
        << "Annual interest rate    " << setw(7) << annualIntPercent << "%\n\n"
        << "Monthly payment options";

    // start at 12 months
    noMonths = 12;

    // diplay monthly payments up to 60 months at increments of 12
    while (noMonths <= 60) {
        cout << "\n";
        monPayment = (loanAmt * monIntRate) / (1.0 - pow(1 + monIntRate, -noMonths));
        cout << noMonths << " months               " << setw(8) << monPayment;
        noMonths += 12;
    }

    cout << endl;

    return 0;
}