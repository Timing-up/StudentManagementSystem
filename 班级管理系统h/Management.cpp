#include "Management.h"

#include <iostream>

Management::Management()
{	//这里是管理系统的默认构造函数
	//初始化班级学生和老师的信息
	classroom.vec_clsCadre.push_back(new CClassstudy("黄翊", "2022003", "女", 18, "计算机科学", 2022, "团支书工作"));
	CClassroom *class2022 = new CClassroom("计科2022班");
	//班委
	classroom.vec_clsCadre.push_back(new CClassleader("马一", "2022000", "男", 18, "计算机科学", 2022, "班长工作"));
	classroom.vec_clsCadre.push_back(new CClasssports("秦一", "2022001", "男", 18, "计算机科学", 2022, "体委工作"));
	classroom.vec_clsCadre.push_back(new CClassstudy("王一", "2022002", "男", 18, "计算机科学", 2022, "学习委员工作"));

	classroom.vec_clsCadre.push_back(new CClassstudy("萝卜", "2022004", "女", 18, "计算机科学", 2022, "心理资助工作"));
	classroom.vec_clsCadre.push_back(new CClassstudy("王二", "2022005", "女", 18, "计算机科学", 2022, "学习委员工作"));
	

	
//***************************************************************************************************************************************************************

	//通过文件IO流将所有学生信息添加到txt文件中，并且在程序运行时从txt文件中读取学生信息
	//初始化部分学生信息，将学生信息添加到班级中，加入到vector中
	//classroom.vec_stu.push_back(new CStudent("马一", "2022000", "男", 18, "计算机科学", 2022,90,85,90));
	//classroom.vec_stu.push_back(new CStudent("秦一", "2022001", "男", 18, "计算机科学", 2022,95,86,92));
	//classroom.vec_stu.push_back(new CStudent("王一", "2022002", "男", 18, "计算机科学", 2022,98,87,96));
	//classroom.vec_stu.push_back(new CStudent("萝卜", "2022004", "女", 18, "计算机科学", 2022,100,100,100));
	//classroom.vec_stu.push_back(new CStudent("黄翊", "2022003", "女", 18, "计算机科学", 2022,100,100,100));
	//
	//classroom.vec_stu.push_back(new CStudent("王二", "2022005", "女", 18, "计算机科学", 2022,93,85,91));

	//classroom.vec_stu.push_back(new CStudent("张三", "2022007", "男", 18, "计算机科学", 2022,86,83,88));
	//classroom.vec_stu.push_back(new CStudent("李四", "2022008", "女", 18, "计算机科学", 2022,85,84,87));
	//classroom.vec_stu.push_back(new CStudent("王五", "2022009", "男", 18, "计算机科学", 2022,83,85,86));
	//classroom.vec_stu.push_back(new CStudent("赵六", "2022010", "女", 18, "计算机科学", 2022,80,92,89));
	//classroom.vec_stu.push_back(new CStudent("孙七", "2022011", "男", 18, "计算机科学", 2022,81,82,88));
	//classroom.vec_stu.push_back(new CStudent("周八", "2022012", "男", 18, "计算机科学", 2022,82,83,94));
	//classroom.vec_stu.push_back(new CStudent("吴九", "2022013", "女", 18, "计算机科学", 2022,88,90,82));

	////接下来将已经初始化的学生信息写入到txt文件中
	////将学生信息写入到txt文件中
	//ofstream ofs;
	//ofs.open("student.txt", ios::out);
	//for (auto& stu : classroom.vec_stu) {
	//	ofs << stu->GetName() << " " << stu->GetstuID() << " " << stu->Getsex() << " " << stu->Getage() << " " << stu->Getmajor() << " " << stu->GetclassNum() << " " << stu->Getmath() << " " << stu->Getenglish() << " " << stu->Getprogramming() << endl;
	//}
	//ofs.close();

//***************************************************************************************************************************************************************

	//将学生信息从student.txt文件中读取出来暂存到vec_stu中
	// 
	// 读取文件,文件格式如下：
	//马一 2022000 男 18 计算机科学 2022 90 85 90
	//秦一 2022001 男 18 计算机科学 2022 95 86 92
	//王一 2022002 男 18 计算机科学 2022 98 87 96
	//读取文件
	ifstream ifs;
	ifs.open("student.txt", ios::in);
	if (!ifs) {
		cerr << "无法打开文件" << endl;
	}

	string name, stuID, sex, major;
	int age, classNum;
	double	math, english, programming;

	while (ifs>>name >> stuID >> sex >> age >> major >> classNum >> math >> english >> programming) {
		classroom.vec_stu.push_back(new CStudent(name, stuID, sex, age, major, classNum, math, english, programming));
	}

	ifs.close();
	
//***************************************************************************************************************************************************************

	//通过文件IO流将所有老师信息添加到txt文件中，并且在程序运行时从txt文件中读取信息
	//初始化部分老师信息，将学生信息添加到班级中，加入到teachers中
	//初始化老师信息
	//teachers.push_back(new CGuidanceCounselor("刘老师", "辅导员工作"));

	//teachers.push_back(new CTeacher("孙老师", "教学及班主任", "思修"));
	//teachers.push_back(new CTeacher("李老师", "教学", "计算机科学"));
	//teachers.push_back(new CTeacher("王老师", "教学", "高数"));
	//teachers.push_back(new CTeacher("张老师", "教学", "英语"));
	//teachers.push_back(new CTeacher("赵老师", "教学", "c++"));
	//teachers.push_back(new CTeacher("钱老师", "教学", "体育"));
	//teachers.push_back(new CTeacher("周老师", "教学", "马克思"));
	//teachers.push_back(new CTeacher("吴老师", "教学", "线代"));
	//teachers.push_back(new CTeacher("郑老师", "教学", "离散"));

	////将老师信息写入到txt文件中
	//ofstream ofs1;
	//ofs1.open("teacher.txt", ios::out);
	//for (auto& teacher : teachers) {
	//	ofs1 << teacher->GetTeacherName() << " " << teacher->GetTeacherWorks() << " " << teacher->GetTeacherSubject() << endl;
	//}
	//ofs1.close();

//***************************************************************************************************************************************************************


	//将老师信息从teacher.txt文件中读取出来暂存到teacher中
	//
	// 辅导员读取信息的优化问题----未解决
	// 读取文件,文件格式如下：
	//刘老师 辅导员工作   
	//孙老师 教学及班主任 思修
	//读取文件
	ifstream ifs1;
	ifs1.open("teacher.txt", ios::in);
	if (!ifs1) {
		cerr << "无法打开文件" << endl;
	}
	string name1, works, subject;
	while (ifs1 >> name1 >> works >> subject) {
		teachers.push_back(new CTeacher(name1, works, subject));
	}
	ifs1.close();






}

