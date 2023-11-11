#include "Management.h"

#include <iostream>

Management::Management()
{	//�����ǹ���ϵͳ��Ĭ�Ϲ��캯��
	//��ʼ���༶ѧ������ʦ����Ϣ
	classroom.vec_clsCadre.push_back(new CClassstudy("���", "2022003", "Ů", 18, "�������ѧ", 2022, "��֧�鹤��"));
	CClassroom *class2022 = new CClassroom("�ƿ�2022��");
	//��ί
	classroom.vec_clsCadre.push_back(new CClassleader("��һ", "2022000", "��", 18, "�������ѧ", 2022, "�೤����"));
	classroom.vec_clsCadre.push_back(new CClasssports("��һ", "2022001", "��", 18, "�������ѧ", 2022, "��ί����"));
	classroom.vec_clsCadre.push_back(new CClassstudy("��һ", "2022002", "��", 18, "�������ѧ", 2022, "ѧϰίԱ����"));

	classroom.vec_clsCadre.push_back(new CClassstudy("�ܲ�", "2022004", "Ů", 18, "�������ѧ", 2022, "������������"));
	classroom.vec_clsCadre.push_back(new CClassstudy("����", "2022005", "Ů", 18, "�������ѧ", 2022, "ѧϰίԱ����"));
	

	
//***************************************************************************************************************************************************************

	//ͨ���ļ�IO��������ѧ����Ϣ��ӵ�txt�ļ��У������ڳ�������ʱ��txt�ļ��ж�ȡѧ����Ϣ
	//��ʼ������ѧ����Ϣ����ѧ����Ϣ��ӵ��༶�У����뵽vector��
	//classroom.vec_stu.push_back(new CStudent("��һ", "2022000", "��", 18, "�������ѧ", 2022,90,85,90));
	//classroom.vec_stu.push_back(new CStudent("��һ", "2022001", "��", 18, "�������ѧ", 2022,95,86,92));
	//classroom.vec_stu.push_back(new CStudent("��һ", "2022002", "��", 18, "�������ѧ", 2022,98,87,96));
	//classroom.vec_stu.push_back(new CStudent("�ܲ�", "2022004", "Ů", 18, "�������ѧ", 2022,100,100,100));
	//classroom.vec_stu.push_back(new CStudent("���", "2022003", "Ů", 18, "�������ѧ", 2022,100,100,100));
	//
	//classroom.vec_stu.push_back(new CStudent("����", "2022005", "Ů", 18, "�������ѧ", 2022,93,85,91));

	//classroom.vec_stu.push_back(new CStudent("����", "2022007", "��", 18, "�������ѧ", 2022,86,83,88));
	//classroom.vec_stu.push_back(new CStudent("����", "2022008", "Ů", 18, "�������ѧ", 2022,85,84,87));
	//classroom.vec_stu.push_back(new CStudent("����", "2022009", "��", 18, "�������ѧ", 2022,83,85,86));
	//classroom.vec_stu.push_back(new CStudent("����", "2022010", "Ů", 18, "�������ѧ", 2022,80,92,89));
	//classroom.vec_stu.push_back(new CStudent("����", "2022011", "��", 18, "�������ѧ", 2022,81,82,88));
	//classroom.vec_stu.push_back(new CStudent("�ܰ�", "2022012", "��", 18, "�������ѧ", 2022,82,83,94));
	//classroom.vec_stu.push_back(new CStudent("���", "2022013", "Ů", 18, "�������ѧ", 2022,88,90,82));

	////���������Ѿ���ʼ����ѧ����Ϣд�뵽txt�ļ���
	////��ѧ����Ϣд�뵽txt�ļ���
	//ofstream ofs;
	//ofs.open("student.txt", ios::out);
	//for (auto& stu : classroom.vec_stu) {
	//	ofs << stu->GetName() << " " << stu->GetstuID() << " " << stu->Getsex() << " " << stu->Getage() << " " << stu->Getmajor() << " " << stu->GetclassNum() << " " << stu->Getmath() << " " << stu->Getenglish() << " " << stu->Getprogramming() << endl;
	//}
	//ofs.close();

//***************************************************************************************************************************************************************

	//��ѧ����Ϣ��student.txt�ļ��ж�ȡ�����ݴ浽vec_stu��
	// 
	// ��ȡ�ļ�,�ļ���ʽ���£�
	//��һ 2022000 �� 18 �������ѧ 2022 90 85 90
	//��һ 2022001 �� 18 �������ѧ 2022 95 86 92
	//��һ 2022002 �� 18 �������ѧ 2022 98 87 96
	//��ȡ�ļ�
	ifstream ifs;
	ifs.open("student.txt", ios::in);
	if (!ifs) {
		cerr << "�޷����ļ�" << endl;
	}

	string name, stuID, sex, major;
	int age, classNum;
	double	math, english, programming;

	while (ifs>>name >> stuID >> sex >> age >> major >> classNum >> math >> english >> programming) {
		classroom.vec_stu.push_back(new CStudent(name, stuID, sex, age, major, classNum, math, english, programming));
	}

	ifs.close();
	
//***************************************************************************************************************************************************************

	//ͨ���ļ�IO����������ʦ��Ϣ��ӵ�txt�ļ��У������ڳ�������ʱ��txt�ļ��ж�ȡ��Ϣ
	//��ʼ��������ʦ��Ϣ����ѧ����Ϣ��ӵ��༶�У����뵽teachers��
	//��ʼ����ʦ��Ϣ
	//teachers.push_back(new CGuidanceCounselor("����ʦ", "����Ա����"));

	//teachers.push_back(new CTeacher("����ʦ", "��ѧ��������", "˼��"));
	//teachers.push_back(new CTeacher("����ʦ", "��ѧ", "�������ѧ"));
	//teachers.push_back(new CTeacher("����ʦ", "��ѧ", "����"));
	//teachers.push_back(new CTeacher("����ʦ", "��ѧ", "Ӣ��"));
	//teachers.push_back(new CTeacher("����ʦ", "��ѧ", "c++"));
	//teachers.push_back(new CTeacher("Ǯ��ʦ", "��ѧ", "����"));
	//teachers.push_back(new CTeacher("����ʦ", "��ѧ", "���˼"));
	//teachers.push_back(new CTeacher("����ʦ", "��ѧ", "�ߴ�"));
	//teachers.push_back(new CTeacher("֣��ʦ", "��ѧ", "��ɢ"));

	////����ʦ��Ϣд�뵽txt�ļ���
	//ofstream ofs1;
	//ofs1.open("teacher.txt", ios::out);
	//for (auto& teacher : teachers) {
	//	ofs1 << teacher->GetTeacherName() << " " << teacher->GetTeacherWorks() << " " << teacher->GetTeacherSubject() << endl;
	//}
	//ofs1.close();

//***************************************************************************************************************************************************************


	//����ʦ��Ϣ��teacher.txt�ļ��ж�ȡ�����ݴ浽teacher��
	//
	// ����Ա��ȡ��Ϣ���Ż�����----δ���
	// ��ȡ�ļ�,�ļ���ʽ���£�
	//����ʦ ����Ա����   
	//����ʦ ��ѧ�������� ˼��
	//��ȡ�ļ�
	ifstream ifs1;
	ifs1.open("teacher.txt", ios::in);
	if (!ifs1) {
		cerr << "�޷����ļ�" << endl;
	}
	string name1, works, subject;
	while (ifs1 >> name1 >> works >> subject) {
		teachers.push_back(new CTeacher(name1, works, subject));
	}
	ifs1.close();






}

