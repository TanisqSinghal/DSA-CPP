#include<iostream>
#include<cstring>
using namespace std;

void Reverse(char word[], int n){
    int start = 0, end = n-1;
    while(start < end){
        swap(word[start++], word[end--]);
    }
}

int main(){
    char word[] = "code";
    Reverse(word, strlen(word));
    cout << word;
    return 0;
}