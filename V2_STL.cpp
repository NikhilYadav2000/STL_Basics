// pair
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     pair<int, int> p1 = {1, 3};
//     cout << p1.first << " " << p1.second << endl;
//     pair<int, pair<int, int>> p2 = {1, {3, 4}};
//     cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
//     pair<int, int> arr[] = {{1, 3}, {2, 4}};
//     for (int i = 0; i < 2; i++)
//     {
//         cout << arr[i].first << " " << arr[i].second << " ";
//     }
//     return 0;
// }
/*
1 3
1 3 4
1 3 2 4
*/

// vector
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v; // empty container
//     v.push_back(1);
//     v.emplace_back(2);

//     vector<pair<int,int>> vec;
//     vec.push_back({13,10}); // use { }
//     vec.emplace_back(13,10); // no need

//     vector<int> v2(5,10); // {10,10,10,10,10}
//     vector<int> v3(5); //{0,0,0,0,0};

//     // {100,100}
//     v.insert(v.begin(),300); // {300,100,100}
//     vector<int> v4(v2);

//     // {1,2,3,4,5};
//     v.insert(v.begin()+1,2,10); // {1,10,10,2,3,4,5}

//     // v = {1,2,3,4,5}
//     vector<int> v5(2,10);//{10,10}
//     v5.insert(v.begin(),v5.begin(),v5.end()); // {10,10,1,2,3,4,5}

//     // v2[0]; v2.at(0); v.back() // last element
//     vector<int>::iterator it = v2.begin(); // .begin() points to the address f the element, so "it" gives the address so use *it
//     cout<<*it<<" ";
//     // it + 2 means "it" is pointing to 2 position forward
//     // it++ also means moving forward.

//     vector<int>::iterator it = v2.end(); // memory location after last element, do it-- to point at last element

//     for(vector<int>::iterator it = v.begin(); it!=v.end();it++){
//         cout<<*(it)<<" ";
//     }
//     // OR
//     for(auto it =v.begin();it!=v.end();it++){
//         cout<<*(it)<<" ";
//     }
//     // OR
//     for(auto it:v){
//         cout<<it<<" "; // "it" is the element now
//     }

//     // {10,11,12,13};
//     v.erase(v.begin()+1); // {10,12,13}

//     // {10,11,12,13,14};
//     v.erase(v.begin()+2,v.end()+4) ; // {10,11,14} {start,end-1}

//     v.size(); // {1,2,3} = 3
//     v.pop_back(); // {1,2}

//     // v1 = {1,2,3};
//     // v2 = {4,5,6};
//     // v2.swap(v1); // swaps

//     v.clear(); // {}
//     v.empty(); // true if empty
//     return 0;
// }

// list
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int> ls;
//     ls.push_back(2); // {2}
//     ls.emplace_back(4); // {4}
//     ls.push_front(6); // {6} as it maintains a doubly linked list, adding elements in a list is much faster and less costlier than vector.
//     ls.emplace_front(8); // {8}

//     // all functions like begin,end,clear,inset,size are same s in vector

//     return 0;
// }

// Dequeue
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int> dq;
//     dq.push_back(2); // {2}
//     dq.emplace_back(4); // {4}
//     dq.push_front(6); // {6} as it maintains a doubly linked list, adding elements in a list is much faster and less costlier than vector.
//     dq.emplace_front(8); // {8}
//     dq.pop_back();
//     dq.pop_front();
//     dq.back(); // Last element
//     dq.front();

//     // all functions like begin,end,clear,inset,size are same s in vector

// }

// Stack  - LIFO
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.emplace(3);

//     cout<<st.top(); // 3
//     // st[2] is invalid
//     st.pop(); // removes top
//     st.size();
//     st.empty();

//     stack<int> st1,st2;
//     st1.swap(st2);
//     return 0;
// } // O(1) all the operations

// Queue - FIFO
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      queue<int> q;
//      q.push(1);
//      q.emplace(2);
//      q.back()+=5; // 2+5=7
//      q.back(); // 7
//      q.front(); // 1
//      q.pop(); // 7
//      q.front(); // 7
//      return 0;
//  }

// Priority Queue -  Stoes the max element at the top
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     priority_queue<int> pq; // max heap
//     pq.push(1);
//     pq.emplace(3);
//     pq.push(2);
//     pq.top();  // 3
//     pq.pop(); // pops 3
//     pq.top(); // 2
//     priority_queue<int,vector<int>,greater<int>>pq1; //mean heap
//     pq1.push(1);
//     pq1.emplace(3);
//     pq1.push(2);
//     pq1.top();  // 1
//     pq1.pop(); // pops 1
//     pq1.top(); // 2

