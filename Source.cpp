#include <iostream>

using namespace std;

struct Human
{
	int Hungry; //����� 
	int Fatigue; //�Ƿε�

};


class YDProgrammer
{
	Human Humanstate;
	float ThinkingPower; //����
	float Application; //�����
	float CodingKnowledge; //����
	
	


public:

	
	void Character()
	{
		srand(time(NULL)); //���� ����
		Humanstate.Hungry = 100;
		Humanstate.Fatigue = 0;
		ThinkingPower = rand() % 4 + 1; //1~4�� ���� ����
		Application = rand() % 4 + 1; //1~4�� ���� ����
		CodingKnowledge = rand() % 4 + 1; //1~4�� ���� ����
	}

	void Sleep(int hour) // �ڱ�
	{

		system("cls");
		Humanstate.Fatigue -= hour * 10;

		cout << hour << "�ð��� �������� ���� �Ƿε��� " << hour * 10 << "��ŭ �پ����ϴ�." << endl;

		if (Humanstate.Fatigue < 0)
			Humanstate.Fatigue = 0;

	}


	void Eat() // �Ա�
	{
		system("cls");
		srand(time(NULL));
		int percentage = rand() % 30  + 51; // �������� 50~80��ŭ �谡 �Ȱ�����
		Humanstate.Hungry += percentage;
	}

	void TakeClass() // �������
	{
		system("cls");
		const int hour = 9;
		srand(time(NULL));
		int percentage = rand() % 100 + 1;
		//50�� Ȯ���� �� ���� 30�� Ȯ���� �߼��� 20�� Ȯ���� �� ����
		if (1 <= percentage < 50)
		{
			cout << "�� ������ �������� �ڵ����� 1�� �þ����ϴ�" << endl;
			CodingKnowledge += 1;


		}
			

		else if (50 <= percentage < 80)
		{
			cout << "�� ������ �������� �ڵ����� 2, ���� 1, ����� 1�� �þ����ϴ�" << endl;
			CodingKnowledge += 2;
			ThinkingPower += 1;
			Application += 1;
		}
			
		else
		{
			cout << "�� ������ �������� �ڵ����� 3, ���� 2, ����� 1�� �þ����ϴ�" << endl;
			CodingKnowledge += 3;
			ThinkingPower += 2;
			Application += 1;
		}

		cout << "9�ð��� �������� �Ƿε� 50 �ð�, ����� 60, �� �پ����ϴ�." << endl;
		
		Humanstate.Hungry -= 60;
		Humanstate.Fatigue += 50;

		if (Humanstate.Fatigue >= 100 || Humanstate.Hungry < 0)
			cout << "Humanstate.Fatigue = " << Humanstate.Fatigue << "Humanstate.Hungry = " << Humanstate.Hungry << "���� ���� ĳ���� ���" << endl;
			
	}

	void preparation(int hour) // �ڽ�
	{
		system("cls");
		Humanstate.Fatigue += 7 * hour;
		Humanstate.Hungry -= 5 * hour;


		cout << "�ڽ����� ���� �ڵ����� " << 0.3 * hour << " ���� " << 0.2 * hour << " ����� " << 0.2 * hour << " ��ŭ ����߽��ϴ�." << endl;

		cout << hour << " �ð��� �������� �Ƿε��� " << 7 * hour <<" �ð�, ������� " << 5 * hour << " �پ����ϴ�." << endl;
		if (Humanstate.Fatigue >= 100 || Humanstate.Hungry < 0)
			cout << "Humanstate.Fatigue = " << Humanstate.Fatigue << "Humanstate.Hungry = " << Humanstate.Hungry << "���� ���� ĳ���� ���" << endl;
	}


	void Programmers() // ���α׷��ӽ� Ǯ��
	{
		system("cls");
	
		srand(time(NULL));
		int percentage = rand() % 100 + 1;
		//Ȯ���� ���� �������ذ� �ð�
		if (1 <= percentage < 20)
		{
			cout << "LV3�� ������ 5�ð� ���� Ǯ�� ���� 3 ����� 3�� �þ����ϴ�" << endl;
			ThinkingPower += 3;
			Application += 3;


			Humanstate.Fatigue += 7 * 5;
			Humanstate.Hungry -= 5 * 5;
			cout << "5�ð��� �������� �Ƿε��� " << 7 * 5 << " �ð�, ������� " << 5 * 5 << " �پ����ϴ�." << endl;
		}


		else if (20 <= percentage < 60)
		{
			cout << "LV2�� ������ 3�ð� ���� Ǯ�� ���� 1 ����� 1�� �þ����ϴ�" << endl;
			ThinkingPower += 1;
			Application += 1;


			Humanstate.Fatigue += 7 * 3;
			Humanstate.Hungry -= 5 * 3;
			cout << "3�ð��� �������� �Ƿε��� " << 7 * 3 << " �ð�, ������� " << 5 * 3 << " �پ����ϴ�." << endl;
		}

		else
		{
			cout << "LV1�� ������ 1�ð� ���� Ǯ�� ���� 0.5 ����� 0.5�� �þ����ϴ�" << endl;
			ThinkingPower += 0.5;
			Application += 0.5;


			Humanstate.Fatigue += 7 * 1;
			Humanstate.Hungry -= 5 * 1;
			cout << "1�ð��� �������� �Ƿε��� " << 7 * 1 << " �ð�, ������� " << 5 * 1 << " �پ����ϴ�." << endl;
		}


		if (Humanstate.Fatigue >= 100 || Humanstate.Hungry < 0)
			cout << "Humanstate.Fatigue = " << Humanstate.Fatigue << "Humanstate.Hungry = " << Humanstate.Hungry << "���� ���� ĳ���� ���" << endl;

	}

	void ViewState() //����â ����
	{
		system("cls");
		cout << "Humanstate.Hungry = " << Humanstate.Hungry << endl;
		cout << "Humanstate.Fatigue = " << Humanstate.Fatigue << endl;
		cout << "ThinkingPower = " << ThinkingPower << endl;
		cout << "Application = " << Application << endl;
		cout << "CodingKnowledge = " << CodingKnowledge << endl;
	}



};

int main()
{

	YDProgrammer Dongchan;
	Dongchan.Character();

	
	Dongchan.TakeClass();
	Dongchan.Eat();
	Dongchan.preparation(3);
	Dongchan.Programmers();
	Dongchan.Sleep(6);
	Dongchan.ViewState();
	
	
}