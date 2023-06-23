//Q1
#include <iostream>
#include <vector>
using namespace std;

vector<int> issum(vector<int>&arr, int target){
        vector<int>v;
        int j =1;
        for(int i = 0;i<arr.size()-1;i++){
            j = i+1;
            if((arr[j]+arr[i]) == target){
                v.push_back(i);
                v.push_back(j);
                return v;
                }
        }
        return v;
    }

int main() {
    
	vector<int>arr = {2,7,11,15};
    vector<int>result = issum(arr, 9);
    for(int i:result){
        cout<< i << " ";
    }
	return 0;
}





// Q2
#include <iostream>
#include <vector>
using namespace std;
int num1(vector<int>&arr, int target){
    int c = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == target){
            arr.erase(arr.begin()+i);
        }
        else{
            c++;
        }
    }
    return c;
}
int main() {
    
	vector<int>arr = {3,2,2,3};
    int a = num1(arr, 3);
    cout<< a << " "<< endl;
    for(int i : arr){
        cout<< i <<" ";
    }
    
	return 0;
}




// Q3
#include <iostream>
#include <vector>
using namespace std;
int num2(vector<int>&arr, int target){
    int low  =0, high = arr.size();
    int mid;
    if(low == high){
        return 0;
    }
    while(low<= high){
        mid = low + (high-low)/2;
        if(arr[mid] == target){
            return mid;
        }
        else{
            if(arr[mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    }
    return 0;
}
int main() {
    
	vector<int>arr = {1,2,3,4,5};
    int a = num2(arr, 3);
    cout<< a << " "<< endl;
    cout<< arr[a];
	return 0;
}




//Q4
#include <iostream>
#include <vector>
using namespace std;
vector<int> num2(vector<int>&arr){
    int n = arr.size();
    for(int i=n-1;i>=0;i--){
        if(arr[i] == 9){
            arr[i] = 0;
        }
        else{
            arr[i]+=1;
            return arr;
        }
    }
    arr.insert(arr.begin(),1);
    return arr;    
}
int main() {
    vector<int> digits = {9, 9, 9};
    vector<int> result = num2(digits);
    for (int digit : result) {
        cout << digit << " ";
    }
    cout <<endl;  // Output: 1 3 0

    return 0;
}



// Q5
#include <iostream>
#include <vector>
using namespace std;
void num3(vector<int>&arr1,int m,vector<int>arr2, int n){
    int p = m+n-1;
    int p1 = m-1;
    int p2 = n-1;
    while(p1>= 0 && p2>= 0){
        if(arr1[p1] > arr2[p2]){
            arr1[p] = arr1[p1];
            p1--;
        }
        else{
            arr1[p] = arr2[p2];
            p2--;
        }
        p--;
    }
    while(p2>=0){
        arr1[p] = arr2[p2];
        p--;
        p2--;
    }
}
int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    num3(nums1, m, nums2, n);

    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;  // Output: 1 2 2 3 5 6

    return 0;
}



// Q6
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool num4(vector<int>&arr1){
    unordered_set<int>s;
    for(int i:arr1){
        if(s.count(i)>0){
            return true;
        }
        s.insert(i);
    }
    return false;
}
int main() {
    vector<int> nums = {1, 2, 3, 1};
    bool result = num4(nums);
    cout << boolalpha << result << endl;  // Output: true

    return 0;
}



// Q7
#include <iostream>
#include <vector>
using namespace std;
void num5(vector<int>&arr){
    int l = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] != 0){
            swap(arr[l],arr[i]);
            l++;
        } 
    }
    while (l < arr.size()) {
        arr[l] = 0;
        l++;
    }
}
int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    num5(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}




// Q8
#include <vector>
#include<iostream>
using namespace std;
vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    int mis = -1;
    int sum = 0;
    int dup = -1;
    std::vector<int>v(n+1,0);

    for(int i:nums){
        v[nums]++;
        sum+=num;
    }
    for (int i = 1; i <= n; ++i) {
        if (count[i] == 2) {
            duplicate = i;
        } else if (count[i] == 0) {
            missing = i;
        }
    }
    return {duplicate, n * (n + 1) / 2 - sum + missing};
}
int main() {
    vector<int> nums = {1, 2, 2, 4};
    vector<int> result = findErrorNums(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
    