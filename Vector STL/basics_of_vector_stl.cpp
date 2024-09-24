#include<bits/stdc++.h>
using namespace std;

// Pair Explanation
void pair_explanation(){
    cout << "****************Pair's Explanation****************" << endl;
    pair<int, int> m = {1, 2};
    cout << "Simple Pair: " << m.first << " " << m.second << endl;
    
    // Nested pair to store three elements
    pair<int, pair<int, int>> p = {1, {2, 3}};
    cout << "Nested Pair First Element: " << p.first << endl;
    cout << "Nested Pair Second Element: " << p.second.first << " " << p.second.second << endl;
    
    // Pair array
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Pair Array: " << arr[1].first << " " << arr[1].second << endl;
    cout << "****************" << endl;
}

// Vector Explanation
void vector_explanation(){
    cout << "****************Vector Explanation****************" << endl;
    vector<int> n;
    n.push_back(1); // Insertion using push_back
    n.emplace_back(2); // Faster insertion using emplace_back
    cout << "Vector After Insertions: ";
    for (auto i : n) cout << i << " ";
    cout << endl;

    // Vector of pairs
    vector<pair<int, int>> m;
    m.push_back({1, 2});
    m.emplace_back(1, 2);
    cout << "Vector of Pairs: ";
    for (auto p : m) cout << "{" << p.first << "," << p.second << "} ";
    cout << endl;

    // Vector with initial values
    vector<int> v(5, 100);
    cout << "Vector with Initial Values: ";
    for (auto i : v) cout << i << " ";
    cout << endl;

    // Iterators in vector
    vector<int> w = {10, 20, 30, 40, 50};
    cout << "Vector using Iterators: ";
    for (auto it = w.begin(); it != w.end(); ++it) cout << *it << " ";
    cout << endl;

    // Erasing elements
    w.erase(w.begin() + 1); // Erasing second element
    cout << "Vector After Erasing 2nd Element: ";
    for (auto i : w) cout << i << " ";
    cout << endl;
    w.erase(w.begin(), w.begin() + 2); // Erasing first two elements
    cout << "Vector After Erasing First Two Elements: ";
    for (auto i : w) cout << i << " ";
    cout << endl;
    cout << "****************" << endl;
}

// List Explanation
void list_explanation(){
    cout << "****************List Explanation****************" << endl;
    list<int> l;
    l.push_back(2);
    l.emplace_back(4);
    l.push_front(6); // Inserts at the front
    cout << "List Elements: ";
    for (auto i : l) cout << i << " ";
    cout << endl;
    cout << "****************" << endl;
}

// Deque Explanation
void deque_explanation(){
    cout << "****************Deque Explanation****************" << endl;
    deque<int> d;
    d.push_back(1);
    d.emplace_back(2);
    d.push_front(3); // Inserts at the front
    d.emplace_front(4); // Inserts at the front faster
    d.pop_back(); // Removes from the back
    d.pop_front(); // Removes from the front
    cout << "Deque Elements: ";
    for (auto i : d) cout << i << " ";
    cout << endl;
    cout << "****************" << endl;
}

// Stack Explanation
void stack_explanation(){
    cout << "****************Stack Explanation****************" << endl;
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4); // Adds an element on top of the stack
    cout << "Top of Stack: " << st.top() << endl;
    st.pop(); // Removes the top element
    cout << "Top of Stack After Pop: " << st.top() << endl;
    cout << "Stack Size: " << st.size() << endl;
    cout << "Is Stack Empty? " << (st.empty() ? "Yes" : "No") << endl;
    cout << "****************" << endl;
}

// Queue Explanation
void queue_explanation(){
    cout << "****************Queue Explanation****************" << endl;
    queue<int> q;
    q.push(2);
    q.push(4);
    q.emplace(6);
    cout << "Back of Queue (before addition): " << q.back() << endl;
    q.back() += 5; // Modifies the back element
    cout << "Back of Queue (after addition): " << q.back() << endl;
    q.pop(); // Removes front element
    cout << "Front of Queue After Pop: " << q.front() << endl;
    cout << "****************" << endl;
}

