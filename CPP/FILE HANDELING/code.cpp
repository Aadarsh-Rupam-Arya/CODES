#include <iostream>
#include <cstring>
using namespace std;
class Test
{
    char paper[20];
    int marks;

public:
    Test()
    {
        strcpy(paper, "Computer");
        marks = 0;
    }
    Test(char p[])
    {
        strcpy(paper, p);
        marks = 0;
    }
    Test(int m)
    {
        strcpy(paper, "Computer");
        marks = m;
    }
    Test(char p[], int m)
    {
        strcpy(paper, p);
        marks = m;
    }
    int getMarks(char p[])
    {
        if (strcmp(paper, p) == 0)
        {
            return marks;
        }
        return 0;
    }
};
class Course
{
private:
    Test assessments[6];

public:
    Course(){};
    Course(Test t[6])
    {
        for (int i = 0; i < 6; i++)
        {
            assessments[i] = t[i];
        }
    }
    int getAssessmentSumForPaper(char p[])
    {
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum += assessments[i].getMarks(p);
        }
        return sum;
    }
};
int main()
{

    char maths[] = "Maths";
    char science[] = "Science";
    char computer[] = "Computer";
    char subject[100];
    int marks;
    Test test[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> subject;
        cin >> marks;
        if (marks == 0 || strcmp(subject, "None") == 0)
        {
            if (marks == 0)
            {
                Test t(subject);
                test[i] = t;
            }
            else
            {
                Test t(marks);
                test[i] = t;
            }
        }
        else
        {
            Test t(subject, marks);
            test[i] = t;
        }
    }
    Course c(test);
    cout << "Maths: " << c.getAssessmentSumForPaper(maths) << endl;
    cout << "Science: " << c.getAssessmentSumForPaper(science) << endl;
    cout << "Computer: " << c.getAssessmentSumForPaper(computer) << endl;
    return 0;
}