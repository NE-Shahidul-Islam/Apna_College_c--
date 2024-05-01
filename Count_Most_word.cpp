#include <iostream>
#include <map>
#include <string>

using namespace std;


pair<string, int> most_frequent_word(int n, string words[]) {
    map<string, int> word_count;

    
    for (int i = 0; i < n; ++i) {
        word_count[words[i]]++;
    }

    
    string max_word;
    int max_freq = 0;
    for (auto &entry : word_count) {
        if (entry.second > max_freq || (entry.second == max_freq && entry.first > max_word)) {
            max_word = entry.first;
            max_freq = entry.second;
        }
    }

    return make_pair(max_word, max_freq);
}

int main() {
    int n;
    cin >> n;

    string words[n];
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    
    pair<string, int> result = most_frequent_word(n, words);

    cout << result.first << " " << result.second << endl;

    return 0;
}
