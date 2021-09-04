char *duplicate(const char *p) {
    char *q = (char *)malloc((strlen(p) + 1) * sizeof(char));
    // +1 for the nul character
    strcpy(q, p);
    return q;
}