#ifndef DATABASEACCESS_H
#define DATABASEACCESS_H

#include <fstream>
#include <string>

using namespace std;

class DatabaseAccess
{    
public:
    DatabaseAccess();
    ~DatabaseAccess();

    virtual void loadDatabase();
    virtual void storeToDatabase();
};


class FileDataBase : public DatabaseAccess
{
private:
    FILE    m_file;
    string  m_filePath;

public:
    FileDataBase();
    ~FileDataBase();

    virtual void loadDatabase();
    virtual void storeToDatabase();
    void setDatabasePath(string &filePath);

};


class Database
{
private:
    DatabaseAccess *m_manipulator;

public:
    Database();
    ~Database();
};


#endif // DATABASEACCESS_H
