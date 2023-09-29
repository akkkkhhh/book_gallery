#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Content-Type: text/html\n\n");
    printf("<!DOCTYPE html>\n");
    printf("<html>\n");
    printf("<head>\n");
    printf("    <title>CGI Example</title>\n");
    printf("</head>\n");
    printf("<body>\n");
    printf("    <h1>CGI Example</h1>\n");

    char *query = getenv("QUERY_STRING");

    if (query != NULL) {
        printf("    <p>Query String: %s</p>\n", query);
    } else {
        printf("    <p>No query string provided.</p>\n");
    }

    printf("</body>\n");
    printf("</html>\n");

    return 0;
}
