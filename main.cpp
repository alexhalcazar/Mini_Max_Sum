#include <iostream>
#include <vector>

void miniMaxSum(std::vector<int> arr);
int main() {
    std::vector<int> arr{2,2,3,4,5,7,8,9};
    miniMaxSum(arr);
    return 0;
}

void miniMaxSum(std::vector<int> arr) {
    long unsigned int j = arr.size()-1;
    int initial_sum = 0;
    int current_sum = 0;

    for(long unsigned int i=1; i<arr.size(); i++)
    {
        initial_sum = initial_sum + arr[i];
    }
    long min_sum = initial_sum;
    long max_sum = initial_sum;

    while(j!=0)
    {
        for(long unsigned int i=0; i<arr.size(); i++)
        {
            if(i!=j)
            {
                current_sum = current_sum + arr[i];
                std::cout << "Currently the sum is: " << current_sum << std::endl;
            }

        }
        //std::cout << "We exited the for loop and the current sum is: " << current_sum << std::endl;
        if(current_sum<min_sum)
        {
            min_sum = current_sum;
        }
        if(current_sum>max_sum)
        {
            max_sum = current_sum;
        }
        current_sum = 0;
        j--;
    }
    std::cout << min_sum << " " << max_sum << std::endl;
}
