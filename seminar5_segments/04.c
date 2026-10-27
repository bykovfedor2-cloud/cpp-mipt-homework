#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char* copy_string(const char* s)
{
    char* r = (char*)malloc(strlen(s) + 1);
    strcpy(r, s);
    return r;
}

// 1
char** get_test_strings()
{
    char** p = (char**)malloc(4 * sizeof(char*));
    p[0] = copy_string("Cat");
    p[1] = copy_string("Mouse");
    p[2] = copy_string("Elephant");
    p[3] = NULL;
    return p;
}

// 2
void print_strings(const char** string_array)
{
    for (size_t i = 0; string_array[i] != NULL; ++i)
        printf("%s\n", string_array[i]);
}

// 3
size_t* get_sizes(const char** string_array)
{
    size_t n = 0;
    while (string_array[n] != NULL)
        ++n;
    size_t* sizes = (size_t*)malloc(n * sizeof(size_t));
    for (size_t i = 0; i < n; ++i)
        sizes[i] = strlen(string_array[i]);
    return sizes;
}

// 4
char** load_lines(const char* filename)
{
    FILE* f = fopen(filename, "r");
    if (f == NULL)
        return NULL;

    int c;
    size_t n = 1;
    while ((c = fgetc(f)) != EOF)
        if (c == '\n')
            ++n;

    char** lines = (char**)malloc((n + 1) * sizeof(char*));
    size_t* len = (size_t*)calloc(n, sizeof(size_t));

    fseek(f, 0, SEEK_SET);
    size_t i = 0;
    while ((c = fgetc(f)) != EOF)
    {
        if (c == '\n') ++i;
        else ++len[i];
    }

    for (i = 0; i < n; ++i)
        lines[i] = (char*)malloc(len[i] + 1);
    lines[n] = NULL;

    fseek(f, 0, SEEK_SET);
    i = 0;
    size_t j = 0;
    while ((c = fgetc(f)) != EOF)
    {
        if (c == '\n')
        {
            lines[i][j] = '\0';
            ++i;
            j = 0;
        }
        else
            lines[i][j++] = (char)c;
    }
    lines[i][j] = '\0';

    free(len);
    fclose(f);
    return lines;
}

// 5
void destroy_strings(char*** p_string_array)
{
    char** a = *p_string_array;
    for (size_t i = 0; a[i] != NULL; ++i)
        free(a[i]);
    free(a);
    *p_string_array = NULL;
}

// 6
static int cmp_str(const void* a, const void* b)
{
    return strcmp(*(char* const*)a, *(char* const*)b);
}

void sort_strings(char** words)
{
    size_t n = 0;
    while (words[n] != NULL)
        ++n;
    qsort(words, n, sizeof(char*), cmp_str);
}

// 7
int main(int argc, char** argv)
{
    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s input.txt output.txt\n", argv[0]);
        return 1;
    }

    char** lines = load_lines(argv[1]);
    if (lines == NULL)
    {
        fprintf(stderr, "Cannot open %s\n", argv[1]);
        return 1;
    }

    sort_strings(lines);

    FILE* out = fopen(argv[2], "w");
    if (out == NULL)
    {
        destroy_strings(&lines);
        return 1;
    }
    for (size_t i = 0; lines[i] != NULL; ++i)
        fprintf(out, "%s\n", lines[i]);

    fclose(out);
    destroy_strings(&lines);
    return 0;
}