Management::~Management()
{		//这里是管理系统的析构函数
	//释放内存
	for (auto& teacher : teachers) {
		delete teacher;
	}
	for (auto& Cadre : classroom.vec_clsCadre) {
		delete Cadre;
	}
	for (auto& stu : classroom.vec_stu) {
		delete stu;
	}
}

void Management::run()
{
	//这里是管理系统的主要运行函数
	while (true)
	{
		
		cout << "欢迎使用班级管理系统" << endl;
		cout << "------------------------------------------" << endl;
		cout << "1.显示所有学生和老师的信息" << endl;	//文件I/O实现--------------------完成
		cout << "2.显示所有学生的信息" << endl;			//文件I/O实现--------------------完成
		cout << "3.显示所有老师的信息" << endl;			//文件I/O实现--------------------完成
		cout << "4.增加学生" << endl;					//文件I/O实现--------------------未完成
		cout << "5.增加老师" << endl;					//文件I/O实现--------------------未完成		
		cout << "6.删除学生" << endl;					//文件I/O实现--------------------未完成
		cout << "7.修改学生信息" << endl;				//文件I/O实现--------------------未完成
		cout << "8.查找学生" << endl;					//文件I/O实现--------------------未完成
		cout << "9.查找老师" << endl;					//文件I/O实现--------------------未完成
		cout << "10.查看成绩" << endl;					//文件I/O实现--------------------未完成
		cout << "11.退出" << endl;
		cout << "请输入你的选择：" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{

		case 1:
			system("cls");
			showAll();
			break;
		case 2:
			system("cls");
			showAllStudent();
			break;
		case 3:
			system("cls");
			showAllTeacher();
			break;
		case 4:
			system("cls");
			InsertStudent();
			break;
		case 5:
			system("cls");
			InsertTeacher();
			break;
		case 6:
			system("cls");
			EraseStudent();
			break;
		case 7:
			system("cls");
			ModifyStudent();
			break;
		case 8:
			system("cls");
			FindStudent();
			break;
		case 9:
			system("cls");
			FindTeacher();
			break;
		case 10:
		system("cls");
			ViewGrade();
			break;
		case 11:
			return;
		default:
			system("cls");
			cout << "输入错误，请重新输入" << endl;
			break;
		}
	}
}

void Management::showAll()
{
	//这里是显示所有学生和老师的信息
	//根据初始化内容显示

	//1.显示班级老师信息
	//遍历老师数组
	cout << "班级老师信息如下：" << endl;
	for (auto& teacher : teachers) {
		teacher->showInfo();
		cout << "-------------------" << endl;
	}
	cout << "班级学生信息如下：" << endl;
	cout << "学生干部信息：" << endl;
	for (auto& Cadre : classroom.vec_clsCadre) {
		Cadre->showInfo();
		cout << "-------------------" << endl;
	}
	cout<< "普通学生信息：" << endl;
	//班级学生信息
	for (auto& stu : classroom.vec_stu) {
		stu->showInfo();
		cout << "-------------------" << endl;
	}

}

