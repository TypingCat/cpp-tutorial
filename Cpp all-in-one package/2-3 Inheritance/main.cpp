#include <iostream>

class Base						// 기본/부모 클래스
{
protected:		// 상속받은 클래스에서는 접근 가능하지만,
	int num;	// 외부에서는 접근 불가
	Base() {}
	Base(int n)
	{
		num = n;
	}

	virtual void test()			// 가상함수: 상속받은 클래스에서 재정의할 것을 기대
	{
		std::cout << "Base" << std::endl;
	}

	virtual void test2() = 0;	// 순수 가상함수: 상속받은 클래스에서 반드시 재정의
};

class Derived : public Base		// 파생/자식 클래스
{
public:
	Derived(int n): Base(n)		// 기본/부모 클래스도 함께 초기화
	{ }
	void count()
	{
		num += 1;
	}

	virtual void test() override	// 가상함수 재정의(override 재발생을 막으려면 final로 명시)
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

class Derived2 : public Base, public Base2	// 다중 상속
{
public:
	void print()
	{
		std::cout << Base2::num;			// 다중 상속받은 멤버 앞에 클래스 명시로 모호함 해결
	}
};


int main()
{
	//Base b();		순수가상함수가 포함된 추상클래스이므로 인스턴스 생성 불가
	Derived d(15);
	d.count();
	//d.num = 0;	접근 불가
}