// ��Ʈ �÷���, ��Ʈ ����ũ
// Bit Flags, Bit Masks

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;

	// event!
	item1_flag = true;

	// die! item2 los
	item2_flag = false;

	if (item3_flag == true)
	{
		// event
	}

	if (item3_flag == true && item4_flag == false)
	{
		item3_flag == false;
		item4_flag == true;
	}

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char items_flag = 0;

	cout << "No item " << bitset<8>(items_flag) << endl;

	// item0 on
	items_flag |= opt0;
	cout << "Item0 obtained " << bitset<8>(items_flag) << endl;

	// item3 on
	items_flag |= opt3;
	cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

	// item3 lost
	items_flag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(items_flag) << endl;

	// has item1 ?
	if (items_flag & opt1) { cout << "Has Item1 " << endl; }
	else { cout << "Not have Item1 " << endl; }

	// has item0 ?
	if (items_flag & opt0) { cout << "Has Item0 " << endl; }
	else { cout << "Not have Item0 " << endl; }

	// obtain item 2, 3
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2, 3 obtained " << bitset<8>(items_flag) << endl;

	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		// ������ �ִ°� �Ұ� �ϰ� ���°� ������ �Ѵ�.
		items_flag ^= opt2;
		items_flag ^= opt1;
	}

	cout << bitset<8>(items_flag) << endl;



	// ��Ʈ �÷����� �ǿ��� ��� ����
	// glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	// ��Ʈ ����ũ
	// rgb color table ���� �˻�
	// ���� ǥ���� �� ����Ѵ�. #FFFFFF
	// rgb�� ���ĸ� �־ �� 4byte�� ���� ��쵵 �ִ�.

	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;
	cout << bitset<32>(red_mask) << endl;
	cout << bitset<32>(green_mask) << endl;
	cout << bitset<32>(blue_mask) << endl;

	unsigned int pixel_color = 0xDAA520;//0x00DAA520
	cout << bitset<32>(pixel_color) << endl;

	unsigned char red, green, blue;

	blue = pixel_color & blue_mask;
	cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;
	green = (pixel_color & green_mask) >> 8;
	cout << "green " << bitset<8>(green) << " " << int(green) << endl;

	return 0;
}