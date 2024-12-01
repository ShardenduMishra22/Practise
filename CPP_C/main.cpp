#include <bits/stdc++.h>
using namespace std;

// Function to print vector using range-based for loop and auto
void printVector(const vector<int>& vec) {
    for (auto i : vec) {  // Range-based for loop (introduced in C++11)
        cout << i << " ";
    }
    cout << endl;
}

// Lambda function to square a number
auto square = [](int x) -> int { return x * x; };

int main() {
    // Using smart pointer (unique_ptr) to manage dynamically allocated memory
    unique_ptr<vector<int>> ptr = make_unique<vector<int>>();  // Smart pointer to a vector
    
    // Add elements to vector using push_back
    for (int i = 1; i <= 5; ++i) {
        ptr->push_back(i);
    }

    // Print the vector before modification
    cout << "Original Vector: ";
    printVector(*ptr);

    // Modify vector elements using lambda expression
    transform(ptr->begin(), ptr->end(), ptr->begin(), square);  // Apply square function to each element

    // Print the vector after modification
    cout << "Squared Vector: ";
    printVector(*ptr);

    // Using shared_ptr to manage another vector
    shared_ptr<vector<int>> sharedPtr = make_shared<vector<int>>(initializer_list<int>{10, 20, 30, 40});
    
    // Print the shared_ptr vector
    cout << "Shared Pointer Vector: ";
    printVector(*sharedPtr);

    // Using range-based for loop to access elements in shared_ptr vector
    cout << "Iterating through sharedPtr vector using range-based for loop: ";
    for (auto& num : *sharedPtr) {
        cout << num << " ";
    }
    cout << endl;

    // Range-based for loop with auto and reference to modify original vector
    for (auto& num : *sharedPtr) {
        num += 5;  // Modify the elements directly
    }

    // Print the updated vector
    cout << "Updated Shared Pointer Vector: ";
    printVector(*sharedPtr);

    return 0;
}