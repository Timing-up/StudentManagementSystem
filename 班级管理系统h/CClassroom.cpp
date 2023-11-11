#include "CClassroom.h"
#include "CTeacher.h"
#include <numeric>
#include <iostream>
#include <algorithm>
#include <vector>


CClassroom::CClassroom()
{
}

CClassroom::CClassroom(string nm):name(nm)
{
    this->nCount = 0;
    cout << "csh" << endl;
}

CClassroom::~CClassroom()
{
}

int CClassroom::GetNCount()
{
    return this->nCount;
}

// ���� SetTeacher ������ʵ��
void CClassroom::SetTeacher(CTeacherBase* t) {
    teacher = t;
}

// ���� GetTeacher ������ʵ��
CTeacherBase* CClassroom::GetTeacher() const {
    return teacher;
}

//void CClassroom::SetStudent(CStudent* stu, int i)
//{
//    this->stu[i] = stu;
//    this->nCount = this->nCount + 1;
//}
//
//CStudent* CClassroom::GetStudent(int i)
//{
//    return this->stu[i];
//}
//vector<int> CClassroom::GetStudentsTotalScores() {
//    vector<int> studentsTotalScores;
//
//    for (int i = 0; i < nCount; i++) {
//        int totalScore = stu[i]->CalculateTotalScore();
//        studentsTotalScores.push_back(totalScore);
//    }
//
//    return studentsTotalScores;
//}

//int CClassroom::GetClassHighestTotalScore() {
//    vector<int> studentsTotalScores = GetStudentsTotalScores();
//    if (studentsTotalScores.empty()) {
//        return 0; // ���߷���һ��Ĭ��ֵ
//    }
//
//    int highestTotalScore = *max_element(studentsTotalScores.begin(), studentsTotalScores.end());
//    return highestTotalScore;
//}
//
//int CClassroom::GetClassLowestTotalScore() {
//    vector<int> studentsTotalScores = GetStudentsTotalScores();
//    if (studentsTotalScores.empty()) {
//        return 0; // ���߷���һ��Ĭ��ֵ
//    }
//
//    int lowestTotalScore = *min_element(studentsTotalScores.begin(), studentsTotalScores.end());
//    return lowestTotalScore;
//}
//
//float CClassroom::GetClassAverageTotalScore() {
//    vector<int> studentsTotalScores = GetStudentsTotalScores();
//    if (studentsTotalScores.empty()) {
//        return 0; // ���߷���һ��Ĭ��ֵ
//    }
//
//    int sum = accumulate(studentsTotalScores.begin(), studentsTotalScores.end(), 0);
//    return static_cast<float>(sum) / studentsTotalScores.size();
//}


//void CClassroom::SortStudentsByScore() {
//    // ʹ�ñ�׼�����㷨 std::sort ��ѧ����������
//    std::sort(stu, stu + nCount, [](CStudent* a, CStudent* b) {
//        return a->CalculateTotalScore() > b->CalculateTotalScore();
//        });
//}

//std::vector<std::tuple<std::string, int, std::map<std::string, int>>> CClassroom::GetSortedStudentsInfo() {
//    std::vector<std::tuple<std::string, int, std::map<std::string, int>>> sortedStudentsInfo;
//
//    for (int i = 0; i < nCount; i++) {
//        CStudent* currentStudent = stu[i];
//        std::string studentName = currentStudent->GetName();
//        int studentTotalScore = currentStudent->CalculateTotalScore();
//        std::map<std::string, int> studentSubjectScores = currentStudent->GetAllScores();
//
//        sortedStudentsInfo.emplace_back(studentName, studentTotalScore, studentSubjectScores);
//    }
//
//    return sortedStudentsInfo;
//}

