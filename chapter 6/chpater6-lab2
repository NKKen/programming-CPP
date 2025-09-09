#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Job { int start, finish; };
bool compare(Job a, Job b) { return a.finish < b.finish; }
int main() {
int n; cin >> n;
vector<Job> jobs(n);
for (int i=0;i<n;i++) cin >> jobs[i].start >> jobs[i].finish;
sort(jobs.begin(), jobs.end(), compare);
int count=1, lastFinish=jobs[0].finish;
cout<<jobs[0].start<<" "<<jobs[0].finish<<endl;
for(int i=1;i<n;i++){
if(jobs[i].start>=lastFinish){
cout<<jobs[i].start<<" "<<jobs[i].finish<<endl;
lastFinish=jobs[i].finish; count++;
}
}
cout<<"Max jobs="<<count<<endl;
}