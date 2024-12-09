#include<iostream>
#include<vector>


int main() {
    std::vector<int> vec = {1, 2, 3, 4};

    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        std::cout << "Value: " << *it << "\nLocation: " << &*it << "\n\n";
    }

    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        (*it)++;
    }
    std::cout << "NEW VALUES:\n";
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        std::cout << "Value: " << *it << "\nLocation: " << &*it << "\n\n";
    }
}