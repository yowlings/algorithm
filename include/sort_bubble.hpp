#include <iostream>

using namespace std;

namespace sort {

template<typename T>
class sort_bubble
{
public:
    sort_bubble(T *arr, int num) {
        data = arr;
        size = num;
    }
    ~sort_bubble(){}

    void sort(){}
    void print_result(){}

private:
    T *data;
    int size;
};
}
