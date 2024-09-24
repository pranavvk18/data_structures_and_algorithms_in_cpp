# C++ STL Containers and Functions Overview

This document covers key containers and utility functions in the C++ Standard Template Library (STL), with examples and explanations.

## 1. **Pair**
A `pair` holds two values of potentially different types.

### Usage:
```cpp
pair<int, int> p = {1, 2};
cout << p.first << " " << p.second;  // Output: 1 2
```

- Can be nested: `pair<int, pair<int, int>> p = {1, {2, 3}};`
- Used to store related data like key-value pairs.

## 2. **Vector**
A `vector` is a dynamic array that can change size.

### Key Methods:
- `push_back(value)`: Adds element at the end.
- `emplace_back(value)`: Similar to `push_back` but faster as it constructs the element in place.
- `erase(position)`: Removes element at the specified position.

### Example:
```cpp
vector<int> v = {10, 20, 30};
v.push_back(40);  // Adds 40 at the end
v.erase(v.begin() + 1);  // Removes the second element
```

### Iteration:
- Using iterator: 
  ```cpp
  for (auto it = v.begin(); it != v.end(); ++it) cout << *it;
  ```
- Using range-based loop:
  ```cpp
  for (auto i : v) cout << i;
  ```

## 3. **List**
A doubly linked list that allows fast insertions and deletions at both ends.

### Key Methods:
- `push_front(value)`: Inserts at the beginning.
- `push_back(value)`: Inserts at the end.

### Example:
```cpp
list<int> l;
l.push_front(1);
l.push_back(2);
```

## 4. **Deque**
A double-ended queue, allowing insertion/removal from both ends.

### Key Methods:
- `push_front(value)`: Inserts at the front.
- `push_back(value)`: Inserts at the end.
- `pop_front()`, `pop_back()`: Removes elements from the respective ends.

### Example:
```cpp
deque<int> d = {1, 2, 3};
d.push_front(0);  // {0, 1, 2, 3}
d.pop_back();  // {0, 1, 2}
```

## 5. **Stack**
A LIFO (Last In, First Out) structure.

### Key Methods:
- `push(value)`: Adds an element at the top.
- `pop()`: Removes the top element.
- `top()`: Accesses the top element.

### Example:
```cpp
stack<int> s;
s.push(10);
cout << s.top();  // 10
s.pop();
```

## 6. **Queue**
A FIFO (First In, First Out) structure.

### Key Methods:
- `push(value)`: Adds an element at the end.
- `pop()`: Removes the front element.
- `front()`: Accesses the front element.
- `back()`: Accesses the last element.

### Example:
```cpp
queue<int> q;
q.push(10);
cout << q.front();  // 10
q.pop();
```

## 7. **Priority Queue**
A max-heap by default (largest element is at the top).

### Key Methods:
- `push(value)`: Adds element.
- `pop()`: Removes the largest element.
- `top()`: Returns the largest element.

### Example:
```cpp
priority_queue<int> pq;
pq.push(10);
pq.push(20);
cout << pq.top();  // 20
pq.pop();
```

## 8. **Set**
A sorted container that only contains unique elements.

### Key Methods:
- `insert(value)`: Adds an element.
- `erase(value)`: Removes an element.
- Automatically sorted and does not allow duplicates.

### Example:
```cpp
set<int> s;
s.insert(3);
s.insert(1);
s.insert(2);
```

## 9. **Unordered Set**
Similar to `set` but does not store elements in any specific order (faster lookups).

### Example:
```cpp
unordered_set<int> us;
us.insert(1);
us.insert(2);
```

## 10. **Multiset**
Allows duplicate elements and stores them in sorted order.

### Example:
```cpp
multiset<int> ms;
ms.insert(1);
ms.insert(2);
ms.insert(1);  // Duplicates allowed
```

## 11. **Unordered Multiset**
Same as `multiset`, but without any specific order.

## 12. **Map**
A sorted associative container storing key-value pairs with unique keys.

### Key Methods:
- `operator[key] = value`: Inserts or updates key-value pairs.
- `erase(key)`: Removes element by key.

### Example:
```cpp
map<int, string> mp;
mp[1] = "One";
mp[2] = "Two";
```

## 13. **Unordered Map**
Stores key-value pairs without order (faster lookups).

### Example:
```cpp
unordered_map<int, string> ump;
ump[1] = "One";
```

## 14. **Multimap**
Allows duplicate keys and stores key-value pairs in sorted order.

### Example:
```cpp
multimap<int, string> mmp;
mmp.insert({1, "One"});
mmp.insert({1, "Uno"});
```

## 15. **Unordered Multimap**
Similar to `multimap` but does not maintain any order.

## 16. **Utility Functions in C++ STL**

### a. **sort()**
Sorts elements in a range (typically vectors or arrays).

```cpp
vector<int> v = {5, 2, 3};
sort(v.begin(), v.end());  // {2, 3, 5}
```

### b. **min_element() and max_element()**
Returns an iterator to the smallest and largest elements in a range.

```cpp
vector<int> v = {5, 2, 3};
cout << *min_element(v.begin(), v.end());  // 2
cout << *max_element(v.begin(), v.end());  // 5
```

### c. **next_permutation()**
Generates the next lexicographical permutation.

```cpp
string s = "123";
next_permutation(s.begin(), s.end());  // "132"
```

### d. **__builtin_popcount()**
Returns the number of set bits (1s) in an integer.

```cpp
int count = __builtin_popcount(15);  // 15 in binary is 1111, so count = 4
```

---

This `.md` file provides clear descriptions, syntax examples, and use cases for each container and utility function in the C++ STL. It's important to practice and understand the real-world use cases for each, as they form the foundation of efficient coding in C++.
