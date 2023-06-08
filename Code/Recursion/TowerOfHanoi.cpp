#include <iostream>
using namespace std;
int cnt = 0;
void towerOfHanoi(int n, string source, string helper, string destination);
int main()
{
    int n;
    n = 3;
    towerOfHanoi(n, "Source", "Helper", "Destination");
    cout << cnt << endl;
}
void towerOfHanoi(int n, string source, string helper, string destination)
{
    cnt++;
    if (n == 1)
    {
        cout << "disk " << n << " from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, helper);
    cout << "disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, helper, source, destination);
}