//     return 0;
// } // push and pop in O(logn) and top in O(1);

// Set - Sorted order and unique
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int> st;
//     st.insert(1);  // {1}
//     st.emplace(2); // {1,2}
//     st.insert(1);  // {1,2}

//     auto it = st.find(2); // returns address
//     auto it = st.find(4); // points to the end after the last element

//     st.erase(1); // {2} 
//     int cnt = st.count(2); // gives 1 if it is there and 0 if it is not

//     auto it = st.find(3);
//     st.erase(it);
    
//     // {1,2,3,4,5};
//     auto it1 = st.find(2);
//     auto it2 = st.find(4);
//     st.erase(it1,it2);
//     // {1,4,5}
//     auto it = st.lower_bound(2);
//     auto it = st.upper_bound(3);
//     return 0;
// } // O(logn);

// Multiset - Sorted 
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     multiset<int> st;
//     st.insert(1);  // {1}
//     st.emplace(2); // {1,2}
//     st.insert(1);  // {1,2,1}

//     auto it = st.find(2); // returns address
//     auto it = st.find(4); // points to the end after the last element

//     st.erase(1); // {2}  // erases all the occurences of 1
//     st.erase(st.find(1)); // erases first occurence of 1
//     int cnt = st.count(2); 

//     // {1,2,1,1,2};
//     st.erase(st.find(1),st.find(1)+3); // {2,1,2}
//     auto it = st.lower_bound(2);
//     auto it = st.upper_bound(3);
//     return 0;
// } 

// unorderd_set - unique not sorted
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     unordered_set<int> st;
//     // all functions same as set

//     return 0;
// } //O(1) no lower or upper bond
// worst O(n)

// map - stored in sorted order and has unique keys
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,int> mp;
//     mp[1]=2;
//     mp.insert({2,4});
//     mp.emplace(3,1);

//     map<int,pair<int,int>> mp1;
//     map<pair<int,int>,int> mp2;
//     mp2[{2,3}] = 10;

//     for(auto it : mp){
//         cout<<it.first<<" "<<it.second<<endl;
//     }
//     cout<<mp[1]; // 2
//     cout<<mp[5]; // NULL

//     // {3,1}
//     // auto it = mp.find(3);
//     // cout<<*(it).second;

//     // lowerbound and upperbound are same
//     return 0;
// } O(logn)

// multimap stores duplicate keys ({1,2},{1,3})
// unordered_map stores unique keys in unordered way O(1) and in worst case O(n);


// arrays
// sort(a,a+n); // ascending
// sort(a+2,a+4); 
// sort(a,a+n,greater<int>); //descending


// vector
// sort(v.begin(),v.end()); 

// Comparator
// if u want to sort in asc acc to  2nd element and descending acc to 1st

//pair<int,int> a[] = ({1,2},{2,1},{4,1});
// bool comp(pair<int,int> p1,pair<int,int>p2){
//  if(p1.second<p2.second) return true;
//  if(p1.second>p2.second) return false;
//  if they are same
//  if(p1.first>p2.first) return true;
//  return false;
// }
// sort(a,a+n,comp)

// int num=7;
// int cnt=_builtin_popcount(); // number of 1s = 111=3

// if the number is long long
// long long num= 1254565699;
// int cnt = _button_popcountll();

// string s ="123";
// do{
//     cout<<s<<endl;
// }while(next_permutations(s.begin(),s.end()));

// if it starts form 231 it will just give 23, 313, 321
// so sort it first, use sort(s.begin(),s.end());

// int maxi = *max_element(a,a+n);
// int maxi = *min_element(a,a+n);


/*
O(log)n for all
binary search
a[] = {1,,4,5,8,9}
bool res = binary_search(a,a+n,3); //false
bool res = binary_search(a,a+n,4); // true

Lowerbound - either the element or the next greater
a[] ={1,4,5,6,9,9};
int ind = lower_bound(a,a+n,4)-a; // gives index of 4
int ind = lower_bound(a,a+n,7)-a; // gives index of 9
int ind = lower_bound(a,a+n,10)-a; // gives index of end

int ind = lower_bound(a.begin(),a.end(),x)-a.begin();

Upperbound - next greater element
int ind = upper_bound(a,a+n,4)-a; // gives index of 5
int ind = lower_bound(a,a+n,7)-a; // gives index of 9
int ind = lower_bound(a,a+n,10)-a; // gives index of end

 

*/