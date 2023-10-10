## C++ Vector Example

This is a simple example of how to use a C++ vector. Vectors are dynamic arrays that can grow and shrink as needed. They are a very versatile data structure that can be used in a variety of applications.

## Getting Started
### Prerequisites

You need a C++ compiler to build and run this program. If you don't have one installed, you can download and install one like [g++](https://gcc.gnu.org/).

### Or Use IDE
1. Download and install CodeBlocks or any C++ IDE if you do not already have it installed.
2. Download the main.cpp file.
3. Add it to your C++ project.
4. Run the project application.


### Code Explanation
Here is a brief overview of the code:

`````
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
`````

* `vector<int> numbers;` creates a new vector that can store integers.

* `numbers.push_back(5);` adds the element 5 to the vector.

* `numbers[0];` accesses the first element in the vector.

* `numbers.at(1);` accesses the second element in the vector.

* `numbers.back();` accesses the last element in the vector.

* `numbers[1] = 20;` modifies the second element in the vector.

* `numbers.pop_back();` removes the last element from the vector.

* `for (int i = 0; i < numbers.size(); ++i) { cout << numbers[i] << " "; }` iterates over the vector and prints each element.

* `if (numbers.empty()) { cout << "The vector is empty." << endl; } else { cout << "The vector is not empty." << endl; }` checks if the vector is empty and prints a message accordingly.

* `numbers.clear();` clears the vector, removing all elements.

## License
This project is licensed under the MIT License. For more information, please see the LICENSE file.


