#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
using namespace std;

int main(){
    //array
    array<int,4> a={1,2,3,4};


    //vector(dynamic array)
    vector<int> a;

    //deque
    deque<int> d;
    d.push_back(4);
    d.push_front(2);

    //list
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    //stack
    stack<string> s;

    //queue
    queue<string> q;
    
    
    return 0;
}