// Priority Queue Explanation
void priority_queue_explanation(){
    cout << "****************Priority Queue Explanation****************" << endl;
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(15);
    cout << "Top of Priority Queue: " << pq.top() << endl; // Largest element is at the top
    pq.pop();
    cout << "Top After Pop: " << pq.top() << endl;
    cout << "****************" << endl;
}

// Set Explanation
void set_explanation(){
    cout << "****************Set Explanation****************" << endl;
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(1); // Set stores only unique elements, so 1 will not be inserted again
    cout << "Set Elements: ";
    for (auto i : s) cout << i << " "; // Output will be sorted automatically
    cout << endl;

    // Unordered Set
    unordered_set<int> us;
    us.insert(1);
    us.insert(3);
    us.insert(2);
    us.insert(1);
    cout << "Unordered Set Elements: ";
    for (auto i : us) cout << i << " "; // No guaranteed order
    cout << endl;

    // Multiset (allows duplicates)
    multiset<int> ms;
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(1); // Allows duplicates
    cout << "Multiset Elements: ";
    for (auto i : ms) cout << i << " "; // Sorted order with duplicates
    cout << endl;

    // Unordered Multiset
    unordered_multiset<int> ums;
    ums.insert(1);
    ums.insert(3);
    ums.insert(2);
    ums.insert(1); // Allows duplicates but no order
    cout << "Unordered Multiset Elements: ";
    for (auto i : ums) cout << i << " "; 
    cout << endl;
    cout << "****************" << endl;
}

// Map Explanation
void map_explanation(){
    cout << "****************Map Explanation****************" << endl;
    map<int, string> mp;
    mp[1] = "One";
    mp[2] = "Two";
    mp[3] = "Three";
    cout << "Map Elements: ";
    for (auto i : mp) cout << "{" << i.first << "," << i.second << "} ";
    cout << endl;

    // Unordered Map
    unordered_map<int, string> ump;
    ump[1] = "One";
    ump[2] = "Two";
    ump[3] = "Three";
    cout << "Unordered Map Elements: ";
    for (auto i : ump) cout << "{" << i.first << "," << i.second << "} ";
    cout << endl;

    // Multimap (allows duplicate keys)
    multimap<int, string> mmp;
    mmp.insert({1, "One"});
    mmp.insert({1, "Uno"});
    mmp.insert({2, "Two"});
    cout << "Multimap Elements: ";
    for (auto i : mmp) cout << "{" << i.first << "," << i.second << "} ";
    cout << endl;

    // Unordered Multimap (allows duplicate keys, no order)
    unordered_multimap<int, string> ump2;
    ump2.insert({1, "One"});
    ump2.insert({1, "Uno"});
    ump2.insert({2, "Two"});
    cout << "Unordered Multimap Elements: ";
    for (auto i : ump2) cout << "{" << i.first << "," << i.second << "} ";
    cout << endl;
    cout << "****************" << endl;
}

// Utility Functions from STL
void utility_functions(){
    cout << "****************Utility Functions****************" << endl;
    vector<int> v = {1, 5, 2, 6, 3};
    sort(v.begin(), v.end()); // Sorting the vector
    cout << "Sorted Vector: ";
    for (auto i : v) cout << i << " ";
    cout << endl;

    cout << "Minimum Element: " << *min_element(v.begin(), v.end()) << endl;
    cout << "Maximum Element: " << *max_element(v.begin(), v.end()) << endl;

    int count = __builtin_popcount(15); // Count set bits in 15 (binary: 1111, so 4 set bits)
    cout << "Number of Set Bits in 15: " << count << endl;

    string s = "123";
    next_permutation(s.begin(), s.end()); // Generates next lexicographical permutation
    cout << "Next Permutation of 123: " << s << endl;
    cout << "****************" << endl;
}

int main(){
    pair_explanation();
    vector_explanation();
    list_explanation();
    deque_explanation();
    stack_explanation();
    queue_explanation();
    priority_queue_explanation();
    set_explanation();
    map_explanation();
    utility_functions();
    return 0;
}
