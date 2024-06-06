#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <functional>

using namespace std;

// Hash functions
size_t h1(const string& s, int arrSize) {
    size_t hash = 0;
    for (char c : s) {
        hash = (hash + static_cast<size_t>(c)) % arrSize;
    }
    return hash;
}

size_t h2(const string& s, int arrSize) {
    size_t hash = 1;
    for (int i = 0; i < s.size(); i++) {
        hash = (hash + pow(19, i) * static_cast<size_t>(s[i])) % arrSize;
    }
    return hash;
}

size_t h3(const string& s, int arrSize) {
    size_t hash = 7;
    for (char c : s) {
        hash = (hash * 31 + static_cast<size_t>(c)) % arrSize;
    }
    return hash;
}

size_t h4(const string& s, int arrSize) {
    size_t hash = 3;
    for (int i = 0; i < s.size(); i++) {
        hash += hash * 7 + static_cast<size_t>(s[0]) * pow(7, i);
        hash %= arrSize;
    }
    return hash;
}

// Lookup operation
bool lookup(const vector<bool>& bitarray, const string& s, int arrSize) {
    size_t a = h1(s, arrSize);
    size_t b = h2(s, arrSize);
    size_t c = h3(s, arrSize);
    size_t d = h4(s, arrSize);

    return bitarray[a] && bitarray[b] && bitarray[c] && bitarray[d];
}

// Insert operation
void insert(vector<bool>& bitarray, const string& s, int arrSize) {
    if (lookup(bitarray, s, arrSize)) {
        cout << s << " is probably already present" << endl;
    } else {
        size_t a = h1(s, arrSize);
        size_t b = h2(s, arrSize);
        size_t c = h3(s, arrSize);
        size_t d = h4(s, arrSize);

        bitarray[a] = true;
        bitarray[b] = true;
        bitarray[c] = true;
        bitarray[d] = true;

        cout << s << " inserted" << endl;
    }
}

int main() {
    const int arrSize = 100;
    vector<bool> bitarray(arrSize, false);

    // Strings to insert
    vector<string> sarray = {
        "abound", "abounds", "abundance", "abundant", "accessible",
        "bloom", "blossom", "bolster", "bonny", "bonus",
        "bonuses", "coherent", "cohesive", "colorful", "comely",
        "comfort", "gems", "generosity", "generous", "generously",
        "genial", "bluff", "cheater", "hate", "war",
        "humanity", "racism", "hurt", "nuke", "gloomy",
        "facebook", "twitter", "stackoverflow", "programming",
        "coding", "algorithm", "data", "structure", "computer",
        "science", "artificial", "intelligence", "machine", "learning",
        "deep", "neural", "network", "algorithm"
    };

    // Inserting strings
    for (const auto& s : sarray) {
        insert(bitarray, s, arrSize);
    }

    return 0;
}
