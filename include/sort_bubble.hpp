#include <iostream>
#include <string.h>
using namespace std;

namespace algorithm {

template<typename T>
class sort
{
public:
    sort(T *arr, int num):compare_times(0),swap_times(0){
//        memcpy(data,arr,num);
        data=arr;
        size = num;
    }
    ~sort(){

    }
    void swap(T *arr, int i, int j){
        T temp;
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    void print_result(){
        cout<<"compare times: "<<compare_times<<endl;
        cout<<"swap times: "<<swap_times<<endl;
        cout<<"after sort the array is: "<<endl;
        for(int i=0;i<size;i++){
            if(i<size-1){
                cout<<data[i]<<", ";
            }
            else
            {
                cout<<data[i]<<endl;
            }
        }


    }

    void bubble(){
        for(int i=0;i<size;i++){
            for(int j=size-1;j>i;j--){
                if(data[j]<data[j-1]){
                    compare_times++;
                    swap(data, j-1, j);
                    swap_times++;
                }
                else{
                    compare_times++;
                }

            }
        }
    }

    void select(){
        int min;
        for(int i=0;i<size-1;i++)
        {
            min = i;
            for(int j=i+1;j<size;j++)
            {
                if(data[j]<data[min])
                {
                    min=j;
                    compare_times++;
                }
                else{
                    compare_times++;
                }

            }
            swap(data,i,min);
            swap_times++;
        }
    }
    void insert(){
        for(int i=1;i<size;i++)
        {
            for(int j=i;j>0;j--)
            {
                if(data[j]<data[j-1])
                {
                    compare_times++;
                    swap(data,j,j-1);
                    swap_times++;
                }
                else{
                    compare_times++;
                    break;
                }
            }
        }
    }



private:
    T *data;
    int size;
    int compare_times;
    int swap_times;

};
}
