#include <iostream>
#include <iomanip>

using namespace std;

int maxLevel = 0; 

int C(int i, int j, int level = 1) {
  
    if (level > maxLevel)
        maxLevel = level;


    if (j == 0 || j == i)
        return 1;

    return C(i - 1, j - 1, level + 1) + C(i - 1, j, level + 1);
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    for (int i = 0; i < n; i++) {
    
        cout << setw((n - 1 - i) * 2) << "";

        for (int j = 0; j <= i; j++) {
            cout << setw(4) << C(i, j);
        }
        cout << endl;
    }
    cout << "Depth of recursion = " << maxLevel << endl;

    return 0;
}