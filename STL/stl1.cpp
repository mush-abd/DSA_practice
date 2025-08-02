#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
// #include <utility>
using namespace std;


void pair_example(){

    pair<int, int> p = {1, 2};

    cout << "First element: " << p.first << endl;
    cout << "Second element: " << p.second << endl;

    return;
}

void vector_example() {
    
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back(make_pair(1, 2));
    vec.emplace_back(3, 4);

    cout << "Vector of pairs:" << endl;
    for (const auto& p : vec) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }
}


void iterator_example() {
    vector<int> v = {1, 2, 3, 4, 5};
    // Using an iterator to traverse the vector
    vector<int>::iterator it = v.begin();
    while (it != v.end()) {
        cout << *it << " ";
        ++it;
    }
    cout << endl;
}

void list_example() {

    list<int> ls = {1, 2, 3};
    ls.push_back(4);
    ls.emplace_back(5);
    cout << "List elements: ";

    ls.push_front(0);
    // ls.emplace_front({2, 4});

    for (const auto& elem : ls) {
        cout << elem << " ";
    }
}

void stack_example() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Stack elements: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void queue_example() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    q.push(4);
    q.push(5);
    cout << "Front element: " << q.back() << endl;
    cout << endl;
}

void priority_queue_example() {
    priority_queue<int> pq;
    pq.push(3);
    pq.push(1);
    pq.push(2);
    pq.push(5);
    pq.push(4);
    pq.push(6);

    cout << "Priority Queue elements: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // minimum heap using pq
    priority_queue<int, vector<int>, greater<int>> min_heap;
    min_heap.push(3);
    min_heap.push(1);
    min_heap.push(2);
    min_heap.push(5);
    min_heap.push(4);

    cout << "Min Heap elements: ";
    while (!min_heap.empty()) {
        cout << min_heap.top() << " ";
        min_heap.pop();
    }
}

void set_example() {
    set<int> s = {1, 2, 3, 4, 5};
    s.insert(6);
    s.erase(3);
    s.emplace(7);
    cout << "Set size: " << s.size() << endl;
    cout << "Set contains 4: " << (s.count(4) ? "Yes" : "No") << endl;

    cout << "Set elements: ";
    for (const auto& elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    auto it = s.find(13);
    cout << *(it) << endl;

    int cnt = s.count(4);
    cout << "Count of 4: " << cnt << endl;
}

void example_map(){
    map<int, string> m;
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m.insert({4, "four"});
    m.emplace(5, "five");
    cout << "Map elements:" << endl;
    for (const auto& pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // new map
    map< int, pair<string, list<int>> > m2;
    // this map can represent the marks of students in a class, 
    // where the key is the student ID and the value is a list of marks.
    m2[1] = {"John", {30, 45, 50}};
    m2[2] = {"Jane", {40, 50, 60}};

    cout << "Map of student marks:" << endl;
    for (const auto& pair : m2) {
        cout << "Student ID " << pair.first << ": " << pair.second.first << " - ";
        for (const auto& mark : pair.second.second) {
            cout << mark << " ";
        }
        cout << endl;
    }
}


int main(int argc, char const *argv[]) {
    // This is a redundant main function, as the previous one already serves the purpose.
    // It can be removed or repurposed if needed.
    // pair_example();
    // vector_example();
    // iterator_example();
    // list_example();
    // stack_example();
    // queue_example();
    // priority_queue_example();
    // set_example();
    example_map();
    return 0;
}