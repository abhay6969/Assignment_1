//Q1  Given an integer array nums, move all 0's to the end of it while
// maintaining the relative order of the nonzero elements.
#include <iostream>
#include <vector>
using namespace std;
vector<int> issum(vector<int>&arr){
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    while (left < arr.size()) {
        nums[left] = 0;
        left++;
    }
}

//Q2 Find the First Non-Reapeting Characters in a string.
#include <iostream>
#include <unordered_set>
using namespace std;
void strings(string &str){
    unordered_set<char> ha;
    for(int i=0;i<str.size();i++){
        char c = str[i];
        if(ha.find(c) != ha.end()){
            return i;
        }
        else{
            ha.insert(c);
        }
        }
            return '-1';
    }

