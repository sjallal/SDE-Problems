#include <bits/stdc++.h>
using namespace std;
//int t[102][1002];
int max(int a ,int b)
{
    return a > b ? a:b;
}
int Knapsack(int weight[] , int val[] , int W , int n)
{
    if(n ==0 || W ==0)
    return 0;
    //if(t[n][W]!= -1) return t[n][W];
    if(weight[n-1] <= W)
    return  max((val[n-1] + Knapsack(weight , val , W-weight[n-1] , n-1)) , (Knapsack(weight , val , W , n-1)));
    
    else if(weight[n-1] > W)
    return Knapsack(weight , val , W , n-1);
}
int main() {

	//memset(t , -1 , sizeof(t));
    int val[] =  {60 , 100 , 120};
    int weight[] = {10 , 20 , 30};
    int W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    
    cout << Knapsack(weight , val ,W , n );
	return 0;
}

