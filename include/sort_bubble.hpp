#include <iostream>
#include <string.h>
using namespace std;

namespace sort {

template<typename T>
class sort_bubble
{
public:
    sort_bubble(T *arr, int num) {
        memcpy(data,arr,num);
        size = num;
    }
    ~sort_bubble(){

    }

    void sort(){
        T temp;
        for(int i=0,i<size,i++){
            for(int j=size-1,j>i,j--){
                if(data[j]<data[j-1])
            }
        }
    }
    void swap
    void print_result(){}

private:
    T *data;
    int size;
};
}
