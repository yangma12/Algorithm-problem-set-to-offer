#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution11 {
public:
    int minArray(vector<int>& numbers) {
        int left = 0;
        int right = numbers.size()-1;
        while (left < right)
        {
            int mid = (right - left)>>1 + left;
            if(numbers[mid] >= numbers[right]){
                left = mid+1;

            }
            else if(numbers[mid] < numbers[right]){
                right = mid;
            }
        }
        return numbers[left];
        
    }
};