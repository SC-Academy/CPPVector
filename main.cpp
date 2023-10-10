#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Creating a vector
    vector<int> numbers;

    // Adding elements to the vector
    numbers.push_back(5);
    numbers.push_back(10);
    numbers.push_back(15);

    // Accessing vector elements
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers.at(1) << endl;
    cout << "Last element: " << numbers.back() << endl;

    // Modifying vector elements
    numbers[1] = 20;

    // Removing an element from the vector
    numbers.pop_back();

    // Iterating over the vector
    cout << "Vector elements: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Checking if the vector is empty
    if (numbers.empty()) {
        cout << "The vector is empty." << endl;
    } else {
        cout << "The vector is not empty." << endl;
    }

    // Clearing the vector
    numbers.clear();

    return 0;
}