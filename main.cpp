#include <iostream>
#include <vector>
#include <chrono>

using namespace

void print_vector(const std::vector<int>& data){
    for(int i : data){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

/* Sorting data in ascending order */
void bubble_sort(std::vector<int>& data){
    /* TODO: Implement bubble sort */
    for (int i = 1; i <= n; i ++){
        llong j = i;
        while (j > 0 && data[j - 1] > data[j]){
            swap(data[j - 1], data[j]);
            j --;
        }
    }
    
}

int main(void) {
    int n = 0;
    do {
        std::cout << "Input array size(positive number): ";
        std::cin >> n;
    } while(n < 1);

    /* Reading array */
    std::vector<int> data(n);
    for(int i = 0; i < n; ++i){
        std::cin >> data[i];
    }

    std::cout << "Original data: ";
    print_vector(data);

    auto start = std::chrono::high_resolution_clock::now();
    bubble_sort(data);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::nanoseconds duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    std::cout << "Data after sorting: ";
    print_vector(data);

    std::cout << "Time taken: " << duration.count() << "ns" << std::endl;

    return 0;
}
