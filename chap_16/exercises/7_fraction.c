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

struct fraction add_fraction(struct fraction f1, struct fraction f2) {
    f1 = reduce_fraction(f1);
    f2 = reduce_fraction(f2);

    int n1 = f1.numerator * f2.denominator;
    int n2 = f2.numerator * f1.denominator;

    struct fraction add;
    add.denominator = f1.denominator * f2.denominator;
    add.numerator = n1 + n2;
    add = reduce_fraction(add);
    return add;
}

struct fraction subtract_fraction(struct fraction f1, struct fraction f2) {
    f1 = reduce_fraction(f1);
    f2 = reduce_fraction(f2);

    int n1 = f1.numerator * f2.denominator;
    int n2 = f2.numerator * f1.denominator;
    
    struct fraction sub;
    sub.denominator = f1.denominator * f2.denominator;
    sub.numerator = n1 - n2;
    sub = reduce_fraction(sub);
    return sub;
}

struct fraction multiply_fraction(struct fraction f1, struct fraction f2) {
    f1 = reduce_fraction(f1);
    f2 = reduce_fraction(f2);
    
    struct fraction mult;
    mult.denominator = f2.denominator * f1.denominator;
    mult.numerator = f1.numerator * f2.numerator;
    mult = reduce_fraction(mult);
    return mult;
}