#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <stdbool.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

t_list *mx_create_node(void *data);
void mx_pop_back(t_list **head);
void mx_pop_front(t_list **head);
void mx_push_back(t_list **list, void *data);
void mx_push_front(t_list **list, void* data);

void mx_printchar(char ch);
void mx_printstr(const char *s);
void mx_print_strarr(char **arr, const char *delim);
void mx_printint(int num);
void mx_str_reverse(char *s);
void mx_swap_char(char *s1, char *s2);
char *mx_nbr_to_hex(unsigned long nbr);
int mx_quicksort(int *arr, int left, int right);
char *mx_itoa(int number);

double mx_pow(double a, unsigned int pow);
int mx_sqrt(int x);
int mx_bubble_sort(int *arr, int n);
unsigned long mx_hex_to_nbr(const char *hex);
void mx_foreach(const int *arr, int size, void(*f)(int));
int mx_binary_search(char **arr, int size, const char *s, int *count);

void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *str);
char *mx_strcpy(char *dst, const char *src);
int mx_strcmp(const char *s1, const char *s2);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strcat(char *s1, const char *s2);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
void mx_strdel(char **str);
void mx_del_strarr(char ***arr);
char *mx_file_to_str(const char *filename);
char *mx_strstr(const char *s1, const char *s2);
char *mx_strncpy(char *dst, const char *src, int len);
void mx_str_reverse(char *s);
int mx_count_words(const char *str, char delimiter);
char *mx_strchr(const char *s, int c);
int mx_count_substr(const char *str, const char *sub);
int mx_get_char_index(const char *str, char c);
int mx_get_substr_index(const char *str, const char *sub);
bool mx_isspace(char c);
char *mx_strtrim(const char *str);

void *mx_memset(void *b, int c, size_t len);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
int mx_memcmp(const void *s1, const void *s2, size_t n);

#endif
