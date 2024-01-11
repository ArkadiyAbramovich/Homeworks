 #include <iostream>

 int CountGreater(int* array, int size, int count_point) {
     
   int middle = 0;
   int begin = 0;
   int end = size - 1;

   while(begin <= end) {

      middle = (begin + end) / 2;
      if (array[middle] <= count_point) {
         begin = middle + 1;
      } else if (array[middle] > count_point) {
         end = middle - 1;
      }
   }
      return (size - 1) - end;
 }  
 
 int main(int argc, char** argv) {

   int array[]{14, 16, 19, 32, 32, 32, 56, 69, 72};
   int count_point = 0;

   std::cout << "Введите точку отсчета: ";
   std::cin >> count_point;
   int result = CountGreater(array, 9, count_point);

   std::cout << "Количество элементов в массиве больших, чем " 
              << count_point << ": " << result << std::endl;

   return 0;

}
 

 