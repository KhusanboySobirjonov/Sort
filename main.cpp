#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Massiv elementlar sonini kiriting: ";
    cin >> n;
    int h[n];
    for (int i=0; i<n; i++) {
        cout << "h[" << i << "]=";
        cin >> h[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (h[i]<h[j]) {
                h[i]=h[i]+h[j];
                h[j]=h[i]-h[j];
                h[i]=h[i]-h[j];
            }
        }
    }
    cout << "Natija: ";
    for (int i=0; i<n; i++) {
        cout << h[i] << " ";
    }
    return 0;
}
