import "CTeacher.h"

class CCounselor : public CTeacher {
private:
    std::string counselorID;

public:
    CCounselor(const std::string& name, int age, const std::string& sex, const std::string& teacherID, const std::string& counselorID)
        : CTeacher(name, age, sex, teacherID), counselorID(counselorID) {}

    std::string GetCounselorID() const { return counselorID; }

    // ����Ա���еķ���
    void CounselStudent() {
        // ������ʵ�ָ���Ա�ĸ����߼�
    }
};