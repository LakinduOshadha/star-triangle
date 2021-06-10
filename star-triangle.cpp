// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include <iostream>

using namespace std;
int main() {
    for(int i = 1, k = 0; i <= 5; ++i, k = 0) {
        for(int j = 1; j <= 5-i; ++j) {
            cout <<"  ";
        }
        for(k;k != 2*i-1;k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
