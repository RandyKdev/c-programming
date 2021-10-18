struct fraction {
    int numerator, denominator;
};

struct fraction reduce_fraction(struct fraction f) {
    int gcd = 1, i = 2;

    while(i <= f.denominator && i <= f.numerator) {
        if(f.denominator % i == 0 && f.numerator % i == 0) {
            gcd = i;
        }
        i++;
    }

    return (struct fraction) {.denominator = f.denominator / gcd, .numerator = f.numerator / gcd};
}