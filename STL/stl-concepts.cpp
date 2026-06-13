#include<bits>/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> p ={1,5};
    cout << p.first << " " << p.second;
    pair<int, int> p2 = make_pair(10, 20);
    cout << p2.first << " " << p2.second;

    pair<int, int> arr[] = {{1, 2},{3, 4},{5, 6}};
    cout << arr[1].second;
}


void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace-back(2);

    vector<pair<int ,int>> vec;
    v.push-back({1,5});

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) <<" ";

    it = it +2;
    cout<< *(it) <<" ";
    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it ++){
        cout << *(it) << " ";
    }

    for (auto it: v){
        cout << it << " ";
    }

    //deletions
    v.erase(v.begin()+1);
    v.erase(v.begin()+2, v.begin()+4);

    //insert 
    vector<int> v(2,100);          // 100,100
    v.insert(v.begin(), 300);      // 300,100,100
    v.insert(v.begin()+1, 2, 10);  // 300,10,10,100,100

    cout << v.size();
    v.pop_back();
    v1.swap(v2);
    v.empty();
}


void explainList(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(4);
    ls.emplace_front(5);

    list<int>::iterator it = ls.begin();
    it++;
    cout << *(it) <<" ";

    it = it +2;
    cout<< *(it) <<" ";
    list<int>::iterator it = ls.end();
    list<int>::iterator it = ls.rend();
    list<int>::iterator it = ls.rbegin();

    for (list<int>::iterator it = ls.begin(); it != ls.end(); it++){
        cout << *(it) << " ";
    }

    for (auto it = ls.begin(); it != ls.end(); it ++){
        cout << *(it) << " ";
    }

    for (auto it: ls){
        cout << it << " ";
    }

    //deletions
    ls.erase(ls.begin());
    auto it1 = ls.begin();
    advance(it1, 2);
    ls.erase(ls.begin(), it1);

}


void explainDeque(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(5);

    deque<int>::iterator it = dq.begin();
    it++;
    cout << *(it) <<" ";

    it = it +2;
    cout<< *(it) <<" ";
}


void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    //everything else is same as vector
    stack<int> st1, st2;
    st1.swap(st2);
}


void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);

    q.back() += 5 
    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    //everything else is same as stack
}


void explainPriority_queue(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    //Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout << pq.top() << endl;
}

void explainSet(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.emplace(4);

    for (auto it: s){
        cout << it << " ";
    }

    auto it = s.find(3);
    if (it != s.end()){
        cout << "Found " << *it << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    //if element is not present then it will return s.end()
    //deletion
    s.erase(3);
    int cnt = s.count(1);
    auto it = s.find(2);
    s.erase(it);

    auto it1 = s.lower_bound(2);
    auto it2 = s.upper_bound(3);
}

void explainMultiSet(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // it will erase all the occurences of 1
    ms.erase(ms.find(1)); // it will erase only one occurence of 1
    int cnt = ms.count(1);

    ms.erase(ms.find(1), ms.find(1)+2); // it will erase 2 occurences of 1
}


void explainUSet(){
    unordered_set<int> s;
}



void explainMap(){ //unique keys in sorted order
    map <int, int >mpp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mpp;
    mpp[1] = 2;
    mpp.emplace({3, 4});
    mpp.insert({5, 6});
    mpp.[{2, 3}] = 10; // it will create a new key {2, 3} and assign it the value 10
}


void explainMultiMap(){ //multiple keys allowed in sorted order
    multimap <int, int >mpp;
    mpp.insert({1, 2});
    mpp.insert({1, 3});
    mpp.insert({1, 4});

    for (auto it: mpp){
        cout << it.first << " " << it.second << endl;
    }

    auto it = mpp.find(1);
    mpp.erase(it); // it will erase only one occurence of key 1
    mpp.erase(1); // it will erase all the occurences of key 1
}

void explainUnorderedMap(){
    unordered_map <int, int >mpp;
}


bool comp(pair<int, int>p1, pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false;
}

void  explainExtra(){
    sort(a, a+n); // O(nlogn)
    sort(v.begin(), v.end()); // O(nlogn)
    sort(v.begin(), v.end(), greater<int>()); // O(nlogn) in descending order
    sort (a+2, a+5); // it will sort the elements from index 2 to index 4

    pair<int, int>a[] = {{1,2}, {3,4}, {5,6}};
    sort(a, a+n, comp); // it will sort the array of pairs according to the comp function

    string s ="123";
    do{
        cout<< s << endl;
    }while(next_permutation(s.begin(), s.end())); // it will generate all the permutations of the string in sorted order

    int maxi = *max_element(a, a+n); // it will return the maximum element in the array
}

int main(){
    
    return 0;
}