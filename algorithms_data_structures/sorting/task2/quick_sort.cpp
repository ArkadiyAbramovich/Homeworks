#include <iostream>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* arr, int low, int high) {
    
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}

void quick_sort(int *arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);    
    }
}   

int main() {
  
  int arr1[]{3, 43, 38, 29, 18, 72, 57, 61, 2, 33};
  int arr2[]{88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74};
  int arr3[]{24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62};

  int length_arr1 = sizeof(arr1)/sizeof(arr1[0]);
  int length_arr2 = sizeof(arr2)/sizeof(arr2[0]);
  int length_arr3 = sizeof(arr3)/sizeof(arr3[0]);
  
  std::cout << "Исходный массив #1: ";
  for (int i{}; i < length_arr1; ++i) {
    std::cout << arr1[i] << " ";
  }

  std::cout << std::endl;

  quick_sort(arr1, 0, length_arr1 - 1);
  
  std::cout << "Отсортированный массив: #1 ";
  for (int i{}; i < length_arr1; ++i) {
    std::cout << arr1[i] << " ";
  }

  std::cout << std::endl << std::endl;

  std::cout << "Исходный массив #2: ";
  for (int i{}; i < length_arr2; ++i) {
    std::cout << arr2[i] << " ";
  }

  std::cout << std::endl;

  quick_sort(arr2, 0, length_arr2 - 1);

  std::cout << "Отсортированный массив: #2 ";
  for (int i{}; i < length_arr2; ++i) {
    std::cout << arr2[i] << " ";
  }

  std::cout << std::endl << std::endl;

  std::cout << "Исходный массив #3: ";
  for (int i{}; i < length_arr3; ++i) {
    std::cout << arr3[i] << " ";
  }

  std::cout << std::endl;

  quick_sort(arr3, 0, length_arr3 - 1);

  std::cout << "Отсортированный массив: #3 ";
  for (int i{}; i < length_arr3; ++i) {
    std::cout << arr3[i] << " ";
  }
}