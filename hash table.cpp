#include <iostream>
#include <fstream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    unordered_set<int> numSet;
    int number;

    while (inputFile >> number) {
        if (number > 0) {
            numSet.insert(number);
        } else if (number < 0) {
            numSet.erase(-number);
        } else {
            vector<int> sortedNums(numSet.begin(), numSet.end());
            sort(sortedNums.begin(), sortedNums.end());

            for (int num : sortedNums) {
                outputFile << num << " ";
            }
            break;
        }
    }

    return 0;
}
