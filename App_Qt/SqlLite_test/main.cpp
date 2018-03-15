#include "iostream"
#include "dbmanager.h"
#include "filedownloader.h"

using namespace std;

int main(int argc, char *argv[])
{
    DbManager test("/Users/tanguy/Desktop/Projet_IMERIR/table_numerique/Table-Tactile/table_numerique/db.sqlite3");
    QVector<QString> a = test.query_theme("perpignan");

    return 0;
}
