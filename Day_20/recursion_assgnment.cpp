#include <iostream>
#include <vector>
#include <string>
using namespace std;
// binary search with recursion 
int binSearchRec(int arr[], int key, int start, int end)
{

    int mid = (start + end) / 2;
    if(start > end) return -1;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        return binSearchRec(arr, key, mid + 1, end);
    }
    else 
    {
        return binSearchRec(arr, key, start, mid - 1);
    } 

}

void findElement(int arr[], int n, int key, int i) {
    if(i == n) return ;
    if(arr[i] == key) cout << i << " ";
    findElement(arr, n, key, i+1);

}

// Recursive function to count valid substrings
int countSubstrings(string &s, int l, int r) {
    // Base case: agar range invalid ho jaye
    if (l > r) return 0;
    if (l == r) return 1; // Single character is always a valid substring

    // Recursively calculate count
    int count = countSubstrings(s, l + 1, r) + countSubstrings(s, l, r - 1) - countSubstrings(s, l + 1, r - 1);

    // Agar boundary characters same hain toh ek valid substring aur milegi
    if (s[l] == s[r]) count += 1;

    return count;
}

void towerOfhanoi(int n, string src, string helper, string dest){
    if(n == 1) {
        cout << "Transfer disk "<< n << " from "<< src << " to "<< dest << endl; 
        return;
    }
    towerOfhanoi(n-1,src ,dest, helper);
    cout << "Transfer disk "<< n << " from "<< src << " to "<< dest << endl; 
    towerOfhanoi(n-1, helper, src, dest );
}

int main() {
    towerOfhanoi(4, "source", "helper", "destination");
    return 0;
}
