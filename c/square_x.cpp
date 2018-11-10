#include<iostream>
using namespace std;

class Solution{
public:
    int mySqrt(int x){
    int low = 0, high = x, mid;
    while (low <= high){
        mid = (low + high)/2;
        if(x/mid > mid){
            low = mid + 1;
        }
        else if(x/mid < mid){
            high = mid - 1;
        }
        else{
            return mid;
        }
    }
    return low - 1;
    }
};

int main(int argc, const char *argv[]){
    Solution s;
    int ans, x;
    cout << "input number:";
    cin >> x;
    ans = s.mySqrt(x);
    cout << ans << endl;
    int a=5,b=2,test;
    
    test = a/b;
    cout << test << endl;
    return 0;
}

