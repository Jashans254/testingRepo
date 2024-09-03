#include <iostream>
#include <cmath>

using namespace std;

// Returns gcd of a and b
int gcd(int a, int h) {
    int temp;
    while (true) {
        temp = a % h;
        if (temp == 0)
            return h;
        a = h;
        h = temp;
    }
}

// Code to demonstrate RSA algorithm
int main() {
    // Two random prime numbers
    double p = 3;
    double q = 7;

    // First part of public key:
    double n = p * q;

    // Finding other part of public key.
    // e stands for encrypt
    double e = 2;
    double phi = (p - 1) * (q - 1);
    while (e < phi) {
        // e must be co-prime to phi and smaller than phi.
        if (gcd(static_cast<int>(e), static_cast<int>(phi)) == 1)
            break;
        else
            e++;
    }

    // Private key (d stands for decrypt)
    // choosing d such that it satisfies d*e = 1 + k * totient
    int k = 2; // A constant value
    double d = (1 + (k * phi)) / e;

    // Message to be encrypted
    double msg = 12;

    cout << "Message data = " << msg << endl;

    // Encryption c = (msg ^ e) % n
    double c = fmod(pow(msg, e), n);
    cout << "Encrypted data = " << c << endl;

    // Decryption m = (c ^ d) % n
    double m = fmod(pow(c, d), n);
    cout << "Original Message Sent = " << m << endl;

    return 0;
}