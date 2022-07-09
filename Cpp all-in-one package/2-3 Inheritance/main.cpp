#include <iostream>

class Base						// �⺻/�θ� Ŭ����
{
protected:		// ��ӹ��� Ŭ���������� ���� ����������,
	int num;	// �ܺο����� ���� �Ұ�
	Base() {}
	Base(int n)
	{
		num = n;
	}

	virtual void test()			// �����Լ�: ��ӹ��� Ŭ�������� �������� ���� ���
	{
		std::cout << "Base" << std::endl;
	}

	virtual void test2() = 0;	// ���� �����Լ�: ��ӹ��� Ŭ�������� �ݵ�� ������
};

class Derived : public Base		// �Ļ�/�ڽ� Ŭ����
{
public:
	Derived(int n): Base(n)		// �⺻/�θ� Ŭ������ �Բ� �ʱ�ȭ
	{ }
	void count()
	{
		num += 1;
	}

	virtual void test() override	// �����Լ� ������(override ��߻��� �������� final�� ���)
	{
		std::cout << "Derived" << std::endl;
	}

	virtual void test2()
	{
		std::cout << "Derived" << std::endl;
	}
};

class Base2
{
public:
	int num;
};

class Derived2 : public Base, public Base2	// ���� ���
{
public:
	void print()
	{
		std::cout << Base2::num;			// ���� ��ӹ��� ��� �տ� Ŭ���� ��÷� ��ȣ�� �ذ�
	}
};


int main()
{
	//Base b();		���������Լ��� ���Ե� �߻�Ŭ�����̹Ƿ� �ν��Ͻ� ���� �Ұ�
	Derived d(15);
	d.count();
	//d.num = 0;	���� �Ұ�
}