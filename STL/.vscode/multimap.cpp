#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mm;

    // 🔹 Insertion (duplicates allowed)
    mm.insert({1, "Apple"});
    mm.insert({2, "Banana"});
    mm.insert({1, "Apricot"});
    mm.insert({3, "Cherry"});
    mm.insert({2, "Blueberry"});
    mm.insert({4, "Dates"});

    cout << "🔹 Full multimap contents:\n";
    for (auto val : mm) {
        cout << val.first << " => " << val.second << endl;
    }

    // 🔹 Access all values for key = 2
    cout << "\n🔹 All values with key = 2:\n";
    auto range = mm.equal_range(2);
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // 🔹 Erase a specific entry (only first {2, "Banana"})
    auto it = mm.find(2); // finds the first one
    if (it != mm.end()) {
        cout << "\n🔹 Erasing: " << it->first << " => " << it->second << endl;
        mm.erase(it);
    }

    // 🔹 Erase all entries with key = 1
    mm.erase(1); // removes both "Apple" and "Apricot"

    // 🔹 Erase a range of entries [3, 5)
    mm.erase(mm.lower_bound(3), mm.lower_bound(5));

    // 🔹 Final multimap contents
    cout << "\n🔹 Final multimap contents after erasures:\n";
    for (auto val : mm) {
        cout << val.first << " => " << val.second << endl;
    }

    // ❌ Invalid: mm[1] — this will give a compile error if uncommented
    // cout << mm[1]; // ❌ Error: multimap does not support operator[]

    return 0;
}
