#include <bits/stdc++.h>
using namespace std;
int badGuesse = 5;
string chooseWord(){
    vector <string> wordList;
    ifstream myWords ("Words.txt");
    if (myWords.is_open()){
        string Word;
        while (myWords >> Word){
            wordList.push_back(Word);
        }
    } 
    myWords.close();
    int size = wordList.size();
    int n = rand() % size;
    return wordList[n];
}
char readguess(){
    string a;
    cin >> a;
    return a[0];
    
}
bool check (string word, char guesse){
    return word.find_first_of(guesse) != string::npos;

}
void update (string word, char guesse){
    for (int i = 0; i < word.length(); i++){
        word[i] = guesse;
    }
}
int main(){
    srand(time(0));
    string word = chooseWord();
    string guesseWord = string (word.length(), '_');
    while (badGuesse >= 1){
        char guesse = readguess();
        if (check(word, guesse)){
            for (int i = 0; i < word.size(); i++){
                if (guesse == word[i]){
                    guesseWord[i] = guesse;
                }
            }
        }else {
            badGuesse--;
        }
        cout << guesseWord << endl;
         if (badGuesse > 0) cout << "SO LAN DOAN CON LAI: " << badGuesse << endl;
        if (guesseWord == word && badGuesse >= 0){
            cout << "YOU WON" << endl;
            break;
        }
    }
    if (badGuesse <= 0) cout << "YOU LOSE" << endl;
    cout << "WORD IS: " << word;
    

}