Management::~Management()
{		//�����ǹ���ϵͳ����������
	//�ͷ��ڴ�
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
	//�����ǹ���ϵͳ����Ҫ���к���
	while (true)
	{
		
		cout << "��ӭʹ�ð༶����ϵͳ" << endl;
		cout << "------------------------------------------" << endl;
		cout << "1.��ʾ����ѧ������ʦ����Ϣ" << endl;	//�ļ�I/Oʵ��--------------------���
		cout << "2.��ʾ����ѧ������Ϣ" << endl;			//�ļ�I/Oʵ��--------------------���
		cout << "3.��ʾ������ʦ����Ϣ" << endl;			//�ļ�I/Oʵ��--------------------���
		cout << "4.����ѧ��" << endl;					//�ļ�I/Oʵ��--------------------δ���
		cout << "5.������ʦ" << endl;					//�ļ�I/Oʵ��--------------------δ���		
		cout << "6.ɾ��ѧ��" << endl;					//�ļ�I/Oʵ��--------------------δ���
		cout << "7.�޸�ѧ����Ϣ" << endl;				//�ļ�I/Oʵ��--------------------δ���
		cout << "8.����ѧ��" << endl;					//�ļ�I/Oʵ��--------------------δ���
		cout << "9.������ʦ" << endl;					//�ļ�I/Oʵ��--------------------δ���
		cout << "10.�鿴�ɼ�" << endl;					//�ļ�I/Oʵ��--------------------δ���
		cout << "11.�˳�" << endl;
		cout << "���������ѡ��" << endl;
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
			cout << "�����������������" << endl;
			break;
		}
	}
}

