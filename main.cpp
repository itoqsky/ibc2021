#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

void print_vector(const vector<int>& data){
    for(int i : data){
        cout << i << " ";
    }
    cout << '\n';
}

/* Sorting data in ascending order */
void bubble_sort(vector<int>& data){
    /* TODO: Implement bubble sort */
    for (int i = 0 ; i < data.size(); i ++){
        int j = i;
        while (j > 0 && data[j - 1] > data[j]){
            swap(data[j - 1], data[j]);
            j --;
        }
    }
    
}

int main(void) {
    int n = 0;
    do {
        cout << "Input array size(positive number): ";
        cin >> n;
    } while(n < 1);

    /* Reading array */
    vector<int> data(n);
    for(int i = 0; i < n; ++i){
        cin >> data[i];
    }

    cout << "Original data: ";
    print_vector(data);

    auto start = chrono::high_resolution_clock::now();
    bubble_sort(data);
    auto end = chrono::high_resolution_clock::now();
    chrono::nanoseconds duration = chrono::duration_cast<chrono::nanoseconds>(end - start);

    cout << "Data after sorting: ";
    print_vector(data);

    cout << "Time taken: " << duration.count() << "ns" << '\n';

    return 0;
}
