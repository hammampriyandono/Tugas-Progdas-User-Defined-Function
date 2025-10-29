#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

// Fungsi menghitung jarak antara dua titik
double Jarak(double x1, double y1, double x2, double y2) {
    double jar = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return jar;
}

// Fungsi menghitung jari-jari dari dua titik
double Radius(double x1, double y1, double x2, double y2) {
    double rad = Jarak(x1, y1, x2, y2) / 2;
    return rad;
}

// Fungsi menghitung keliling lingkaran
double Keliling(double r) {
    double kel = 2 * PI * r;
    return kel;
}

// Fungsi menghitung luas lingkaran
double Luas(double r) {
    double l = PI * pow(r, 2);
    return l;
}

int main() {
    double x1, y1, x2, y2;
    double jar, rad, kel, l;

    cout << "=== Menghitung Jarak dan Lingkaran ===" << endl;
    cout << "Masukkan koordinat titik pertama (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik kedua (x2 y2): ";
    cin >> x2 >> y2;

// Panggil fungsi pakai actual parameter
    jar = Jarak(x1, y1, x2, y2);
    rad = Radius(x1, y1, x2, y2);
    kel = Keliling(rad);
    l = Luas(rad);

    cout << "\nJarak antar titik       : " << jar << endl;
    cout << "Jari-jari lingkaran     : " << rad << endl;
    cout << "Keliling lingkaran      : " << kel << endl;
    cout << "Luas lingkaran          : " << l << endl;

    return 0;
}
