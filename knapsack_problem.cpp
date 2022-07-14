#include <iostream>
using namespace std;
int knapsack(int value[], int wt[], int w, int n)
{
    if (n == 0 || w == 0)
        return 0;
    if (wt[n - 1] > w)
        return knapsack(value, wt, w, n - 1);
    return max(knapsack(value, wt, w - wt[n - 1], n - 1) + value[n - 1], knapsack(value, wt, w, n - 1));
}
int main()
{
    cout << "Enter the number of items: ";
    int n;
    cin >> n;
    cout << "Enter the weight of each item respectively: ";
    int wt[n];
    for (int i = 0; i < n; i++)
        cin >> wt[i];
    cout << "Enter the value of each item respectively: ";
    int value[n];
    for (int i = 0; i < n; i++)
        cin >> value[i];
    int w;
    cout << "Enter the limiting weight of knapsack: ";
    cin >> w;
    cout << "The maximum amount under  limiting weight is " << knapsack(value, wt, w, n);
    return 0;
}