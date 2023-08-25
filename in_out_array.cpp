#include <iostream>
#include <fstream>

void shift_right(int* arr, int size) {

  int i = size-1;
  int j = i-1;
  int temp = arr[i];
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
    while(j <= size-1 && i <= size-1)
    {
      arr[i]=arr[j];
      j++;
      i++;
    }
    arr[i] = temp;
}

int main(int argc, char** argv) {

    int arrSize1 = 0, arrSize2 = 0;

    std::ifstream read_f("in.txt");
    if(!read_f.is_open()) {
        std::cout << "Failed to open file.";
    }  
       read_f >> arrSize1;
       int* arr1 = new int[arrSize1];
       for (int i = 0; i < arrSize1; i++){
        read_f >> arr1[i];
       }

       read_f >> arrSize2;
       int* arr2 = new int[arrSize2];
       for (int i = 0; i < arrSize2; i++){
            read_f >> arr2[i];
       }
    

    read_f.close();

        shift_left(arr1, arrSize1);
        shift_right(arr2, arrSize2);
         

    std::ofstream write_f("out.txt");
    if(!write_f.is_open()) {
        std::cout << "Failed to open file.";
    } 
        write_f << arrSize2 << std::endl;
        for (int i = 0; i < arrSize2; i++){
            write_f << arr2[i] << " ";
        }

            write_f << std::endl; 

        write_f << arrSize1 << std::endl;
        for (int i = 0; i < arrSize1; i++){
            write_f << arr1[i] << " ";
        }       
    

    write_f.close();

    delete[] arr1, arr2;

    return 0;
}