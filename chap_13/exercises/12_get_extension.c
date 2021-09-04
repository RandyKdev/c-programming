void get_extension(const char *file_name, char *extension) {
    const char *p = file_name + strlen(file_name);
    
    for(p = p - 1; p >= file_name; p--) {
        if(*p == '.') {
            strcpy(extension, p + 1);
            return;
        }
    }

    *extension = "";
}