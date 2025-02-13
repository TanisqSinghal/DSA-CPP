#include<iostream>
#include<vector>
using namespace std;
//Leetcode 11
int containerWithmostwater(vector<int> vec){
    int i = 0, j = vec.size() - 1;
    int area = 0;
    while(i < j){
        int width = j-i;
        int height = min(vec[i], vec[j]);
        int temparea = width * height;
        area = max(temparea, area);
        if(vec[i] < vec[j]){
            i++;
        }else {
            j--;
        } 
    }
    return area;
}
vector<vector<int>> Threesum(vector<int> vec){
    int i = 0, j = 1, k = vec.size() - 1, target = -(vec[i]);
}

int main(){
    vector<int> vec = {-1,0,1,2,-1,-4};
    // int n = sizeof(height)/sizeof(int);
    cout << containerWithmostwater(vec);
    return 0;
}