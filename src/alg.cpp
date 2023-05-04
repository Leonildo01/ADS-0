// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    
 using namespace std;
int NOD (int a, int b)
{
    if (b == 0)
        return a;
    if (a > b)
        return NOD (b, a % b);
    else
        return NOD (a, b % a);
}
 
int main ()
{
    setlocale (0, "");
    int a, b;
    cout << "Enter number 2: " << endl;
    cin >> a >> b;
    cout << "The greatest common divisor is: " << NOD (b, a % b) << endl;
    cin.get();
    cin.get();
    return 0;
}
}
