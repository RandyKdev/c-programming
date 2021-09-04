void build_index_url(const char *domain, char *index_url) {
    strcat(strcat(strcpy(index_url, "http://www."), domain), "/index.html");
}