#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i < n; i++) {
        bool swapped = false;

        for(int j = 0; j < n - i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, array is already sorted
        if(swapped == false) {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