void Management::showAll()
{
	//��������ʾ����ѧ������ʦ����Ϣ
	//���ݳ�ʼ��������ʾ

	//1.��ʾ�༶��ʦ��Ϣ
	//������ʦ����
	cout << "�༶��ʦ��Ϣ���£�" << endl;
	for (auto& teacher : teachers) {
		teacher->showInfo();
		cout << "-------------------" << endl;
	}
	cout << "�༶ѧ����Ϣ���£�" << endl;
	cout << "ѧ���ɲ���Ϣ��" << endl;
	for (auto& Cadre : classroom.vec_clsCadre) {
		Cadre->showInfo();
		cout << "-------------------" << endl;
	}
	cout<< "��ͨѧ����Ϣ��" << endl;
	//�༶ѧ����Ϣ
	for (auto& stu : classroom.vec_stu) {
		stu->showInfo();
		cout << "-------------------" << endl;
	}

}

void Management::showAllStudent()
{
	//��������ʾ����ѧ������Ϣ
	//�����༶ѧ������
	cout << "�༶ѧ����Ϣ���£�" << endl;
	cout << "ѧ���ɲ���Ϣ��" << endl;
	for (auto& Cadre : classroom.vec_clsCadre) {
		Cadre->showInfo();
		cout << "-------------------" << endl;
	}
	cout << "��ͨѧ����Ϣ��" << endl;
	for (auto& stu : classroom.vec_stu) {
		stu->showInfo();
		cout << "-------------------" << endl;
	}
}

void Management::showAllTeacher()
{
	cout << "�༶��ʦ��Ϣ���£�" << endl;
	for (auto& teacher : teachers) {
		teacher->showInfo();
		cout << "-------------------" << endl;
	}
}

void Management::InsertStudent()
{
	//����ѧ��������Ϣstring name, string stuID, string sex, int age, string major, int classNum
	cout<<"������ѧ����������"<<endl;
	string name;
	cin>>name;
	cout<<"������ѧ����ѧ�ţ�"<<endl;
	string stuID;
	cin>>stuID;
	cout << "������ѧ���Ա�" << endl;
	string sex;
	cin >> sex;
	cout << "������ѧ�����䣺" << endl;
	int age;
	cin >> age;
	cout << "������ѧ��רҵ��" << endl;
	string major;
	cin >> major;
	cout << "������ѧ���༶��" << endl;
	int classNum;
	cin >> classNum;
	//��ѧ����Ϣ��ӵ��༶�У����뵽vector��
	classroom.vec_stu.push_back(new CStudent(name, stuID, sex, age, major, classNum));
	cout << "��ӳɹ�!" << endl;
	//ͬʱ��ѧ����Ϣд�뵽student.txt�ļ��б���
	ofstream ofs;
	ofs.open("student.txt", ios::out);
	for (auto& stu : classroom.vec_stu) {
		ofs << stu->GetName() << " " << stu->GetstuID() << " " << stu->Getsex() << " " << stu->Getage() << " " << stu->Getmajor() << " " << stu->GetclassNum() << " " << stu->Getmath() << " " << stu->Getenglish() << " " << stu->Getprogramming() << endl;
	}






}

