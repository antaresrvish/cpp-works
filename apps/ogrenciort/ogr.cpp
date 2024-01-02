#include <iostream>
#include <vector>
#include <string>

using namespace std;;

int main()
{
    int stu_sessions = 0;
    int stu_session_times = 0;

    cout << "student session nums : ";
    cin >> stu_sessions;
    cout << "student session times : ";
    cin >> stu_session_times;
    cout << stu_session_times + stu_sessions << endl; //test

    std::vector<std::string> classes{};
    for (int i = 0; i < stu_sessions; i++)
    {
        string TmpVal;
        cout << "Enter that shi:";
        cin >> TmpVal;
        classes.push_back(TmpVal);
        cout << classes[i] << "\n";
    }
}
