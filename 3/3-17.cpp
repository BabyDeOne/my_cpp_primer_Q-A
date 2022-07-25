#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){
    vector<string> words;
    string word;
    
    cout << "Please enter some words: " << endl;
    while(cin >> word){
        words.push_back(word);
    }
    for(decltype(words.size()) i = 0; i < words.size(); i++ ){
        
        if (i != 0 && i % 8 ==0){
            cout << endl;
        }
        for(auto &c : words[i]){
            c = toupper(c);
        }
        cout << words[i] << " ";
        
    }
    cout << endl;

    return 0;
}
