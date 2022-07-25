#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){
<<<<<<< HEAD
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
=======
    vector<string> svec;
    string word;
    while( cin >> word){
        svec.push_back(word);
    }
    for(auto &a : svec ){
        a = toupper(a);
        cout << a ;
    }
    cout << endl;
}
>>>>>>> origin/main
