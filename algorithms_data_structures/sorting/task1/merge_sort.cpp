#include <iostream>

void merge(int *arr, int begin, int middle, int end) {
  
  int n1 = middle - begin + 1;
  int n2 = end - middle;

  int arr1[n1], arr2[n2];

  for (int i{}; i < n1; i++) {
    arr1[i] = arr[begin + i];
  }

  for (int j{}; j < n2; j++) {
    arr2[j] = arr[middle + 1 + j];
  }

  int i = 0, j = 0, k = begin;

  while (i < n1 && j < n2) {
    if (arr1[i] <= arr2[j]) {
      arr[k] = arr1[i];
      i++;
    } else {
      arr[k] = arr2[j];
      j++;
    }
    k++;
  }
  
  while (i < n1) {
    arr[k] = arr1[i];
    i++;
    k++;
  }
  
  while (j < n2) {
    arr[k] = arr2[j];
    j++;
    k++;
  }
};

void sort_merge(int* arr, int begin, int end) {
  
  if (begin >= end) {
    return;
  }
  
  int middle = begin + (end - begin) / 2;
  sort_merge(arr, begin, middle);
  sort_merge(arr, middle + 1, end);
  merge(arr, begin, middle, end);
  
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

  sort_merge(arr1, 0, length_arr1 - 1);
  
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

  sort_merge(arr2, 0, length_arr2 - 1);

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

  sort_merge(arr3, 0, length_arr3 - 1);

  std::cout << "Отсортированный массив: #3 ";
  for (int i{}; i < length_arr3; ++i) {
    std::cout << arr3[i] << " ";
  }
}