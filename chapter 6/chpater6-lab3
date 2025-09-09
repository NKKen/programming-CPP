#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Task { int duration, deadline; };
bool compare(Task a, Task b){ return a.duration<b.duration; }
int main(){
int n; cin>>n; vector<Task> tasks(n);
for(int i=0;i<n;i++) cin>>tasks[i].duration>>tasks[i].deadline;
sort(tasks.begin(),tasks.end(),compare);
int time=0,total=0;
for(int i=0;i<n;i++){
time+=tasks[i].duration;
int late=max(0,time-tasks[i].deadline);
total+=late;
cout<<"Task "<<i+1<<" Finish:"<<time<<" Lateness:"<<late<<endl;
}
cout<<"Total lateness="<<total<<endl;
}