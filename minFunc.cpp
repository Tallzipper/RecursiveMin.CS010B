#include "minFunc.h"
const int * min(const int arr[], int n) {

    if(n == 0)
    {
        return nullptr;
    }
    
    const int* tempMin = &arr[n-1];

    if(n == 1)
    {

        return tempMin;

    }
    
    else
    {
        const int* curr = min(arr, n-1);

        if(*tempMin > *curr)
        {
            return curr;
        }
        else
        {   
            return tempMin;
        }

    }

}