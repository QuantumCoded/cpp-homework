#include <fstream>
#include <iostream>
#include <vector>
#include <numeric>
#include <math.h>

using namespace std;

// find the mean of scores
double mean(const vector<double> &scores)
{
    // get the sum of the scores
    double sum = accumulate(scores.begin(), scores.end(), 0);
    double mean = sum / scores.size();

    return mean;
}

// find the standard deviations
// using the formula for population standard derivation from:
// https://www.calculator.net/standard-deviation-calculator.html
double find_std_dev(const vector<double> &scores, double mean)
{
    vector<double> diffs;
    double result;

    // buffer the values inside the summation
    for (int i = 0; i < scores.size(); i++) {
        double score = scores[i];
        diffs.push_back(pow(scores[i] - mean, 2));
    }

    // compute the summation
    double sum = accumulate(diffs.begin(), diffs.end(), 0);

    // the standard deviation
    return sqrt(sum / scores.size());
}

int main()
{
    // open the scores
    ifstream file;
    file.open("scores.dat");

    // declare a vector of scores and a temporary string
    vector<double> scores;
    string temp;

    // add all the scores to the vector
    while (getline(file, temp)) {
        scores.push_back(stof(temp));
    }

    double scores_mean = mean(scores);
    cout
        << "Standard Deviation: "
        << find_std_dev(scores, scores_mean)
        << endl
        << "Mean: "
        << scores_mean
        << endl;

    return 0;
}