void Management::InsertTeacher()
{
	//�����ο���ʦ��Ϣ--------�Ǹ���Ա
	cout<<"��������ʦ��������"<<endl;
	string name;
	cin>>name;
	cout<<"��������ʦ��ְ��"<<endl;
	string works;
	cin>>works;
	cout<<"��������ʦ�Ľ�ѧ��Ŀ��"<<endl;
	string subject;
	cin>>subject;
	//����ʦ��Ϣ��ӵ���ʦ������
	teachers.push_back(new CTeacher(name, works,subject));
	cout << "��ӳɹ�!" << endl;
}

void Management::EraseStudent()
{
	//ɾ��ѧ����Ϣ
	//����ѧ��ѧ��
	cout << "������ѧ��ѧ�ţ�" << endl;
	string stuID;
	cin >> stuID;
	//�����༶ѧ������
	for (auto& stu : classroom.vec_stu) {
		if (stu->GetstuID() == stuID) {
			//ɾ��ѧ��
			delete stu;
			stu = nullptr;
			cout << "ɾ���ɹ���" << endl;
			return;
		}
	}
}

void Management::ModifyStudent()
{	
	//�޸�ѧ����Ϣ
	//����ѧ��ѧ��
	cout << "������ѧ��ѧ�ţ�" << endl;
	string stuID;
	cin >> stuID;
	//�����༶ѧ������
	for (auto& stu : classroom.vec_stu) {
		if (stu->GetstuID() == stuID) {
			while (true)
			{


				stu->showInfo();

				cout << "������Ҫ�޸ĵ���Ϣ��" << endl;
				int choice;
				cout << "1.����" << endl;
				cout << "2.ѧ��" << endl;
				cout << "3.�Ա�" << endl;
				cout << "4.����" << endl;
				cout << "5.רҵ" << endl;
				cout << "6.�༶" << endl;
				cout << "7.�˳�" << endl;

				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					cout << "�������޸ĺ��������" << endl;
					string name;
					cin >> name;
					stu->SetName(name);
					cout << "�޸ĳɹ���" << endl;
					break;
				}
				case 2:
				{
					cout << "�������޸ĺ��ѧ�ţ�" << endl;
					string stuID;
					cin >> stuID;
					stu->SetstuID(stuID);
					cout << "�޸ĳɹ���" << endl;
					break;
				}
				case 3: {
					cout << "�������޸ĺ���Ա�" << endl;
					string sex;
					cin >> sex;
					stu->Setsex(sex);
					cout << "�޸ĳɹ���" << endl;
					break;

				}
				case 4: {
					cout << "�������޸ĺ�����䣺" << endl;
					int age;
					cin >> age;
					stu->Setage(age);
					cout << "�޸ĳɹ���" << endl;
					break;

				}
				case 5: {
					cout << "�������޸ĺ��רҵ��" << endl;
					string major;
					cin >> major;
					stu->Setmajor(major);
					cout << "�޸ĳɹ���" << endl;
					break;

				}
				case 6: {
					cout << "�������޸ĺ�İ༶��" << endl;
					int classNum;
					cin >> classNum;
					stu->SetclassNum(classNum);
					cout << "�޸ĳɹ���" << endl;
					break;

				}
				case 7:
					return;
				default:
					cout<<"�����������������"<<endl;
					break;
				}


			}
		}
	}


}

void Management::FindStudent()
{
	//����ѧ����Ϣ
	//����ѧ��ѧ��
	cout << "������ѧ��ѧ�ţ�" << endl;
	string stuID;
	cin >> stuID;
	//�����༶ѧ������
	for (auto& stu : classroom.vec_stu) {
		if (stu->GetstuID() == stuID) {
			stu->showInfo();
			return;
		}
	}
}

