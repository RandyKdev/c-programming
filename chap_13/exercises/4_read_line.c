int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) && i < n) {
        if(ch == '\n') {
            str[i++] = ch;
            break;
        }
        if(i > 0 && isspace(ch)) {
            break;
        }
        if(!(i == 0 && ch == ' ')) str[i++] = ch;

    }
    str[i] = '\0';
    return i;
}