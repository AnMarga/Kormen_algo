#include <iostream>
#include <vector>


template<typename T> void insertion_sort(std::vector<T>& vec) {
    for (std::size_t index = 1; index < vec.size(); ++index) {
        int key = vec[index];
        int prev_index = index - 1;
        while (prev_index >= 0 and vec[prev_index] > key) {
            vec[prev_index + 1] = vec[prev_index];
            --prev_index;
        }
        vec[prev_index + 1] = key;
    }
}


int main() {
    int length, input;
    std::vector<int> A;

    std::cin >> length;
    for (std::size_t i = 0; i < length; ++i) {
        std::cin >> input;
        A.push_back(input);
    }

    insertion_sort(A);

    for (auto elem : A) {
        std::cout << elem << " ";
    }

    return 0;
}