void Management::FindTeacher()
{
	//������ʦ��Ϣ
	//������ʦ����
	cout << "��������ʦ������" << endl;
	string name;
	cin >> name;
	//������ʦ����
	for (auto& teacher : teachers) {
		if (teacher->GetTeacherName() == name) {
			teacher->showInfo();
			return;
		}
	}	

}

void Management::ViewGrade()
{
	//�鿴�༶�ɼ�������༶ƽ���֣��༶��߷֣��༶��ͷ֣�����
	//ѡ��鿴�༶��Ϣ���ǲ鿴������Ϣ

	while (1) {
		int choice1;
		string id;
		double sum = 0;
		double average = 0;
		double max_math = 0;
		double max_english = 0;
		double max_program = 0;
		cout << "��ѡ��鿴�༶�ɼ����ǲ鿴���˳ɼ���" << endl;
		cout << "1.�༶��Ϣ" << endl;
		cout << "2.���˳ɼ���Ϣ" << endl;
		cout << "3.�˳�" << endl;
		cout << "���������ѡ��" << endl;
		cout<<"-------------------"<<endl;
		cin >> choice1;
		switch (choice1) {
		case 1:
			//�鿴�༶��Ϣ
			//����༶�ܷ�ƽ���֣��༶������߷֣��༶������ͷ֣����ֶܷ�ѧ�����������������ѧ��ѧ�ţ����������Ƴɼ����ܷ�
			//����༶�ܷ�ƽ����
			
			for (auto& stu : classroom.vec_stu) {
				sum += stu->GetTotalGrade();
			}
			average = sum / classroom.vec_stu.size();
			cout << "�༶�ܷ�ƽ����Ϊ��" << average << endl;

			//�༶������߷�,�ֱ���������߷֣���ѧ��Ӣ��������
			
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
			cout << "�༶��ѧ��߷�Ϊ��" << max_math << endl;
			cout << "�༶Ӣ����߷�Ϊ��" << max_english << endl;
			cout << "�༶���������߷�Ϊ��" << max_program << endl;

			//���ֶܷ�ѧ�����������������ѧ��ѧ�ţ����������Ƴɼ����ܷ�
			//ð������
			for (int i = 0; i < classroom.vec_stu.size() - 1; i++) {
				for (int j = 0; j < classroom.vec_stu.size() - 1 - i; j++) {
					if (classroom.vec_stu[j]->GetTotalGrade() < classroom.vec_stu[j + 1]->GetTotalGrade()) {
						CStudent* temp = classroom.vec_stu[j];
						classroom.vec_stu[j] = classroom.vec_stu[j + 1];
						classroom.vec_stu[j + 1] = temp;
					}
				}
			}
			cout << "���ִܷӸߵ����������£�" << endl;
			for (auto& stu : classroom.vec_stu) {
				stu->showInfo();
				cout << "-------------------" << endl;
			}
			break;
		case 2:
			//�鿴���˳ɼ���Ϣ
			//����ѧ��ѧ��,�鿴ѧ���ܷ֣���߷֣���ͷ֣�ƽ���֣�ѧ����Ϣ�����Ƴɼ�
			while (true)
			{
				cout << "������ѧ��ѧ�ţ�" << endl;
				cin >> id;
				//�����༶ѧ������
				int f = 0;
				for (auto& stu : classroom.vec_stu) {
					if (stu->GetstuID() == id) {
						cout << "ѧ���ܷ�Ϊ��" << stu->GetTotalGrade() << endl;
						cout << "ѧ����߷�Ϊ��" << stu->GetMaxGrade() << endl;
						cout << "ѧ����ͷ�Ϊ��" << stu->GetMinGrade() << endl;
						cout << "ѧ��ƽ����Ϊ��" << stu->GetAverageGrade() << endl;
						stu->showInfo();
						f = 1;
						cout << "-------------------" << endl;	
					}

				}
				if(f==0){
					cout << "���޴��ˣ�����������" << endl;
					return;
				}
				else {
					return;
				}
			}	
		case 3:
			//�˳�
			return;


		}
	}
}

void Management::Exit()
{
	return ;
}
