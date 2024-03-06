#include "sort_select.hxx"

int FindMin(std::array<int, 5>& arr) {

    int i = 0;
    int min_indx = i;
        for (int j{i + 1}; j < arr.size(); j++) {
            if (arr[min_indx] > arr[j]) {
                min_indx = j;
            }
            return min_indx;
        }
        i++;
}

void SortSelect(std::array<int, 5>& arr, std::promise<std::array<int, 5>> prom) {

    std::packaged_task<int(std::array<int, 5>)> pt(FindMin);
    std::shared_future<int> ft_res = pt.get_future();
    auto ft = std::async(std::move(pt), arr);
    for (int i{0}; i < arr.size() - 1; i++) {
        std::swap(arr[i], arr[ft_res.get()]);
        std::this_thread::sleep_for(std::chrono::milliseconds(20));
    }
    prom.set_value(arr);
}


