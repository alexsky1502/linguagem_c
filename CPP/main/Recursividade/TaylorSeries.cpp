#include <iostream>
#include <iomanip> // to set precision of an number
using namespace std;

double e(int x, int n) { //taylor serie without horners rule
    static double p = 1, f = 1;
    double r;

    if (n==0) {
        return 1;
    } else {
        r = e(x, n-1);
        p = p * x;
        f = f * n;

        return r + p/f;
    }
}

/*double e1(int x, int n) { //taylor series using horners rule iterative 
    double s = 1;
    for (double i = n; i > 0; i--) {
        s = 1 + (x/i) * s;
    }
    return s;
}*/

double e1(int x, int n) { //taylor series using horners rule iterative another way
    double s = 1, num = 1, den = 1;
    for(int i = 1; i <=n ; i++) {
        num *= x;
        den *= i;
        s += num/den;
    }
    return s;
}

double e2(int x, int n) { //taylor series using horners rule recursive 
    static double a = 1;
    if (n == 0) {
        cout << a << endl;
        return a;
    } else {
        a = 1 + (x/n)*a;
        return e(x, n-1);
    }
}

int main() {
    int x, n;
    double result, result1, result2;
    cin >> x >> n;
    //result = e(x, n);
    //result1 = e1(x, n);
    result2 = e2(x, n);
    //cout << setprecision(7) << result << endl;
    //cout << setprecision(7) << result1 << endl;
    cout << setprecision(7) << result2;
}