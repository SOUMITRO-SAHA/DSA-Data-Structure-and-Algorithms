#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

// 1. Pairs
void explainPair()
{
    // Pair :
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // Nested Property of Pair :
    pair<int, pair<int, int>> pa = {1, {3, 4}};
    cout << pa.first << " " << pa.second.first << " " << pa.second.second << endl;

    // Pair Datatype of Array :
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl; // Output : 5
                                   // Explaination : This will output arr[1] which is {2,5} and .second means 5.
}

// 2. Vectors
void explainVector()
{
    // 1. Vector declearation :
    vector<int> v;
    v.push_back(1);    // Insert element in the last index.
    v.emplace_back(2); // Same as push_back() but, it faster.

    // Vector of type Pair<> :
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});  // Here, You need to use { }.
    vec.emplace_back(1, 2); // But, in here we do not need to uses {}.

    vector<int> v1(5, 100); //=> {100, 100, 100, 100, 100}

    vector<int> v2(5); // vector of size 5 decleared with any garbeg values.

    vector<int> v3(5, 20); //=> {20, 20, 20, 20, 20}
    vector<int> v4(v1);    // v4 is another container with the value of v1.

    /* 2. ########### [Iterator] ############ */

    vector<int>::iterator itr = v.begin(); // Declearation of Itr.

    itr++; // shifted the memory location by 1 place.
    cout << *(itr) << " ";

    itr += 2; // shifted by 2 place.
    cout << *(itr) << " ";

    vector<int>::iterator itr1 = v.end();
    vector<int>::iterator itr2 = v.rend();   // reversed end. 🤞
    vector<int>::iterator itr3 = v.rbegin(); // revered begin. 🤞

    // Traversing the Vector through Itr.
    for (std::vector<int>::iterator i = v1.begin(); i != v1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << "\n";

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // For-Each loop:
    for (auto it : v)
    {
        cout << *it << " ";
    }
    // Iterator end //

    // 3. Deletion :
    // {10 11, 12, 20}
    v.erase(v.begin() + 1); //=> {10, 12, 20}

    // {10, 11, 12, 20, 23, 25, 30, 35}
    v.erase(v.begin() + 2, v.begin() + 6); //=> {10, 11, 30, 35} {start, end};

    // 4. Insert Function
    vector<int> v(2, 100);           //{100, 100}
    v.insert(v.begin(), 300);        // (index, element);
    v.insert(v.begin() + 1, 2, 300); // (index, No. of Elements, element);

    vector<int> copy(2, 50); // Vector name is copy.
    v.insert(v.begin(), copy.begin(), copy.end());

    // Size of Vector:
    cout << v.size();

    v.pop_back(); // Delete the last element in the Vector.

    // v1 -> {10, 20}
    // v2 -> {20, 30}
    v1.swap(v2); // v1->{30, 40} & v2 -> {10, 20}
    // It will swap the v2 with v1.

    v.clear(); // erase the entire vector
    cout << v.empty();
}

void explainList()
{
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5);    //{5,2,4}
    ls.emplace_front(3); //{3,5,2,4}
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1,2}
    dq.push_front(4);    // {4,1,2}
    dq.emplace_front(3); // {3,4,1,2}

    dq.pop_back();  //{3,4,1}
    dq.pop_front(); //{4,1}

    dq.back();
    dq.front();
    /* ret of the functions are same */
}

void explainStack()
{
    sstack<int> st;    // LIFO
    st.push(1);        //{1}
    st.push(2);        //{1, 2}
    st.push(3);        //{1, 2, 3}
    st.push(4);        //{1, 2, 3, 4}
    st.emplace(4);     //{1, 2, 3, 4, 5}
    cout << sst.top(); // Print 5 "** st[2] is invalid **"
    st.pop();

    cout << st.top();  // 3
    cout << st.size(); // 4
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int> q; // FIFO
    q.push(1);    //{1}
    q.push(2);    //{1, 2}
    q.emplace(4); //{1, 2, 4}

    q.back() += 5;

    cout << q.back(); // prints 9

    // Q is {1, 2, 9}
    cout << q.front(); // prints 2

    // size swap empty same as stack
}

void explainPQ()
{
    // 1. Max-Heap
    priority_queue<int> pq;
    pq.push(5);     //{5}
    pq.push(2);     //{5, 2}
    pq.push(8);     //{8, 5, 2}
    pq.emplace(10); //{10, 8, 5, 2}

    cout << pq.top(); // 10
    pq.pop();         //{8, 5, 2}
    cout << pq.top(); // 8

    // size swap empty function same as others

    // 2. Min-Heap
    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);     //{5}
    pq1.push(2);     //{2, 5}
    pq1.push(8);     //{2, 5, 8}
    pq1.emplace(10); //{2, 5, 8, 10}

    cout << pq1.top(); // 2;
}

void explainSet()
{
    set<int> st;   //=> Sorted and Unique.
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}
    st.insert(4);  // {1, 2 , 4}
    st.insert(3);  // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only inceases efficiency
    e of above

        //{1,2,3,4,5}
        auto it = st.find(3);

    //{1,2,3,4,5}
    auto it = st.find(6);

    //{1, 4, 5}
    st.erase(5);

    int cnt = st.count(1);
}