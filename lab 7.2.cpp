#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Box {
    int weight;
    int capacity;
};

bool compareBoxes(const Box& a, const Box& b) {
    return a.capacity > b.capacity;
}

int main() {
    int n;
    cin >> n;

    vector<Box> boxes(n);
    for (int i = 0; i < n; i++) {
        cin >> boxes[i].weight >> boxes[i].capacity;
    }

    sort(boxes.begin(), boxes.end(), compareBoxes); //сортируется по вместимости ящиков в порядке убывания

    int maxBoxes = 0;
    int currentWeight = 0;
    for (int i = 0; i < n; i++) {
        if (currentWeight + boxes[i].weight <= boxes[i].capacity) {
            currentWeight += boxes[i].weight;
            maxBoxes++;
        }
        else {
            break;
        }
    }

    cout << maxBoxes << endl;

    return 0;
}
