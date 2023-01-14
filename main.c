#include <stdio.h>
#include <math.h>
#include <string.h>

char select[3];

void red()
{
    printf("\033[0;31m]");
}

void green()
{
    printf("\033[0;32m");
}

void reset()
{
    printf("\033[0m");
}

struct List
{
    char name[1001];
    int priority;
    int time;
};

void bubbleSort()
{
}

void toDoList()
{
    red();
    printf("%45s\n\n\n", "My To do List");
    reset();
    printf("%10s %70s\n", "Activity", "Priority");
}

void selectMenu()
{
    toDoList();
    green();
    printf("ADD: untuk menambahkan Activity\t\t DEL: untuk menghapus Activity\n");
    reset();
    printf("%5s", "Select: ");
    scanf("%s", select);
}

// Add list
void addList()
{
    FILE *fp;
    fp = fopen("list.txt", "a");
    printf("Input List : ");
    fprintf("")
}

// Delete List
void deleteList()
{
    FILE *fp, *fp2;
    fp = fopen("list.txt", "r");
    fp2 = fopen("data/temp___.txt", "w");
    struct List list;
    char temp[1001];
    printf("Input List to be deleted : ");
    scanf("%[^\n]", &temp);

    while (fread(&list, sizeof(list), 1, fp))
    {
        if (strcmp(temp, list.name) == 0)
        {
            fwrite(&list, sizeof(list), 1, fp2);
        }
    }

    fclose(fp);
    fclose(fp2);

    remove("data/list.txt");
    rename("data/temp___.txt", "list.txt");

    printf("press enter to continue");
    getchar();
}
// Edit List
void editList()
{
    FILE *fp;
    fp = fopen("list.txt", "w");
}
void searchList()
{
}

int main()
{
    // menu
}