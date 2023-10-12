#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 4 == 1 || n % 4 == 2){
        cout << "NO" << endl;
    }
    else{
        int s = 0, a[n], petya[n], masha[n], cm = 0, cp = 0, p = 0, m = 0;
        for(int i = 0; i < n; i++){
            a[i] = i + 1;
            petya[i] = 0;
            masha[i] = 0;
            s += (i + 1);
        }
        while(p != s / 2){
            for(int i = n - 1; i >= 0; i--){
                if (p + a[i] <= s/2 && a[i] != 0){
                    int j = 0;
                    while(petya[j] != 0){
                        j++;
                    }
                    petya[j] = a[i];
                    cp += 1;
                    p += a[i];
                    a[i] = 0;
                }
            }
        }
        for(int i = 0; i < n; i++){
            if (a[i] != 0){
                int j = 0;
                while(masha[j] != 0){
                    j++;
                }
                masha[j] = a[i];
                cm += 1;
                m += a[i];
                a[i] = 0;
            }
        }
        cout << "YES" << "\n\n";
        cout << cp << endl;
        int pet[cp], mas[cm];
        for(int i = 0; i < cp; i++){
            pet[i] = 0;
        }
        for(int i = 0; i < cm; i++){
            mas[i] = 0;
        }
        for(int i = 0; i < n; i++){
            if (petya[i] != 0){
                int j = 0;
                while (pet[j] != 0){
                    j++;
                }
                pet[j] = petya[i];
            }
            if (masha[i] != 0){
                int j = 0;
                while (mas[j] != 0){
                    j++;
                }
                mas[j] = masha[i];
            }
        }
        for(int i = 0; i < cp; i++){
            if (i < cp - 1){
                cout << pet[i] << ", ";
            }
            else{
                cout << pet[i] << endl;
            }
        }
        cout << endl << cm << endl;
        for(int i = 0; i < cm; i++){
            if (i < cm - 1){
                cout << mas[i] << ", ";
            }
            else{
                cout << mas[i] << endl;
            }
        }
    }
    return 0;
}
