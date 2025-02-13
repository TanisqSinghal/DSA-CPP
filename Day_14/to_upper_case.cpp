#include<iostream>
#include<cstring>
using namespace std;
void toUpper(char word[], int n){
    for(int i=0; i<n; i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            continue;
        } else {
            word[i] = word[i] - 'a' + 'A'; //defining position of letter and adding it in a position of its capital version
        }
    }
}

int main(){
    char word[] = "ApPle";
    toUpper(word, strlen(word));
    cout << word;
    return 0;
}