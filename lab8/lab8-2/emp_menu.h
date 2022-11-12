typedef struct emp{
    int id;
    int age;
    char name[10];
}emp;
#ifndef emp_menu
#define emp_menu
void emplyee(emp * ptr [],int size);
void diplay (emp *ptr[],int size);
void menu (int line);
#endif
