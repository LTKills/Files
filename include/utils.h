/*================================Utils================================*/
// Author: Cruz

// This file holds important structs, defines and enums
// as well as useful functions that we didn't  know where to put

/*=====================================================================*/

#ifndef _UTILS_H_
#define _UTILS_H_

#include <stdbool.h>

#define FIELD_DELIM ';'
#define FIXED_SIZE 20
#define LINE_END '\n'
#define INVALID -1

/*Main function arguments*/
enum ARGS {
    PROGNAME,
    INPUTFILE,
    NARGS
};


/*Main menu options*/
enum MAIN_OPTIONS {
    ZERO,
    INSERTION,
    REMOTION,
    INDEX_STATISTICS,
    REMOVED_STATISTICS,
    EXIT,
    NOPTIONS
};


enum LIST_TYPES {
	BEST,
	WORST,
	FIRST
};


enum FIELD_TYPE {
    FIXED_FIELD,
    VARIABLE_FIELD
};

/*Stop conditions*/
enum STATS {
    STOP,
    GO,
};


// TODO: Mudar para inglês sá porra! ***
/*File Structure*/
typedef struct {
    unsigned int ticket;
    /*These have FIXED_SIZE == 20*/
    char *documento, *dataHoraCadastro, *dataHoraAtualiza;

    /*These have variable size*/
    char *dominio, *nome, *cidade, *uf;
} t_record;


typedef struct {
	FILE *outputBest, *indexBest, *outputWorst, *indexWorst, *outputFirst, *indexFirst;
} t_files;



typedef struct {
	int head;
	int removed;
    int fragmentation;
} t_list;


/*========== FUNCTIONS ==========*/
t_list defragment(t_list list, t_files *files, int op);

void write_output_record(FILE *output, t_record *record);

void free_record(t_record *record);


void print_record(t_record *record);


void swap(int **vec, int a, int b);


void read_input_record(FILE *input, t_record *record);


char *read_line(FILE *stream, char delim, char lineEnd, int fieldType);


void read_input(FILE *input, FILE *output, FILE *index);

t_list *create_index_lists();

t_files *initialize(FILE *input);

int get_file_size(FILE *file);

int next_element(FILE *fp, int byteOffset, int *nextSize);

int get_register_size(FILE *fp, int byteOffset);

void close_files(FILE *input, t_files *files);

#endif
