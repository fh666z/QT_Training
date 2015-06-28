#ifndef INCOME_H
#define INCOME_H

using namespace std;

class IncomeType
{
private:
    eIncomeType m_incomeType;

public:
    static enum
    {
        INCOME_Salary,
        INCOME_Scolarship,
        INCOME_Other,
        INCOME_Count
    }eIncomeType;

    IncomeType(eIncomeType type);
    ~IncomeType();

    void setIncomeType(eIncomeType type)    {m_incomeType = type;}
    eIncomeType getIncomeType(void)         {return m_incomeType;}
};



class Income
{
private:
    unsigned int m_value;
    IncomeType   m_type;
    string       m_comment;

public:
    Income();
    ~Income();
};


#endif // INCOME_H
