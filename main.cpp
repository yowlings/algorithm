#include <iostream>
#include "sort_bubble.hpp"
using namespace std;
using namespace algorithm;
int main()
{
    int arr[] = {6,5,8,2,1,4,9,3,0,7};
    int num = 10;
    sort<int> sort_select(arr, num);
    sort_select.insert();
    sort_select.print_result();
    return 0;
}