void Management::showAllStudent()
{
	//这里是显示所有学生的信息
	//遍历班级学生数组
	cout << "班级学生信息如下：" << endl;
	cout << "学生干部信息：" << endl;
	for (auto& Cadre : classroom.vec_clsCadre) {
		Cadre->showInfo();
		cout << "-------------------" << endl;
	}
	cout << "普通学生信息：" << endl;
	for (auto& stu : classroom.vec_stu) {
		stu->showInfo();
		cout << "-------------------" << endl;
	}
}

void Management::showAllTeacher()
{
	cout << "班级老师信息如下：" << endl;
	for (auto& teacher : teachers) {
		teacher->showInfo();
		cout << "-------------------" << endl;
	}
}

void Management::InsertStudent()
{
	//输入学生以下信息string name, string stuID, string sex, int age, string major, int classNum
	cout<<"请输入学生的姓名："<<endl;
	string name;
	cin>>name;
	cout<<"请输入学生的学号："<<endl;
	string stuID;
	cin>>stuID;
	cout << "请输入学生性别：" << endl;
	string sex;
	cin >> sex;
	cout << "请输入学生年龄：" << endl;
	int age;
	cin >> age;
	cout << "请输入学生专业：" << endl;
	string major;
	cin >> major;
	cout << "请输入学生班级：" << endl;
	int classNum;
	cin >> classNum;
	//将学生信息添加到班级中，加入到vector中
	classroom.vec_stu.push_back(new CStudent(name, stuID, sex, age, major, classNum));
	cout << "添加成功!" << endl;
	//同时将学生信息写入到student.txt文件中保存
	ofstream ofs;
	ofs.open("student.txt", ios::out);
	for (auto& stu : classroom.vec_stu) {
		ofs << stu->GetName() << " " << stu->GetstuID() << " " << stu->Getsex() << " " << stu->Getage() << " " << stu->Getmajor() << " " << stu->GetclassNum() << " " << stu->Getmath() << " " << stu->Getenglish() << " " << stu->Getprogramming() << endl;
	}






}

void Management::InsertTeacher()
{
	//插入任课老师信息--------非辅导员
	cout<<"请输入老师的姓名："<<endl;
	string name;
	cin>>name;
	cout<<"请输入老师的职务："<<endl;
	string works;
	cin>>works;
	cout<<"请输入老师的教学科目："<<endl;
	string subject;
	cin>>subject;
	//将老师信息添加到老师数组中
	teachers.push_back(new CTeacher(name, works,subject));
	cout << "添加成功!" << endl;
}

void Management::EraseStudent()
{
	//删除学生信息
	//输入学生学号
	cout << "请输入学生学号：" << endl;
	string stuID;
	cin >> stuID;
	//遍历班级学生数组
	for (auto& stu : classroom.vec_stu) {
		if (stu->GetstuID() == stuID) {
			//删除学生
			delete stu;
			stu = nullptr;
			cout << "删除成功！" << endl;
			return;
		}
	}
}

void Management::ModifyStudent()
{	
	//修改学生信息
	//输入学生学号
	cout << "请输入学生学号：" << endl;
	string stuID;
	cin >> stuID;
	//遍历班级学生数组
	for (auto& stu : classroom.vec_stu) {
		if (stu->GetstuID() == stuID) {
			while (true)
			{


				stu->showInfo();

				cout << "请输入要修改的信息：" << endl;
				int choice;
				cout << "1.姓名" << endl;
				cout << "2.学号" << endl;
				cout << "3.性别" << endl;
				cout << "4.年龄" << endl;
				cout << "5.专业" << endl;
				cout << "6.班级" << endl;
				cout << "7.退出" << endl;

				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					cout << "请输入修改后的姓名：" << endl;
					string name;
					cin >> name;
					stu->SetName(name);
					cout << "修改成功！" << endl;
					break;
				}
				case 2:
				{
					cout << "请输入修改后的学号：" << endl;
					string stuID;
					cin >> stuID;
					stu->SetstuID(stuID);
					cout << "修改成功！" << endl;
					break;
				}
				case 3: {
					cout << "请输入修改后的性别：" << endl;
					string sex;
					cin >> sex;
					stu->Setsex(sex);
					cout << "修改成功！" << endl;
					break;

				}
				case 4: {
					cout << "请输入修改后的年龄：" << endl;
					int age;
					cin >> age;
					stu->Setage(age);
					cout << "修改成功！" << endl;
					break;

				}
				case 5: {
					cout << "请输入修改后的专业：" << endl;
					string major;
					cin >> major;
					stu->Setmajor(major);
					cout << "修改成功！" << endl;
					break;

				}
				case 6: {
					cout << "请输入修改后的班级：" << endl;
					int classNum;
					cin >> classNum;
					stu->SetclassNum(classNum);
					cout << "修改成功！" << endl;
					break;

				}
				case 7:
					return;
				default:
					cout<<"输入错误，请重新输入"<<endl;
					break;
				}


			}
		}
	}


}

