#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Lecture {
    int start;
    int end;
};

bool compareLectures(const Lecture& a, const Lecture& b) {
    return a.end < b.end;
}

int main() {
    int N;
    cin >> N;

    vector<Lecture> lectures(N);
    for (int i = 0; i < N; i++) {
        cin >> lectures[i].start >> lectures[i].end;
    }

    sort(lectures.begin(), lectures.end(), compareLectures);

    int maxLectures = 1;
    int endTime = lectures[0].end;

    for (int i = 1; i < N; i++) {
        if (lectures[i].start >= endTime) {
            maxLectures++;
            endTime = lectures[i].end;
        }
    }

    cout << maxLectures << endl;

    return 0;
}
