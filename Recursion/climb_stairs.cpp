#include <iostream>
using namespace std;


int climb_stairs(int nStairs){
    if(nStairs < 0) return 0;
    if(nStairs == 0) return 1;

    int ans = climb_stairs(nStairs-1) + climb_stairs(nStairs-2);

    return ans;
}
int main() {
    int nStairs;
    cout << "Enter number of stairs: ";
    cin >> nStairs;
    int ans = climb_stairs(nStairs);
    cout << "Number of ways to climb: " << ans << endl;
    return 0;
}