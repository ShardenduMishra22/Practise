#include <bits/stdc++.h>
using namespace std;

void printVector(const vector<int>& vec) {
    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;
}

auto square = [](int x) -> int { return x * x; };

int main() {
    unique_ptr<vector<int>> ptr = make_unique<vector<int>>();

    for (int i = 1; i <= 5; ++i) {
        ptr->push_back(i);
    }

    cout << "Original Vector: ";
    printVector(*ptr);

    transform(ptr->begin(), ptr->end(), ptr->begin(), square);

    cout << "Squared Vector: ";
    printVector(*ptr);

    shared_ptr<vector<int>> sharedPtr = make_shared<vector<int>>(initializer_list<int>{10, 20, 30, 40});

    cout << "Shared Pointer Vector: ";
    printVector(*sharedPtr);

    cout << "Iterating through sharedPtr vector using range-based for loop: ";
    for (auto& num : *sharedPtr) {
        cout << num << " ";
    }
    cout << endl;

    for (auto& num : *sharedPtr) {
        num += 5;
    }

    cout << "Updated Shared Pointer Vector: ";
    printVector(*sharedPtr);

    return 0;
}