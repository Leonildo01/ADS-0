// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    cout << "Enter value for a and b: " << endl;
    cin >> a >> b;


    while (a != b) {
        if (a>b) {
            a = a-b;
        }
        else {
            b = b-a;
        }
    }
    cout << a;
}
