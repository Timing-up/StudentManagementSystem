import "CTeacher.h"

class CCounselor : public CTeacher {
private:
    std::string counselorID;

public:
    CCounselor(const std::string& name, int age, const std::string& sex, const std::string& teacherID, const std::string& counselorID)
        : CTeacher(name, age, sex, teacherID), counselorID(counselorID) {}

    std::string GetCounselorID() const { return counselorID; }

    // 辅导员特有的方法
    void CounselStudent() {
        // 在这里实现辅导员的辅导逻辑
    }
};