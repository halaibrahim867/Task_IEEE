#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
   
   string word;
   cin >> word;
   unordered_map<char, int> count_of_char;
   for(char c : word){
    count_of_char[c]++;
   }

   for(char c : word){
        if(count_of_char[c] == 1){
            cout << c <<endl;
            break;
        }
   }

   

   
    return 0;
}