void Management::FindStudent()
{
	//查找学生信息
	//输入学生学号
	cout << "请输入学生学号：" << endl;
	string stuID;
	cin >> stuID;
	//遍历班级学生数组
	for (auto& stu : classroom.vec_stu) {
		if (stu->GetstuID() == stuID) {
			stu->showInfo();
			return;
		}
	}
}

void Management::FindTeacher()
{
	//查找老师信息
	//输入老师姓名
	cout << "请输入老师姓名：" << endl;
	string name;
	cin >> name;
	//遍历老师数组
	for (auto& teacher : teachers) {
		if (teacher->GetTeacherName() == name) {
			teacher->showInfo();
			return;
		}
	}	

}

void Management::ViewGrade()
{
	//查看班级成绩情况，班级平均分，班级最高分，班级最低分，排序
	//选择查看班级信息还是查看个人信息

	while (1) {
		int choice1;
		string id;
		double sum = 0;
		double average = 0;
		double max_math = 0;
		double max_english = 0;
		double max_program = 0;
		cout << "请选择查看班级成绩还是查看个人成绩：" << endl;
		cout << "1.班级信息" << endl;
		cout << "2.个人成绩信息" << endl;
		cout << "3.退出" << endl;
		cout << "请输入你的选择：" << endl;
		cout<<"-------------------"<<endl;
		cin >> choice1;
		switch (choice1) {
		case 1:
			//查看班级信息
			//计算班级总分平均分，班级单科最高分，班级单科最低分，按总分对学生进行排序，排序输出学生学号，姓名，各科成绩和总分
			//计算班级总分平均分
			
			for (auto& stu : classroom.vec_stu) {
				sum += stu->GetTotalGrade();
			}
			average = sum / classroom.vec_stu.size();
			cout << "班级总分平均分为：" << average << endl;

			//班级单科最高分,分别计算各科最高分，数学，英语，程序设计
			
			for (auto& stu : classroom.vec_stu) {
				if (stu->Getmath() > max_math) {
					max_math = stu->Getmath();
				}
				if (stu->Getenglish() > max_english) {
					max_english = stu->Getenglish();
				}
				if (stu->Getprogramming() > max_program) {
					max_program = stu->Getprogramming();
				}
			}
			cout << "班级数学最高分为：" << max_math << endl;
			cout << "班级英语最高分为：" << max_english << endl;
			cout << "班级程序设计最高分为：" << max_program << endl;

			//按总分对学生进行排序，排序输出学生学号，姓名，各科成绩和总分
			//冒泡排序
			for (int i = 0; i < classroom.vec_stu.size() - 1; i++) {
				for (int j = 0; j < classroom.vec_stu.size() - 1 - i; j++) {
					if (classroom.vec_stu[j]->GetTotalGrade() < classroom.vec_stu[j + 1]->GetTotalGrade()) {
						CStudent* temp = classroom.vec_stu[j];
						classroom.vec_stu[j] = classroom.vec_stu[j + 1];
						classroom.vec_stu[j + 1] = temp;
					}
				}
			}
			cout << "按总分从高到低排序如下：" << endl;
			for (auto& stu : classroom.vec_stu) {
				stu->showInfo();
				cout << "-------------------" << endl;
			}
			break;
		case 2:
			//查看个人成绩信息
			//输入学生学号,查看学生总分，最高分，最低分，平均分，学生信息，各科成绩
			while (true)
			{
				cout << "请输入学生学号：" << endl;
				cin >> id;
				//遍历班级学生数组
				int f = 0;
				for (auto& stu : classroom.vec_stu) {
					if (stu->GetstuID() == id) {
						cout << "学生总分为：" << stu->GetTotalGrade() << endl;
						cout << "学生最高分为：" << stu->GetMaxGrade() << endl;
						cout << "学生最低分为：" << stu->GetMinGrade() << endl;
						cout << "学生平均分为：" << stu->GetAverageGrade() << endl;
						stu->showInfo();
						f = 1;
						cout << "-------------------" << endl;	
					}

				}
				if(f==0){
					cout << "查无此人，请重新输入" << endl;
					return;
				}
				else {
					return;
				}
			}	
		case 3:
			//退出
			return;


		}
	}
}

void Management::Exit()
{
	return ;
}
