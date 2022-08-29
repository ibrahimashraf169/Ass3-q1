#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(std::vector<int>& arr) {
    int x = 0;
    int si = arr.size();
    for (int i = 0; i < si - 1; i++) {
        for (int j = 0; j < si - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
        }
    }
}

int main() {

    vector<int> vector{ 2,3,1,5,-10,20,19,1,3,2,11 };
    bubbleSort(vector);
    for (int i = 0; i<vector.size(); i++)
        cout << vector[i] << endl;
    return 0;
    }