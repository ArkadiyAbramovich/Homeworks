#include "sort_select.hxx"

void FindMin(std::array<int, 5>& arr, std::promise<int> prom) {

    int i = 0;
    int min_indx = i;
        for (int j{i + 1}; j < arr.size(); j++) {
            if (arr[min_indx] > arr[j]) {
                min_indx = j;
            }
            i++;
        }
        prom.set_value(min_indx);
}

void SortSelect(std::array<int, 5>& arr) {

    for (int i{0}; i < arr.size() - 1; i++) {

        std::promise<int> prom;
        std::future<int> ft_res = prom.get_future();
        std::future<int> ft = std::async(FindMin, arr, std::move(prom));
    
        std::swap(arr[i], arr[ft_res.get()]);
    }
}
