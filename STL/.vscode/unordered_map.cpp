#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> umap;

    // 🔹 Insertion
    umap[1] = "Apple";             // insert using []
    umap.insert({2, "Banana"});    // insert using insert()
    umap.emplace(3, "Cherry");     // insert using emplace()

    // 🔹 Overwriting a key
    umap[2] = "Blueberry";         // value of key 2 is updated

    // 🔹 Iteration (no specific order!)
    cout << "🔹 All elements:\n";
    for (auto x : umap) {
        cout << x.first << " => " << x.second << endl;
    }

    // 🔹 Accessing an element
    cout << "\nValue at key 3: " << umap[3] << endl;

    // 🔹 Check existence
    if (umap.find(4) == umap.end())
        cout << "Key 4 not found\n";

    // 🔹 Size
    cout << "\nSize: " << umap.size() << endl;

    // 🔹 Erasing
    umap.erase(2); // removes key 2

    // 🔹 After erase
    cout << "\nAfter erasing key 2:\n";
    for (auto x : umap) {
        cout << x.first << " => " << x.second << endl;
    }

    return 0;
}
