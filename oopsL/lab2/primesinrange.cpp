#include <iostream>
using namespace std;

// Helper function: checks if a single number is prime
bool isPrime(int n);

// Main function: prints all primes between low and high (inclusive)
void printPrimesInRange(int low, int high);

int main(){
    int low, high;
    cout << "Enter lower and upper bound: ";
    cin >> low >> high;

    printPrimesInRange(low, high);

    return 0;
}

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

// Step 3 — why i * i <= n instead of i <= n?

// This is the clever/efficient part. You don't need to check all the way up to n — only up to √n.

// Why? If n has a divisor larger than √n, it must also have a matching divisor smaller than √n. Example: n = 36, √36 = 6.

// Divisor pairs: 1×36, 2×18, 3×12, 4×9, 6×6
// Notice: every pair has one number ≤ 6 and one ≥ 6.

// So if no divisor exists below √n, none can exist above it either — checking further is pointless. This makes the function much faster for large numbers (checking up to √n instead of n).

// Walkthrough example: is 29 prime?

// √29 ≈ 5.4, so we check i = 2, 3, 4, 5
// 29 % 2 = 1 → no
// 29 % 3 = 2 → no
// 29 % 4 = 1 → no
// 29 % 5 = 4 → no
// Loop ends → 29 is prime ✅

// Walkthrough example: is 21 prime?

// Check i = 2, 3, 4 (since 4×4=16 ≤ 21, but 5×5=25 > 21)
// 21 % 2 = 1 → no
// 21 % 3 = 0 → yes! → return false immediately

// 21 is not prime (3 × 7 = 21)

// Want me to show this with a small diagram/visual, or walk through how it's used inside the range-printing function too?


void printPrimesInRange(int low, int high){
    cout << "Prime numbers between " << low << " and " << high << ": ";
    for (int i = low; i <= high; i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}