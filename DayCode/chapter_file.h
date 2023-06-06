#include <stdio.h>
#include <stdlib.h>
#define COURSE_MAXNUM 5
//声明结构STUDENT
struct student
{
    long studentID;
    char studentName[20];
    char sex[4];
    struct {
        int year;
        int month;
        int day;
    }birthday;
    float score[COURSE_MAXNUM];
    float total;
    float average;
    int rank;
};
typedef struct student STUDENT;

//从文件fileName表示的文本文件中读取学生基本信息，
//包括学号、姓名、性别、出生日期，若干门课程的成绩
//文件的第一行存储的信息包含了n和m，即学生的人数和课程门数


void ReadStudInfo(const char* fileName, STUDENT stud[])
{
    /***********Begin*****************/
    FILE* fp = fopen(fileName, "rb");
    // if cannot open file
    if (fp == NULL) { perror("open failed error!"); exit(-1); }
    // if open successfully
    else {
        //read total count and course count
        int n, m; 
        fread(&n, sizeof(n), 1, fp);
        fread(&m, sizeof(m), 1, fp);
        fread(stud, sizeof(stud[0]), n, fp);
    }
    fclose(fp);
    /***********End*******************/
}

//向文件fileName表示的文本文件中写入学生基本信息，
//包括学号、姓名、性别、出生日期，若干门课程的成绩、总分、平均分、名次
//文件的第一行存储的信息应该包括n和m，即学生的人数和课程门数



void SaveResult(const char* fileName, STUDENT stud[], int n, int m)
{
    /***********Begin*****************/
    FILE* fp = fopen(fileName, "wb");
    fwrite(&n, sizeof(int), 1, fp);
    fwrite(&m, sizeof(int), 1, fp);
    fwrite(stud, sizeof(stud[0]), n, fp);
    fclose(fp);
    /***********End*******************/
}

