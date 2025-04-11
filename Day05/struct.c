/*  
	struct 1 ~ 5
	struct(����ü) - ����� ���� �ڷ���
	���� �ڷ����� ��� ���� ���� �ڷ���(type)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Human {			// ����ü ���� struct ����ü��
	char name[100];		// ��� ����
	int age;			// ��� ����
};

struct mystruct {
	char name[20];
	int age;
	double height;
	char* str;
};

struct profile {
	int age;
	double height;
	double weight;
};

struct student {
	struct profile pf;
	int id;
	double grade;
};

typedef int int32mt;  // 'int' Ÿ���� 'int32mt'��� ���ο� �̸����� ����

struct human {
	char name[100];
	int32mt age;		// int ��� ��� ����
};

typedef struct myst2 {
	int a;
	int b;
}Myst;	// Myst�� ���� 

// vision ����ü: ����, ������ �÷� ����
typedef struct vision {
	double left;
	double right;

	// void move() {};			// C++: ����ü �ȿ� �Լ��� �־�?! ����ü �ȿ� ��� �Լ�(method)�� ���� �� �ֵ�? : typedef struct = class�� ����
}Vision;

Vision exchange(Vision);		// �Է��� �÷��� �����ϴ� �Լ� ����

int main() {

	//=========== ����ü(1) Human ===========

	/* . ��� ���ٿ�����*/
	struct Human h;		// Human ����ü�� ���� h ���� (Ÿ���� Human, ���� �̸��� h)
	h.age = 30;			// h��ü�� ��� age�� 30�� �����Ѵ�.
	//h.name = "�����";
	strcpy(h.name, "�����");

	//char str[100] = "�����";
	//printf("%s\n", str);
	//char str2[100];
	////str2 = "��ö��";
	////*str2[0] = "��ö��";

	//str2[0] = 'h';
	//str2[1] = 'o';
	//...
	//	str2[10] = '\0';

	printf("���� �̸��� %s�̰� ���̴� %d�Դϴ�.\n", h.name, h.age);
	printf("====================================\n");

	//=========== ����ü(2) mystruct ===========
	struct mystruct myst;
	strcpy(myst.name, "�����");
	myst.age = 23;
	myst.height = 160;
	myst.str = (char*)malloc(sizeof(100));

	printf("�λ縻: ");
	//gets(myst.str);		// �λ縻 �Է� �ޱ�

	printf("  �̸�: %s\n", myst.name);
	printf("  ����: %d\n", myst.age);
	printf("    Ű: %.1f\n", myst.height);
	printf("�λ縻: %s\n", myst.str);
	printf("====================================\n");


	free(myst.str);

	//=========== ����ü(3) profile, student ===========
	struct student s;
	s.grade = 99;
	s.id = 202222339;
	s.pf.age = 23;
	s.pf.height = 160;
	s.pf.weight = 50;

	printf("Ű: %.1lf\n", s.pf.height);
	printf("������: %.1lf\n", s.pf.weight);
	printf("����: %d\n", s.pf.age);
	printf("���̵�: %d\n", s.id);
	printf("����: %.1f\n", s.grade);
	printf("====================================\n");


	//=========== ����ü(4) human, myst2 ===========
	//struct human hm = { "ȫ�浿", 100 };
	//struct human hm2 = { "������", 100 };
	struct human hm = { "ȫ�浿", 100 },
				 hm2 = { "�̼���", 110 },
			  	 hm3 = { "������", 200 };

	Myst m;

	//=========== ����ü(5) vision ===========
	Vision rot;		// Vision ����ü ���� rot ����

	printf("�÷� �Է� (�� ��) >> ");
	scanf("%lf%lf", &rot.left, &rot.right);	// ��, �� �÷� �Է¹ޱ�

	// ���ο� �÷� �� ����
	rot = exchange(rot);	// rot ���ο� ������ ����
							// exchange(rot) : ����ü ������ �Ű������� ��� �����ϴ�.

	printf("�ٲ� �÷�: %.1lf, %.1lf\n", rot.left, rot.right);

	return 0;
}

Vision exchange(Vision v) {		// ����ü ����� �ϳ��� ���ڷ� �ѱ� �� �ִ�.
	Vision temp;		// Vision ����ü ���� temp ����
	temp.left = v.left;		// �Է¹��� �� temp.left, temp.right�� ����
	temp.right = v.right;

	return temp;		// temp ����ü ��ȯ

}