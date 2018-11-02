#include<iostream>

using namespace std;

int main(){
int A, B, C, D;

cout << "Masukan bilangan 1: ";
cin >> A;

cout << "Masukan bilangan 2: ";
cin >> B;

cout << "Masukan bilangan 3: ";
cin >> C;

cout << "Masukan bilangan 4: ";
cin >> D;

if (A>B) {

        if (A>C) {

                if (A>D) {

        cout << "Bilangan terbesar adalah: " << A << endl;

                } else {
                    cout << "Bilangan Terbesar adalah: " << D << endl;

                }

        } else {
            if (C>D) {
                    cout <<"Bilangan terbesar adalah: " << C << endl;

                } else {
                    cout << "Bilangan terbesar adalah: " << D << endl;

                }

        }

} else {
      if (B>C) {

                if (B>D) {
                    cout << "Bilangan terbesar adalah: " << B << endl;

                } else {
                    cout<<"Bilangan terbesar adalah: " << D << endl;

                }

        } else {
            if (C>D) {
                    cout <<"Bilangan terbesar adalah: " << C << endl;

                } else {
                    cout<< "Bilangan terbesar adalah: " << D << endl;

                }

        }
}
}
