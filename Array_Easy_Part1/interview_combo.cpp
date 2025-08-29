// File: 1-Second-Order-Elements.cpp
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int second_smallest(int n, vector<int>& arr) {
    if (n < 2) return -1;
    int sml = INT_MAX, ssml = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < sml) {
            ssml = sml;
            sml = arr[i];
        } else if (arr[i] < ssml && arr[i] != sml) {
            ssml = arr[i];
        }
    }
    return ssml;
}

int second_largest(int n, vector<int>& arr) {
    if (n < 2) return -1;
    int lar = INT_MIN, slar = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > lar) {
            slar = lar;
            lar = arr[i];
        } else if (arr[i] > slar && arr[i] != lar) {
            slar = arr[i];
        }
    }
    return slar;
}

int main() {
    vector<int> arr = {1, 7, 5, 9, 2, 9};
    int n = arr.size();
    cout << "Second Smallest: " << second_smallest(n, arr) << endl;
    cout << "Second Largest: " << second_largest(n, arr) << endl;
    return 0;
}
```cpp
// File: 2-Check-If-Array-Is-Sorted-And-Rotated.cpp
#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int>& nums) {
    int break_point = 0;
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            break_point++;
        }
    }

    if (break_point > 1) {
        return false;
    }

    if (break_point == 1) {
        if (nums.back() > nums.front()) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> nums1 = {3, 4, 5, 1, 2};
    vector<int> nums2 = {2, 1, 3, 4};
    cout << "Test Case 1 (should be true): " << (check(nums1) ? "True" : "False") << endl;
    cout << "Test Case 2 (should be false): " << (check(nums2) ? "True" : "False") << endl;
    return 0;
}
```cpp
// File: 3-Rotate-Array.cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotate(vector<int>& nums, int k) {
    if (nums.empty()) return;
    int n = nums.size();
    k = k % n;
    if (k == 0) return;

    // Reversal Algorithm
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);
    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
```cpp
// File: 4-Move-Zeroes-To-End.cpp
#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0; // Pointer for the next non-zero element's position
    // First pass: move all non-zero elements to the front
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }
    // Second pass: fill the rest of the array with zeros
    for (int i = j; i < nums.size(); i++) {
        nums[i] = 0;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    cout << "Array with zeroes at the end: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
// File: 5-Find-Union-of-Arrays.cpp
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>

using namespace std;

// Optimal Solution using unordered_set (O(m+n))
vector<int> findUnionOptimal(vector<int>& a, vector<int>& b) {
    unordered_set<int> st;
    for (int num : a) {
        st.insert(num);
    }
    for (int num : b) {
        st.insert(num);
    }
    vector<int> ans;
    for (auto it : st) {
        ans.push_back(it);
    }
    return ans;
}

// Your correct solution using set (O((m+n)log(m+n)))
vector<int> findUnionSorted(vector<int>& a, vector<int>& b) {
    set<int> st;
    for (int num : a) {
        st.insert(num);
    }
    for (int num : b) {
        st.insert(num);
    }
    vector<int> ans;
    for (auto it : st) {
        ans.push_back(it);
    }
    return ans;
}

int main() {
    vector<int> a = {1, 2, 3, 2, 1};
    vector<int> b = {3, 2, 2, 3, 3, 2};
    
    vector<int> union_result = findUnionSorted(a, b);
    
    cout << "Union of the arrays: ";
    for (int num : union_result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
