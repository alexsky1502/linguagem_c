#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q, q2;
    //EMPTY
    cout << q.empty() << endl;

    //PUSH
    q.push(10);
    q.push(20);
    q.push(30);

    q2.push(40);
    q2.push(50);
    q2.push(60);

    //FRONT & BACK
    cout << q.front() << endl;
    cout << q.back() << endl;

    //SIZE
    cout << q.size() << endl;
    //EMPTY
    cout << q.empty() << endl;

    //SWAP
    q.swap(q2);

    cout << q.front() << endl;
    cout << q.back() << endl;
    //POP
    q.pop();
    q.pop();

    cout << q.front() << endl;
    cout << q.back() << endl;
}