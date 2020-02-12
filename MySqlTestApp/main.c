/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 , MySQL연결 테스트
  --------------------------------------------------------------------------------
  first created - 2020.02.12
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <my_global.h>
#include <WinSock2.h>
#include <mysql.h>

#pragma comment(lib,"libmysql.lib")

#define MYSQLUSER "root"
#define MYSQLPASSWORD "mysql_p@ssw0rd"
#define MYSQLIP "localhost"

void loadmysql(char mysqlip[], MYSQL* cons);

int main(void) 
{
    //printf("MySQL info is %s\n", mysql_get_client_info());
    MYSQL* conn = mysql_init(NULL);
    MYSQL_RES* res;
    MYSQL_ROW row;
    int fields;

    loadmysql(MYSQLIP, conn);
    printf("\n");
    mysql_query(conn, "use shopdb;");
    mysql_query(conn, "SELECT *FROM membertbl;");
    res = mysql_store_result(conn);
    fields = mysql_num_fields(res);

    while (row = mysql_fetch_row(res))
    {
        for(int i =0; i <fields;i++)
        {
            printf("%s", row[i]);
            if (i < fields) printf("\t");
        }
        printf("\n");
    }
    //mysql_query(conn, "DELETE FROM membertbl WHERE meberID = 'Han';");
    mysql_free_result(res);
    mysql_close(conn);



	system("pause");
	return EXIT_SUCCESS;
}

void loadmysql(char mysqlip[], MYSQL* conn)
{
    if (conn == NULL)
    {
        fprintf(stderr, "%s\n", mysql_error(conn));
        Sleep(1000);
        exit(EXIT_FAILURE);
    }
    if (mysql_real_connect(conn, mysqlip, MYSQLUSER, MYSQLPASSWORD, NULL, 0, NULL, 0) != NULL)
    {
        fprintf(stdout,"접속성공\n");
        mysql_set_character_set(conn, "euckr");
    }
    else {
        fprintf(stderr, "연결 오류: %s\n", mysql_error(conn));
        getchar();
    
    }
}