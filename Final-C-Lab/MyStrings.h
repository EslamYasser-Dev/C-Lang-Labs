#ifndef MYSTRINGS_H_INCLUDED
#define MYSTRINGS_H_INCLUDED
#define STR_LENGTH 30
 extern unsigned int selector;
 extern struct Student{char name[STR_LENGTH];int id, grade;}Student;
void RevresStr(void);
void ConCat(void);
void swapp1(int* a, int* b);
void swapp2(int* a, int* b);
void stdAdd(Student stdx[]);
void stdShow(Student stdx[]);
#endif // MYSTRINGS_H_INCLUDED
