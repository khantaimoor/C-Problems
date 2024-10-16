#include<iostream>
#include<queue>
using namespace std;
int main()
{
//     //how to create queue
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //delete
    q.pop();
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;

}