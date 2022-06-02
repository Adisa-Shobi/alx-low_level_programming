#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void transfer_bytes(int, int, char *, char *);

int check_elf(unsigned char *e_ident);
int print_magic(unsigned char *e_ident);
int print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abiversion(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type);
void print_address(unsigned long int e_entry, unsigned char *e_ident);

#endif /* MAIN_H */
