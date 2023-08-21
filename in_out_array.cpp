#include <iostream>
#include <fstream>

void shift_right(int* arr, int size) {

  int i = size;
  int j = i-1;
  int temp = arr[size];
    while(j >= 0  && i >= 0)
    {
      arr[i]=arr[j];
      j--;
      i--;
    }
    arr[i] = temp;
}

void shift_left(int* arr, int size) {

  int i = 0;
  int j = i+1;
  int temp = arr[i];
    while(j <= size && i <= size)
    {
      arr[i]=arr[j];
      j++;
      i++;
    }
    arr[i] = temp;
}

int main(int argc, char** argv) {

    int arrSize1, arrSize2;
    int arr1[arrSize1], arr2[arrSize2];

    std::ifstream read_f("in.txt");
    if(!read_f.is_open()) {
        std::cout << "Failed to open file.";
    } else {
       read_f >> arrSize1;
       for (int i = 0; i < arrSize1; i++){
        read_f >> arr1[i];
       }

       read_f >> arrSize2;
       for (int i = 0; i < arrSize2; i++){
            read_f >> arr2[i];
       }
    }

        shift_right(arr2, arrSize2);
        shift_left(arr1, arrSize1);
        

    std::ofstream write_f("out.txt");
    if(!write_f.is_open()) {
        std::cout << "Failed to open file.";
    } else {
        write_f << arrSize2 << std::endl;
        for (int i = 0; i < arrSize2; i++){
            write_f << arr2[i] << " ";
        }

            write_f << std::endl; 

        write_f << arrSize1 << std::endl;
        for (int i = 0; i < arrSize1; i++){
            write_f << arr1[i] << " ";
        }       
    }
    return 0;
}