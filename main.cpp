#include <iostream>
#include "sort_bubble.hpp"
using namespace std;
using namespace sort;
int main()
{
    int arr[] = {6,5,8,2,1,4,9,3,0};
    int num = 10;
    sort_bubble<int> bubble(arr, num);
    cout << "Hello World!" << endl;
    return 0;
}
