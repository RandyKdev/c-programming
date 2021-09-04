void remove_filename(char *url) {
    url += 8;
    while(*url) {
        if(*url == '/') {
            *url = '\0';
            return;
        }
        url++;
    }
}