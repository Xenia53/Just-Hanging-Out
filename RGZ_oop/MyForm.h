#pragma once
#include <string>
using namespace std;

namespace RGZ_oop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			pictureBox1->Hide();
			pictureBox2->Hide();
			pictureBox3->Hide();
			pictureBox4->Hide();
			pictureBox5->Hide();
			pictureBox6->Hide();
			pictureBox7->Hide();
			pictureBox8->Hide();
			pictureBox9->Hide();
			pictureBox10->Hide();
			pictureBox11->Hide();
			pictureBox12->Hide();
			pictureBox13->Hide();
			pictureBox14->Hide();
			pictureBox15->Hide();
			pictureBox16->Hide();
			pictureBox17->Hide();
			pictureBox18->Hide();
			pictureBox19->Hide();
			pictureBox20->Hide();
			pictureBox21->Hide();
			pictureBox22->Hide();
			pictureBox23->Hide();
			pictureBox24->Hide();
			pictureBox25->Hide();
			pictureBox26->Hide();
			pictureBox27->Hide();
			pictureBox28->Hide();
			pictureBox29->Hide();
			pictureBox30->Hide();
			pictureBox31->Hide();
			pictureBox32->Hide();
			pictureBox33->Hide();
			pictureBox34->Hide();
			pictureBox35->Hide();
			pictureBox36->Hide();
			pictureBox37->Hide();
			pictureBox38->Hide();
			pictureBox39->Hide();
			pictureBox40->Hide();
			pictureBox41->Hide();
			pictureBox42->Hide();
			pictureBox43->Hide();
			pictureBox44->Hide();
			pictureBox45->Hide();
			pictureBox52->Hide();
			pictureBox53->Hide();
			pictureBox50->Image = Image::FromFile("1.jpg");
			pictureBox51->Hide();
		}

		void Loser(char* Word)
		{
			if (*(Word) == 'а')
				pictureBox34->Image = Image::FromFile("a.jpg");
			if (*(Word) == 'б')
				pictureBox34->Image = Image::FromFile("b.jpg");
			if (*(Word) == 'в')
				pictureBox34->Image = Image::FromFile("v.jpg");
			if (*(Word) == 'г')
				pictureBox34->Image = Image::FromFile("g.jpg");
			if (*(Word) == 'д')
				pictureBox34->Image = Image::FromFile("d.jpg");
			if (*(Word) == 'е')
				pictureBox34->Image = Image::FromFile("e.jpg");
			if (*(Word) == 'Є')
				pictureBox34->Image = Image::FromFile("e.jpg");
			if (*(Word) == 'ж')
				pictureBox34->Image = Image::FromFile("ж.png");
			if (*(Word) == 'з')
				pictureBox34->Image = Image::FromFile("з.jpg");
			if (*(Word) == 'и')
				pictureBox34->Image = Image::FromFile("и.jpg");
			if (*(Word) == 'й')
				pictureBox34->Image = Image::FromFile("и.jpg");
			if (*(Word) == 'к')
				pictureBox34->Image = Image::FromFile("к.jpg");
			if (*(Word) == 'л')
				pictureBox34->Image = Image::FromFile("л.jpg");
			if (*(Word) == 'м')
				pictureBox34->Image = Image::FromFile("m.jpg");
			if (*(Word) == 'н')
				pictureBox34->Image = Image::FromFile("н.jpg");
			if (*(Word) == 'о')
				pictureBox34->Image = Image::FromFile("o.png");
			if (*(Word) == 'п')
				pictureBox34->Image = Image::FromFile("п.jpg");
			if (*(Word) == 'р')
				pictureBox34->Image = Image::FromFile("р.jpg");
			if (*(Word) == 'с')
				pictureBox34->Image = Image::FromFile("с.jpg");
			if (*(Word) == 'т')
				pictureBox34->Image = Image::FromFile("т.jpg");
			if (*(Word) == 'у')
				pictureBox34->Image = Image::FromFile("у.jpg");
			if (*(Word) == 'ф')
				pictureBox34->Image = Image::FromFile("ф.jpg");
			if (*(Word) == 'х')
				pictureBox34->Image = Image::FromFile("х.png");
			if (*(Word) == 'ц')
				pictureBox34->Image = Image::FromFile("ц.jpg");
			if (*(Word) == 'ч')
				pictureBox34->Image = Image::FromFile("ч.jpg");
			if (*(Word) == 'ш')
				pictureBox34->Image = Image::FromFile("ш.jpg");
			if (*(Word) == 'щ')
				pictureBox34->Image = Image::FromFile("щ.jpg");
			if (*(Word) == 'ы')
				pictureBox34->Image = Image::FromFile("ы.jpg");
			if (*(Word) == 'ь')
				pictureBox34->Image = Image::FromFile("ь.jpg");
			if (*(Word) == 'ъ')
				pictureBox34->Image = Image::FromFile("ь.jpg");
			if (*(Word) == 'э')
				pictureBox34->Image = Image::FromFile("э.jpg");
			if (*(Word) == 'ю')
				pictureBox34->Image = Image::FromFile("ю.jpg");
			if (*(Word) == '€')
				pictureBox34->Image = Image::FromFile("€.jpg");

			if (*(Word+1) == 'а')
				pictureBox35->Image = Image::FromFile("a.jpg");
			if (*(Word + 1) == 'б')
				pictureBox35->Image = Image::FromFile("b.jpg");
			if (*(Word + 1) == 'в')
				pictureBox35->Image = Image::FromFile("v.jpg");
			if (*(Word + 1) == 'г')
				pictureBox35->Image = Image::FromFile("g.jpg");
			if (*(Word + 1) == 'д')
				pictureBox35->Image = Image::FromFile("d.jpg");
			if (*(Word + 1) == 'е')
				pictureBox35->Image = Image::FromFile("e.jpg");
			if (*(Word + 1) == 'Є')
				pictureBox35->Image = Image::FromFile("Є.jpg");
			if (*(Word + 1) == 'ж')
				pictureBox35->Image = Image::FromFile("ж.png");
			if (*(Word + 1) == 'з')
				pictureBox35->Image = Image::FromFile("з.jpg");
			if (*(Word + 1) == 'и')
				pictureBox35->Image = Image::FromFile("и.jpg");
			if (*(Word + 1) == 'й')
				pictureBox35->Image = Image::FromFile("й.jpg");
			if (*(Word + 1) == 'к')
				pictureBox35->Image = Image::FromFile("к.jpg");
			if (*(Word + 1) == 'л')
				pictureBox35->Image = Image::FromFile("л.jpg");
			if (*(Word + 1) == 'м')
				pictureBox35->Image = Image::FromFile("m.jpg");
			if (*(Word + 1) == 'н')
				pictureBox35->Image = Image::FromFile("н.jpg");
			if (*(Word + 1) == 'о')
				pictureBox35->Image = Image::FromFile("o.png");
			if (*(Word + 1) == 'п')
				pictureBox35->Image = Image::FromFile("п.jpg");
			if (*(Word + 1) == 'р')
				pictureBox35->Image = Image::FromFile("р.jpg");
			if (*(Word + 1) == 'с')
				pictureBox35->Image = Image::FromFile("с.jpg");
			if (*(Word + 1) == 'т')
				pictureBox35->Image = Image::FromFile("т.jpg");
			if (*(Word + 1) == 'у')
				pictureBox35->Image = Image::FromFile("у.jpg");
			if (*(Word + 1) == 'ф')
				pictureBox35->Image = Image::FromFile("ф.jpg");
			if (*(Word + 1) == 'х')
				pictureBox35->Image = Image::FromFile("х.png");
			if (*(Word + 1) == 'ц')
				pictureBox35->Image = Image::FromFile("ц.jpg");
			if (*(Word + 1) == 'ч')
				pictureBox35->Image = Image::FromFile("ч.jpg");
			if (*(Word + 1) == 'ш')
				pictureBox35->Image = Image::FromFile("ш.jpg");
			if (*(Word + 1) == 'щ')
				pictureBox35->Image = Image::FromFile("щ.jpg");
			if (*(Word + 1) == 'ы')
				pictureBox35->Image = Image::FromFile("ы.jpg");
			if (*(Word + 1) == 'ь')
				pictureBox35->Image = Image::FromFile("ь.jpg");
			if (*(Word + 1) == 'ъ')
				pictureBox35->Image = Image::FromFile("ъ.jpg");
			if (*(Word + 1) == 'э')
				pictureBox35->Image = Image::FromFile("э.jpg");
			if (*(Word + 1) == 'ю')
				pictureBox35->Image = Image::FromFile("ю.jpg");
			if (*(Word + 1) == '€')
				pictureBox35->Image = Image::FromFile("€.jpg");

			if (*(Word + 2) == 'а')
				pictureBox36->Image = Image::FromFile("a.jpg");
			if (*(Word + 2) == 'б')
				pictureBox36->Image = Image::FromFile("b.jpg");
			if (*(Word + 2) == 'в')
				pictureBox36->Image = Image::FromFile("v.jpg");
			if (*(Word + 2) == 'г')
				pictureBox36->Image = Image::FromFile("g.jpg");
			if (*(Word + 2) == 'д')
				pictureBox36->Image = Image::FromFile("d.jpg");
			if (*(Word + 2) == 'е')
				pictureBox36->Image = Image::FromFile("e.jpg");
			if (*(Word + 2) == 'Є')
				pictureBox36->Image = Image::FromFile("Є.jpg");
			if (*(Word + 2) == 'ж')
				pictureBox36->Image = Image::FromFile("ж.png");
			if (*(Word + 2) == 'з')
				pictureBox36->Image = Image::FromFile("з.jpg");
			if (*(Word + 2) == 'и')
				pictureBox36->Image = Image::FromFile("и.jpg");
			if (*(Word + 2) == 'й')
				pictureBox36->Image = Image::FromFile("й.jpg");
			if (*(Word + 2) == 'к')
				pictureBox36->Image = Image::FromFile("к.jpg");
			if (*(Word + 2) == 'л')
				pictureBox36->Image = Image::FromFile("л.jpg");
			if (*(Word + 2) == 'м')
				pictureBox36->Image = Image::FromFile("m.jpg");
			if (*(Word + 2) == 'н')
				pictureBox36->Image = Image::FromFile("н.jpg");
			if (*(Word + 2) == 'о')
				pictureBox36->Image = Image::FromFile("o.png");
			if (*(Word + 2) == 'п')
				pictureBox36->Image = Image::FromFile("п.jpg");
			if (*(Word + 2) == 'р')
				pictureBox36->Image = Image::FromFile("р.jpg");
			if (*(Word + 2) == 'с')
				pictureBox36->Image = Image::FromFile("с.jpg");
			if (*(Word + 2) == 'т')
				pictureBox36->Image = Image::FromFile("т.jpg");
			if (*(Word + 2) == 'у')
				pictureBox36->Image = Image::FromFile("у.jpg");
			if (*(Word + 2) == 'ф')
				pictureBox36->Image = Image::FromFile("ф.jpg");
			if (*(Word + 2) == 'х')
				pictureBox36->Image = Image::FromFile("х.png");
			if (*(Word + 2) == 'ц')
				pictureBox36->Image = Image::FromFile("ц.jpg");
			if (*(Word + 2) == 'ч')
				pictureBox36->Image = Image::FromFile("ч.jpg");
			if (*(Word + 2) == 'ш')
				pictureBox36->Image = Image::FromFile("ш.jpg");
			if (*(Word + 2) == 'щ')
				pictureBox36->Image = Image::FromFile("щ.jpg");
			if (*(Word + 2) == 'ы')
				pictureBox36->Image = Image::FromFile("ы.jpg");
			if (*(Word + 2) == 'ь')
				pictureBox36->Image = Image::FromFile("ь.jpg");
			if (*(Word + 2) == 'ъ')
				pictureBox36->Image = Image::FromFile("ъ.jpg");
			if (*(Word + 2) == 'э')
				pictureBox36->Image = Image::FromFile("э.jpg");
			if (*(Word + 2) == 'ю')
				pictureBox36->Image = Image::FromFile("ю.jpg");
			if (*(Word + 2) == '€')
				pictureBox36->Image = Image::FromFile("€.jpg");

			if (*(Word + 3) == 'а')
				pictureBox37->Image = Image::FromFile("a.jpg");
			if (*(Word + 3) == 'б')
				pictureBox37->Image = Image::FromFile("b.jpg");
			if (*(Word + 3) == 'в')
				pictureBox37->Image = Image::FromFile("v.jpg");
			if (*(Word + 3) == 'г')
				pictureBox37->Image = Image::FromFile("g.jpg");
			if (*(Word + 3) == 'д')
				pictureBox37->Image = Image::FromFile("d.jpg");
			if (*(Word + 3) == 'е')
				pictureBox37->Image = Image::FromFile("e.jpg");
			if (*(Word + 3) == 'Є')
				pictureBox37->Image = Image::FromFile("Є.jpg");
			if (*(Word + 3) == 'ж')
				pictureBox37->Image = Image::FromFile("ж.png");
			if (*(Word + 3) == 'з')
				pictureBox37->Image = Image::FromFile("з.jpg");
			if (*(Word + 3) == 'и')
				pictureBox37->Image = Image::FromFile("и.jpg");
			if (*(Word + 3) == 'й')
				pictureBox37->Image = Image::FromFile("й.jpg");
			if (*(Word + 3) == 'к')
				pictureBox37->Image = Image::FromFile("к.jpg");
			if (*(Word + 3) == 'л')
				pictureBox37->Image = Image::FromFile("л.jpg");
			if (*(Word + 3) == 'м')
				pictureBox37->Image = Image::FromFile("m.jpg");
			if (*(Word + 3) == 'н')
				pictureBox37->Image = Image::FromFile("н.jpg");
			if (*(Word + 3) == 'о')
				pictureBox37->Image = Image::FromFile("o.png");
			if (*(Word + 3) == 'п')
				pictureBox37->Image = Image::FromFile("п.jpg");
			if (*(Word + 3) == 'р')
				pictureBox37->Image = Image::FromFile("р.jpg");
			if (*(Word + 3) == 'с')
				pictureBox37->Image = Image::FromFile("с.jpg");
			if (*(Word + 3) == 'т')
				pictureBox37->Image = Image::FromFile("т.jpg");
			if (*(Word + 3) == 'у')
				pictureBox37->Image = Image::FromFile("у.jpg");
			if (*(Word + 3) == 'ф')
				pictureBox37->Image = Image::FromFile("ф.jpg");
			if (*(Word + 3) == 'х')
				pictureBox37->Image = Image::FromFile("х.png");
			if (*(Word + 3) == 'ц')
				pictureBox37->Image = Image::FromFile("ц.jpg");
			if (*(Word + 3) == 'ч')
				pictureBox37->Image = Image::FromFile("ч.jpg");
			if (*(Word + 3) == 'ш')
				pictureBox37->Image = Image::FromFile("ш.jpg");
			if (*(Word + 3) == 'щ')
				pictureBox37->Image = Image::FromFile("щ.jpg");
			if (*(Word + 3) == 'ы')
				pictureBox37->Image = Image::FromFile("ы.jpg");
			if (*(Word + 3) == 'ь')
				pictureBox37->Image = Image::FromFile("ь.jpg");
			if (*(Word + 3) == 'ъ')
				pictureBox37->Image = Image::FromFile("ъ.jpg");
			if (*(Word + 3) == 'э')
				pictureBox37->Image = Image::FromFile("э.jpg");
			if (*(Word + 3) == 'ю')
				pictureBox37->Image = Image::FromFile("ю.jpg");
			if (*(Word + 3) == '€')
				pictureBox37->Image = Image::FromFile("€.jpg");

			if (*(Word + 4) == 'а')
				pictureBox38->Image = Image::FromFile("a.jpg");
			if (*(Word + 4) == 'б')
				pictureBox38->Image = Image::FromFile("b.jpg");
			if (*(Word + 4) == 'в')
				pictureBox38->Image = Image::FromFile("v.jpg");
			if (*(Word + 4) == 'г')
				pictureBox38->Image = Image::FromFile("g.jpg");
			if (*(Word + 4) == 'д')
				pictureBox38->Image = Image::FromFile("d.jpg");
			if (*(Word + 4) == 'е')
				pictureBox38->Image = Image::FromFile("e.jpg");
			if (*(Word + 4) == 'Є')
				pictureBox38->Image = Image::FromFile("Є.jpg");
			if (*(Word + 4) == 'ж')
				pictureBox38->Image = Image::FromFile("ж.png");
			if (*(Word + 4) == 'з')
				pictureBox38->Image = Image::FromFile("з.jpg");
			if (*(Word + 4) == 'и')
				pictureBox38->Image = Image::FromFile("и.jpg");
			if (*(Word + 4) == 'й')
				pictureBox38->Image = Image::FromFile("й.jpg");
			if (*(Word + 4) == 'к')
				pictureBox38->Image = Image::FromFile("к.jpg");
			if (*(Word + 4) == 'л')
				pictureBox38->Image = Image::FromFile("л.jpg");
			if (*(Word + 4) == 'м')
				pictureBox38->Image = Image::FromFile("m.jpg");
			if (*(Word + 4) == 'н')
				pictureBox38->Image = Image::FromFile("н.jpg");
			if (*(Word + 4) == 'о')
				pictureBox38->Image = Image::FromFile("o.png");
			if (*(Word + 4) == 'п')
				pictureBox38->Image = Image::FromFile("п.jpg");
			if (*(Word + 4) == 'р')
				pictureBox38->Image = Image::FromFile("р.jpg");
			if (*(Word + 4) == 'с')
				pictureBox38->Image = Image::FromFile("с.jpg");
			if (*(Word + 4) == 'т')
				pictureBox38->Image = Image::FromFile("т.jpg");
			if (*(Word + 4) == 'у')
				pictureBox38->Image = Image::FromFile("у.jpg");
			if (*(Word + 4) == 'ф')
				pictureBox38->Image = Image::FromFile("ф.jpg");
			if (*(Word + 4) == 'х')
				pictureBox38->Image = Image::FromFile("х.png");
			if (*(Word + 4) == 'ц')
				pictureBox38->Image = Image::FromFile("ц.jpg");
			if (*(Word + 4) == 'ч')
				pictureBox38->Image = Image::FromFile("ч.jpg");
			if (*(Word + 4) == 'ш')
				pictureBox38->Image = Image::FromFile("ш.jpg");
			if (*(Word + 4) == 'щ')
				pictureBox38->Image = Image::FromFile("щ.jpg");
			if (*(Word + 4) == 'ы')
				pictureBox38->Image = Image::FromFile("ы.jpg");
			if (*(Word + 4) == 'ь')
				pictureBox38->Image = Image::FromFile("ь.jpg");
			if (*(Word + 4) == 'ъ')
				pictureBox38->Image = Image::FromFile("ъ.jpg");
			if (*(Word + 4) == 'э')
				pictureBox38->Image = Image::FromFile("э.jpg");
			if (*(Word + 4) == 'ю')
				pictureBox38->Image = Image::FromFile("ю.jpg");
			if (*(Word + 4) == '€')
				pictureBox38->Image = Image::FromFile("€.jpg");

			if (*(Word + 5) == 'а')
				pictureBox39->Image = Image::FromFile("a.jpg");
			if (*(Word + 5) == 'б')
				pictureBox39->Image = Image::FromFile("b.jpg");
			if (*(Word + 5) == 'в')
				pictureBox39->Image = Image::FromFile("v.jpg");
			if (*(Word + 5) == 'г')
				pictureBox39->Image = Image::FromFile("g.jpg");
			if (*(Word + 5) == 'д')
				pictureBox39->Image = Image::FromFile("d.jpg");
			if (*(Word + 5) == 'е')
				pictureBox39->Image = Image::FromFile("e.jpg");
			if (*(Word + 5) == 'Є')
				pictureBox39->Image = Image::FromFile("Є.jpg");
			if (*(Word + 5) == 'ж')
				pictureBox39->Image = Image::FromFile("ж.png");
			if (*(Word + 5) == 'з')
				pictureBox39->Image = Image::FromFile("з.jpg");
			if (*(Word + 5) == 'и')
				pictureBox39->Image = Image::FromFile("и.jpg");
			if (*(Word + 5) == 'й')
				pictureBox39->Image = Image::FromFile("й.jpg");
			if (*(Word + 5) == 'к')
				pictureBox39->Image = Image::FromFile("к.jpg");
			if (*(Word + 5) == 'л')
				pictureBox39->Image = Image::FromFile("л.jpg");
			if (*(Word + 5) == 'м')
				pictureBox39->Image = Image::FromFile("m.jpg");
			if (*(Word + 5) == 'н')
				pictureBox39->Image = Image::FromFile("н.jpg");
			if (*(Word + 5) == 'о')
				pictureBox39->Image = Image::FromFile("o.png");
			if (*(Word + 5) == 'п')
				pictureBox39->Image = Image::FromFile("п.jpg");
			if (*(Word + 5) == 'р')
				pictureBox39->Image = Image::FromFile("р.jpg");
			if (*(Word + 5) == 'с')
				pictureBox39->Image = Image::FromFile("с.jpg");
			if (*(Word + 5) == 'т')
				pictureBox39->Image = Image::FromFile("т.jpg");
			if (*(Word + 5) == 'у')
				pictureBox39->Image = Image::FromFile("у.jpg");
			if (*(Word + 5) == 'ф')
				pictureBox39->Image = Image::FromFile("ф.jpg");
			if (*(Word + 5) == 'х')
				pictureBox39->Image = Image::FromFile("х.png");
			if (*(Word + 5) == 'ц')
				pictureBox39->Image = Image::FromFile("ц.jpg");
			if (*(Word + 5) == 'ч')
				pictureBox39->Image = Image::FromFile("ч.jpg");
			if (*(Word + 5) == 'ш')
				pictureBox39->Image = Image::FromFile("ш.jpg");
			if (*(Word + 5) == 'щ')
				pictureBox39->Image = Image::FromFile("щ.jpg");
			if (*(Word + 5) == 'ы')
				pictureBox39->Image = Image::FromFile("ы.jpg");
			if (*(Word + 5) == 'ь')
				pictureBox39->Image = Image::FromFile("ь.jpg");
			if (*(Word + 5) == 'ъ')
				pictureBox39->Image = Image::FromFile("ъ.jpg");
			if (*(Word + 5) == 'э')
				pictureBox39->Image = Image::FromFile("э.jpg");
			if (*(Word + 5) == 'ю')
				pictureBox39->Image = Image::FromFile("ю.jpg");
			if (*(Word + 5) == '€')
				pictureBox39->Image = Image::FromFile("€.jpg");

			if (*(Word + 6) == 'а')
				pictureBox40->Image = Image::FromFile("a.jpg");
			if (*(Word + 6) == 'б')
				pictureBox40->Image = Image::FromFile("b.jpg");
			if (*(Word + 6) == 'в')
				pictureBox40->Image = Image::FromFile("v.jpg");
			if (*(Word + 6) == 'г')
				pictureBox40->Image = Image::FromFile("g.jpg");
			if (*(Word + 6) == 'д')
				pictureBox40->Image = Image::FromFile("d.jpg");
			if (*(Word + 6) == 'е')
				pictureBox40->Image = Image::FromFile("e.jpg");
			if (*(Word + 6) == 'Є')
				pictureBox40->Image = Image::FromFile("Є.jpg");
			if (*(Word + 6) == 'ж')
				pictureBox40->Image = Image::FromFile("ж.png");
			if (*(Word + 6) == 'з')
				pictureBox40->Image = Image::FromFile("з.jpg");
			if (*(Word + 6) == 'и')
				pictureBox40->Image = Image::FromFile("и.jpg");
			if (*(Word + 6) == 'й')
				pictureBox40->Image = Image::FromFile("й.jpg");
			if (*(Word + 6) == 'к')
				pictureBox40->Image = Image::FromFile("к.jpg");
			if (*(Word + 6) == 'л')
				pictureBox40->Image = Image::FromFile("л.jpg");
			if (*(Word + 6) == 'м')
				pictureBox40->Image = Image::FromFile("m.jpg");
			if (*(Word + 6) == 'н')
				pictureBox40->Image = Image::FromFile("н.jpg");
			if (*(Word + 6) == 'о')
				pictureBox40->Image = Image::FromFile("o.png");
			if (*(Word + 6) == 'п')
				pictureBox40->Image = Image::FromFile("п.jpg");
			if (*(Word + 6) == 'р')
				pictureBox40->Image = Image::FromFile("р.jpg");
			if (*(Word + 6) == 'с')
				pictureBox40->Image = Image::FromFile("с.jpg");
			if (*(Word + 6) == 'т')
				pictureBox40->Image = Image::FromFile("т.jpg");
			if (*(Word + 6) == 'у')
				pictureBox40->Image = Image::FromFile("у.jpg");
			if (*(Word + 6) == 'ф')
				pictureBox40->Image = Image::FromFile("ф.jpg");
			if (*(Word + 6) == 'х')
				pictureBox40->Image = Image::FromFile("х.png");
			if (*(Word + 6) == 'ц')
				pictureBox40->Image = Image::FromFile("ц.jpg");
			if (*(Word + 6) == 'ч')
				pictureBox40->Image = Image::FromFile("ч.jpg");
			if (*(Word + 6) == 'ш')
				pictureBox40->Image = Image::FromFile("ш.jpg");
			if (*(Word + 6) == 'щ')
				pictureBox40->Image = Image::FromFile("щ.jpg");
			if (*(Word + 6) == 'ы')
				pictureBox40->Image = Image::FromFile("ы.jpg");
			if (*(Word + 6) == 'ь')
				pictureBox40->Image = Image::FromFile("ь.jpg");
			if (*(Word + 6) == 'ъ')
				pictureBox40->Image = Image::FromFile("ъ.jpg");
			if (*(Word + 6) == 'э')
				pictureBox40->Image = Image::FromFile("э.jpg");
			if (*(Word + 6) == 'ю')
				pictureBox40->Image = Image::FromFile("ю.jpg");
			if (*(Word + 6) == '€')
				pictureBox40->Image = Image::FromFile("€.jpg");

			if (*(Word + 7) == 'а')
				pictureBox41->Image = Image::FromFile("a.jpg");
			if (*(Word + 7) == 'б')
				pictureBox41->Image = Image::FromFile("b.jpg");
			if (*(Word + 7) == 'в')
				pictureBox41->Image = Image::FromFile("v.jpg");
			if (*(Word + 7) == 'г')
				pictureBox41->Image = Image::FromFile("g.jpg");
			if (*(Word + 7) == 'д')
				pictureBox41->Image = Image::FromFile("d.jpg");
			if (*(Word + 7) == 'е')
				pictureBox41->Image = Image::FromFile("e.jpg");
			if (*(Word + 7) == 'Є')
				pictureBox41->Image = Image::FromFile("Є.jpg");
			if (*(Word + 7) == 'ж')
				pictureBox41->Image = Image::FromFile("ж.png");
			if (*(Word + 7) == 'з')
				pictureBox41->Image = Image::FromFile("з.jpg");
			if (*(Word + 7) == 'и')
				pictureBox41->Image = Image::FromFile("и.jpg");
			if (*(Word + 7) == 'й')
				pictureBox41->Image = Image::FromFile("й.jpg");
			if (*(Word + 7) == 'к')
				pictureBox41->Image = Image::FromFile("к.jpg");
			if (*(Word + 7) == 'л')
				pictureBox41->Image = Image::FromFile("л.jpg");
			if (*(Word + 7) == 'м')
				pictureBox41->Image = Image::FromFile("m.jpg");
			if (*(Word + 7) == 'н')
				pictureBox41->Image = Image::FromFile("н.jpg");
			if (*(Word + 7) == 'о')
				pictureBox41->Image = Image::FromFile("o.png");
			if (*(Word + 7) == 'п')
				pictureBox41->Image = Image::FromFile("п.jpg");
			if (*(Word + 7) == 'р')
				pictureBox41->Image = Image::FromFile("р.jpg");
			if (*(Word + 7) == 'с')
				pictureBox41->Image = Image::FromFile("с.jpg");
			if (*(Word + 7) == 'т')
				pictureBox41->Image = Image::FromFile("т.jpg");
			if (*(Word + 7) == 'у')
				pictureBox41->Image = Image::FromFile("у.jpg");
			if (*(Word + 7) == 'ф')
				pictureBox41->Image = Image::FromFile("ф.jpg");
			if (*(Word + 7) == 'х')
				pictureBox41->Image = Image::FromFile("х.png");
			if (*(Word + 7) == 'ц')
				pictureBox41->Image = Image::FromFile("ц.jpg");
			if (*(Word + 7) == 'ч')
				pictureBox41->Image = Image::FromFile("ч.jpg");
			if (*(Word + 7) == 'ш')
				pictureBox41->Image = Image::FromFile("ш.jpg");
			if (*(Word + 7) == 'щ')
				pictureBox41->Image = Image::FromFile("щ.jpg");
			if (*(Word + 7) == 'ы')
				pictureBox41->Image = Image::FromFile("ы.jpg");
			if (*(Word + 7) == 'ь')
				pictureBox41->Image = Image::FromFile("ь.jpg");
			if (*(Word + 7) == 'ъ')
				pictureBox41->Image = Image::FromFile("ъ.jpg");
			if (*(Word + 7) == 'э')
				pictureBox41->Image = Image::FromFile("э.jpg");
			if (*(Word + 7) == 'ю')
				pictureBox41->Image = Image::FromFile("ю.jpg");
			if (*(Word + 7) == '€')
				pictureBox41->Image = Image::FromFile("€.jpg");

			if (*(Word + 8) == 'а')
				pictureBox42->Image = Image::FromFile("a.jpg");
			if (*(Word + 8) == 'б')
				pictureBox42->Image = Image::FromFile("b.jpg");
			if (*(Word + 8) == 'в')
				pictureBox42->Image = Image::FromFile("v.jpg");
			if (*(Word + 8) == 'г')
				pictureBox42->Image = Image::FromFile("g.jpg");
			if (*(Word + 8) == 'д')
				pictureBox42->Image = Image::FromFile("d.jpg");
			if (*(Word + 8) == 'е')
				pictureBox42->Image = Image::FromFile("e.jpg");
			if (*(Word + 8) == 'Є')
				pictureBox42->Image = Image::FromFile("Є.jpg");
			if (*(Word + 8) == 'ж')
				pictureBox42->Image = Image::FromFile("ж.png");
			if (*(Word + 8) == 'з')
				pictureBox42->Image = Image::FromFile("з.jpg");
			if (*(Word + 8) == 'и')
				pictureBox42->Image = Image::FromFile("и.jpg");
			if (*(Word + 8) == 'й')
				pictureBox42->Image = Image::FromFile("й.jpg");
			if (*(Word + 8) == 'к')
				pictureBox42->Image = Image::FromFile("к.jpg");
			if (*(Word + 8) == 'л')
				pictureBox42->Image = Image::FromFile("л.jpg");
			if (*(Word + 8) == 'м')
				pictureBox42->Image = Image::FromFile("m.jpg");
			if (*(Word + 8) == 'н')
				pictureBox42->Image = Image::FromFile("н.jpg");
			if (*(Word + 8) == 'о')
				pictureBox42->Image = Image::FromFile("o.png");
			if (*(Word + 8) == 'п')
				pictureBox42->Image = Image::FromFile("п.jpg");
			if (*(Word + 8) == 'р')
				pictureBox42->Image = Image::FromFile("р.jpg");
			if (*(Word + 8) == 'с')
				pictureBox42->Image = Image::FromFile("с.jpg");
			if (*(Word + 8) == 'т')
				pictureBox42->Image = Image::FromFile("т.jpg");
			if (*(Word + 8) == 'у')
				pictureBox42->Image = Image::FromFile("у.jpg");
			if (*(Word + 8) == 'ф')
				pictureBox42->Image = Image::FromFile("ф.jpg");
			if (*(Word + 8) == 'х')
				pictureBox42->Image = Image::FromFile("х.png");
			if (*(Word + 8) == 'ц')
				pictureBox42->Image = Image::FromFile("ц.jpg");
			if (*(Word + 8) == 'ч')
				pictureBox42->Image = Image::FromFile("ч.jpg");
			if (*(Word + 8) == 'ш')
				pictureBox42->Image = Image::FromFile("ш.jpg");
			if (*(Word + 8) == 'щ')
				pictureBox42->Image = Image::FromFile("щ.jpg");
			if (*(Word + 8) == 'ы')
				pictureBox42->Image = Image::FromFile("ы.jpg");
			if (*(Word + 8) == 'ь')
				pictureBox42->Image = Image::FromFile("ь.jpg");
			if (*(Word + 8) == 'ъ')
				pictureBox42->Image = Image::FromFile("ъ.jpg");
			if (*(Word + 8) == 'э')
				pictureBox42->Image = Image::FromFile("э.jpg");
			if (*(Word + 8) == 'ю')
				pictureBox42->Image = Image::FromFile("ю.jpg");
			if (*(Word + 8) == '€')
				pictureBox42->Image = Image::FromFile("€.jpg");

			if (*(Word + 9) == 'а')
				pictureBox43->Image = Image::FromFile("a.jpg");
			if (*(Word + 9) == 'б')
				pictureBox43->Image = Image::FromFile("b.jpg");
			if (*(Word + 9) == 'в')
				pictureBox43->Image = Image::FromFile("v.jpg");
			if (*(Word + 9) == 'г')
				pictureBox43->Image = Image::FromFile("g.jpg");
			if (*(Word + 9) == 'д')
				pictureBox43->Image = Image::FromFile("d.jpg");
			if (*(Word + 9) == 'е')
				pictureBox43->Image = Image::FromFile("e.jpg");
			if (*(Word + 9) == 'Є')
				pictureBox43->Image = Image::FromFile("Є.jpg");
			if (*(Word + 9) == 'ж')
				pictureBox43->Image = Image::FromFile("ж.png");
			if (*(Word + 9) == 'з')
				pictureBox43->Image = Image::FromFile("з.jpg");
			if (*(Word + 9) == 'и')
				pictureBox43->Image = Image::FromFile("и.jpg");
			if (*(Word + 9) == 'й')
				pictureBox43->Image = Image::FromFile("й.jpg");
			if (*(Word + 9) == 'к')
				pictureBox43->Image = Image::FromFile("к.jpg");
			if (*(Word + 9) == 'л')
				pictureBox43->Image = Image::FromFile("л.jpg");
			if (*(Word + 9) == 'м')
				pictureBox43->Image = Image::FromFile("m.jpg");
			if (*(Word + 9) == 'н')
				pictureBox43->Image = Image::FromFile("н.jpg");
			if (*(Word + 9) == 'о')
				pictureBox43->Image = Image::FromFile("o.png");
			if (*(Word + 9) == 'п')
				pictureBox43->Image = Image::FromFile("п.jpg");
			if (*(Word + 9) == 'р')
				pictureBox43->Image = Image::FromFile("р.jpg");
			if (*(Word + 9) == 'с')
				pictureBox43->Image = Image::FromFile("с.jpg");
			if (*(Word + 9) == 'т')
				pictureBox43->Image = Image::FromFile("т.jpg");
			if (*(Word + 9) == 'у')
				pictureBox43->Image = Image::FromFile("у.jpg");
			if (*(Word + 9) == 'ф')
				pictureBox43->Image = Image::FromFile("ф.jpg");
			if (*(Word + 9) == 'х')
				pictureBox43->Image = Image::FromFile("х.png");
			if (*(Word + 9) == 'ц')
				pictureBox43->Image = Image::FromFile("ц.jpg");
			if (*(Word + 9) == 'ч')
				pictureBox43->Image = Image::FromFile("ч.jpg");
			if (*(Word + 9) == 'ш')
				pictureBox43->Image = Image::FromFile("ш.jpg");
			if (*(Word + 9) == 'щ')
				pictureBox43->Image = Image::FromFile("щ.jpg");
			if (*(Word + 9) == 'ы')
				pictureBox43->Image = Image::FromFile("ы.jpg");
			if (*(Word + 9) == 'ь')
				pictureBox43->Image = Image::FromFile("ь.jpg");
			if (*(Word + 9) == 'ъ')
				pictureBox43->Image = Image::FromFile("ъ.jpg");
			if (*(Word + 9) == 'э')
				pictureBox43->Image = Image::FromFile("э.jpg");
			if (*(Word + 9) == 'ю')
				pictureBox43->Image = Image::FromFile("ю.jpg");
			if (*(Word + 9) == '€')
				pictureBox43->Image = Image::FromFile("€.jpg");

			if (*(Word + 10) == 'а')
				pictureBox44->Image = Image::FromFile("a.jpg");
			if (*(Word + 10) == 'б')
				pictureBox44->Image = Image::FromFile("b.jpg");
			if (*(Word + 10) == 'в')
				pictureBox44->Image = Image::FromFile("v.jpg");
			if (*(Word + 10) == 'г')
				pictureBox44->Image = Image::FromFile("g.jpg");
			if (*(Word + 10) == 'д')
				pictureBox44->Image = Image::FromFile("d.jpg");
			if (*(Word + 10) == 'е')
				pictureBox44->Image = Image::FromFile("e.jpg");
			if (*(Word + 10) == 'Є')
				pictureBox44->Image = Image::FromFile("Є.jpg");
			if (*(Word + 10) == 'ж')
				pictureBox44->Image = Image::FromFile("ж.png");
			if (*(Word + 10) == 'з')
				pictureBox44->Image = Image::FromFile("з.jpg");
			if (*(Word + 10) == 'и')
				pictureBox44->Image = Image::FromFile("и.jpg");
			if (*(Word + 10) == 'й')
				pictureBox44->Image = Image::FromFile("й.jpg");
			if (*(Word + 10) == 'к')
				pictureBox44->Image = Image::FromFile("к.jpg");
			if (*(Word + 10) == 'л')
				pictureBox44->Image = Image::FromFile("л.jpg");
			if (*(Word + 10) == 'м')
				pictureBox44->Image = Image::FromFile("m.jpg");
			if (*(Word + 10) == 'н')
				pictureBox44->Image = Image::FromFile("н.jpg");
			if (*(Word + 10) == 'о')
				pictureBox44->Image = Image::FromFile("o.png");
			if (*(Word + 10) == 'п')
				pictureBox44->Image = Image::FromFile("п.jpg");
			if (*(Word + 10) == 'р')
				pictureBox44->Image = Image::FromFile("р.jpg");
			if (*(Word + 10) == 'с')
				pictureBox44->Image = Image::FromFile("с.jpg");
			if (*(Word + 10) == 'т')
				pictureBox44->Image = Image::FromFile("т.jpg");
			if (*(Word + 10) == 'у')
				pictureBox44->Image = Image::FromFile("у.jpg");
			if (*(Word + 10) == 'ф')
				pictureBox44->Image = Image::FromFile("ф.jpg");
			if (*(Word + 10) == 'х')
				pictureBox44->Image = Image::FromFile("х.png");
			if (*(Word + 10) == 'ц')
				pictureBox44->Image = Image::FromFile("ц.jpg");
			if (*(Word + 10) == 'ч')
				pictureBox44->Image = Image::FromFile("ч.jpg");
			if (*(Word + 10) == 'ш')
				pictureBox44->Image = Image::FromFile("ш.jpg");
			if (*(Word + 10) == 'щ')
				pictureBox44->Image = Image::FromFile("щ.jpg");
			if (*(Word + 10) == 'ы')
				pictureBox44->Image = Image::FromFile("ы.jpg");
			if (*(Word + 10) == 'ь')
				pictureBox44->Image = Image::FromFile("ь.jpg");
			if (*(Word + 10) == 'ъ')
				pictureBox44->Image = Image::FromFile("ъ.jpg");
			if (*(Word + 10) == 'э')
				pictureBox44->Image = Image::FromFile("э.jpg");
			if (*(Word + 10) == 'ю')
				pictureBox44->Image = Image::FromFile("ю.jpg");
			if (*(Word + 10) == '€')
				pictureBox44->Image = Image::FromFile("€.jpg");
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;

	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
private: System::Windows::Forms::PictureBox^  pictureBox46;
private: System::Windows::Forms::PictureBox^  pictureBox47;
private: System::Windows::Forms::PictureBox^  pictureBox48;

private: System::Windows::Forms::PictureBox^  pictureBox50;
private: System::Windows::Forms::PictureBox^  pictureBox51;
private: System::Windows::Forms::PictureBox^  pictureBox52;
private: System::Windows::Forms::PictureBox^  pictureBox53;


	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(365, 219);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(411, 219);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(40, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(457, 219);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 40);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(503, 219);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(40, 40);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(549, 219);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(40, 40);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(595, 219);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(40, 40);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(641, 219);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(40, 40);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(686, 219);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(40, 40);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(732, 219);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(40, 40);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(778, 219);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(40, 40);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(824, 219);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(40, 40);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(365, 265);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(40, 40);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 11;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(411, 265);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(40, 40);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(457, 265);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(40, 40);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 13;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(503, 265);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(40, 40);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 14;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(549, 265);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(40, 40);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 15;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(595, 265);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(40, 40);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 16;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &MyForm::pictureBox17_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(641, 265);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(40, 40);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 17;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &MyForm::pictureBox18_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(687, 265);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(40, 40);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 18;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &MyForm::pictureBox19_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(733, 265);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(40, 40);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 19;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &MyForm::pictureBox20_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(779, 265);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(40, 40);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 20;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &MyForm::pictureBox21_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(825, 265);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(40, 40);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 21;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &MyForm::pictureBox22_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(365, 311);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(40, 40);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 22;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &MyForm::pictureBox23_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(411, 311);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(40, 40);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox24->TabIndex = 23;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &MyForm::pictureBox24_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(457, 311);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(40, 40);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox25->TabIndex = 24;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &MyForm::pictureBox25_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(503, 311);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(40, 40);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox26->TabIndex = 25;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &MyForm::pictureBox26_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(549, 311);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(40, 40);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox27->TabIndex = 26;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &MyForm::pictureBox27_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(596, 311);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(40, 40);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox28->TabIndex = 27;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &MyForm::pictureBox28_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(641, 311);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(40, 40);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox29->TabIndex = 28;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &MyForm::pictureBox29_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(687, 311);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(40, 40);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox30->TabIndex = 29;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &MyForm::pictureBox30_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(733, 311);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(40, 40);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox31->TabIndex = 30;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &MyForm::pictureBox31_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(779, 311);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(40, 40);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox32->TabIndex = 31;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &MyForm::pictureBox32_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(825, 311);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(40, 40);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox33->TabIndex = 32;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Click += gcnew System::EventHandler(this, &MyForm::pictureBox33_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->Location = System::Drawing::Point(365, 118);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(40, 40);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox34->TabIndex = 35;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &MyForm::pictureBox34_Click);
			// 
			// pictureBox35
			// 
			this->pictureBox35->Location = System::Drawing::Point(411, 118);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(40, 40);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox35->TabIndex = 36;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Click += gcnew System::EventHandler(this, &MyForm::pictureBox35_Click);
			// 
			// pictureBox36
			// 
			this->pictureBox36->Location = System::Drawing::Point(457, 118);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(40, 40);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox36->TabIndex = 37;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &MyForm::pictureBox36_Click);
			// 
			// pictureBox37
			// 
			this->pictureBox37->Location = System::Drawing::Point(503, 118);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(40, 40);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox37->TabIndex = 40;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Click += gcnew System::EventHandler(this, &MyForm::pictureBox37_Click);
			// 
			// pictureBox38
			// 
			this->pictureBox38->Location = System::Drawing::Point(549, 118);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(40, 40);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox38->TabIndex = 39;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Click += gcnew System::EventHandler(this, &MyForm::pictureBox38_Click);
			// 
			// pictureBox39
			// 
			this->pictureBox39->Location = System::Drawing::Point(596, 118);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(40, 40);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox39->TabIndex = 38;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Click += gcnew System::EventHandler(this, &MyForm::pictureBox39_Click);
			// 
			// pictureBox40
			// 
			this->pictureBox40->Location = System::Drawing::Point(642, 118);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(40, 40);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox40->TabIndex = 41;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Click += gcnew System::EventHandler(this, &MyForm::pictureBox40_Click);
			// 
			// pictureBox41
			// 
			this->pictureBox41->Location = System::Drawing::Point(688, 118);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(40, 40);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox41->TabIndex = 42;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Click += gcnew System::EventHandler(this, &MyForm::pictureBox41_Click);
			// 
			// pictureBox42
			// 
			this->pictureBox42->Location = System::Drawing::Point(734, 118);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(40, 40);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox42->TabIndex = 43;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Click += gcnew System::EventHandler(this, &MyForm::pictureBox42_Click);
			// 
			// pictureBox43
			// 
			this->pictureBox43->Location = System::Drawing::Point(779, 118);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(40, 40);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox43->TabIndex = 44;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Click += gcnew System::EventHandler(this, &MyForm::pictureBox43_Click);
			// 
			// pictureBox44
			// 
			this->pictureBox44->Location = System::Drawing::Point(825, 118);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(40, 40);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox44->TabIndex = 45;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Click += gcnew System::EventHandler(this, &MyForm::pictureBox44_Click);
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(30, 78);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(329, 352);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox45->TabIndex = 46;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Click += gcnew System::EventHandler(this, &MyForm::pictureBox45_Click_1);
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(364, 209);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(133, 50);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox46->TabIndex = 47;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Click += gcnew System::EventHandler(this, &MyForm::pictureBox46_Click);
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(364, 357);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(133, 50);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox47->TabIndex = 48;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Click += gcnew System::EventHandler(this, &MyForm::pictureBox47_Click);
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(364, 284);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(133, 50);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox48->TabIndex = 49;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Click += gcnew System::EventHandler(this, &MyForm::pictureBox48_Click);
			// 
			// pictureBox50
			// 
			this->pictureBox50->Location = System::Drawing::Point(-8, -30);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(908, 480);
			this->pictureBox50->TabIndex = 51;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(489, 57);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(248, 27);
			this->pictureBox51->TabIndex = 52;
			this->pictureBox51->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->Location = System::Drawing::Point(413, 178);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(408, 81);
			this->pictureBox52->TabIndex = 53;
			this->pictureBox52->TabStop = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(641, 284);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(133, 50);
			this->pictureBox53->TabIndex = 54;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Click += gcnew System::EventHandler(this, &MyForm::pictureBox53_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(892, 442);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox50);
			this->Name = L"MyForm";
			this->Text = L"¬иселица";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		char Enter;
		char* Word;
		int Lose = 0;
		int Win = 0;
		int Quantity;

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'а';
			 int a = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("a.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("a.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("a.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("a.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("a.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("a.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("a.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("a.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("a.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("a.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("a.jpg");
					 a++;
					 Win++;
				 }
			 }
			 if (!a)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox1->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();

				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'б';
			 int b = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("b.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("b.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("b.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("b.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("b.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("b.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("b.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("b.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("b.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("b.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("b.jpg");
					 b++;
					 Win++;
				 }
			 }
			 if (!b)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox2->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'в';
			 int v = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("v.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("v.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("v.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("v.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("v.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("v.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("v.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("v.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("v.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("v.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("v.jpg");
					 v++;
					 Win++;
				 }
			 }
			 if (!v)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox3->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'г';
			 int g = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("g.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("g.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("g.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("g.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("g.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("g.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("g.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("g.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("g.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("g.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("g.jpg");
					 g++;
					 Win++;
				 }
			 }
			 if (!g)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox4->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'д';
			 int d = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("d.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("d.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("d.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("d.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("d.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("d.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("d.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("d.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("d.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("d.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("d.jpg");
					 d++;
					 Win++;
				 }
			 }
			 if (!d)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox5->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'е';
			 int ee = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("e.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("e.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("e.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("e.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("e.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("e.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("e.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("e.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("e.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("e.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("e.jpg");
					 ee++;
					 Win++;
				 }
			 }
			 if (!ee)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox6->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'Є';
			 int yo = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("Є.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("Є.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("Є.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("Є.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("Є.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("Є.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("Є.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("Є.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("Є.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("Є.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("Є.jpg");
					 yo++;
					 Win++;
				 }
			 }
			 if (!yo)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox7->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'ж';
			 int zh = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("ж.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("ж.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("ж.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("ж.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("ж.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("ж.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("ж.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("ж.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("ж.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("ж.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("ж.jpg");
					 zh++;
					 Win++;
				 }
			 }
			 if (!zh)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox8->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'з';
			 int z = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("з.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("з.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("з.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("з.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("з.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("з.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("з.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("з.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("з.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("з.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("з.jpg");
					 z++;
					 Win++;
				 }
			 }
			 if (!z)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox9->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'и';
			 int ii = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("и.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("и.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("и.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("и.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("и.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("и.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("и.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("и.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("и.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("и.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("и.jpg");
					 ii++;
					 Win++;
				 }
			 }
			 if (!ii)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox10->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'й';
			 int yi = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("й.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("й.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("й.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("й.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("й.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("й.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("й.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("й.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("й.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("й.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("й.jpg");
					 yi++;
					 Win++;
				 }
			 }
			 if (!yi)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox11->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'к';
			 int k = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("к.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("к.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("к.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("к.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("к.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("к.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("к.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("к.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("к.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("к.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("к.jpg");
					 k++;
					 Win++;
				 }
			 }
			 if (!k)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox12->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'л';
			 int l = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("л.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("л.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("л.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("л.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("л.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("л.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("л.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("л.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("л.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("л.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("л.jpg");
					 l++;
					 Win++;
				 }
			 }
			 if (!l)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox13->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'м';
			 int m = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("m.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("m.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("m.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("m.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("m.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("m.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("m.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("m.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("m.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("m.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("m.jpg");
					 m++;
					 Win++;
				 }
			 }
			 if (!m)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox14->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'н';
			 int n = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("н.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("н.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("н.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("н.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("н.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("н.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("н.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("н.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("н.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("н.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("н.jpg");
					 n++;
					 Win++;
				 }
			 }
			 if (!n)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox15->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'о';
			 int o = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("o.png");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("o.png");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("o.png");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("o.png");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("o.png");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("o.png");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("o.png");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("o.png");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("o.png");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("o.png");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("o.png");
					 o++;
					 Win++;
				 }
			 }
			 if (!o)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox16->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox17_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'п';
			 int p = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("п.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("п.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("п.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("п.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("п.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("п.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("п.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("п.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("п.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("п.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("п.jpg");
					 p++;
					 Win++;
				 }
			 }
			 if (!p)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox17->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'р';
			 int r = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("р.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("р.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("р.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("р.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("р.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("р.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("р.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("р.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("р.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("р.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("р.jpg");
					 r++;
					 Win++;
				 }
			 }
			 if (!r)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox18->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'с';
			 int s = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("с.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("с.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("с.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("с.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("с.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("с.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("с.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("с.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("с.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("с.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("с.jpg");
					 s++;
					 Win++;
				 }
			 }
			 if (!s)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox19->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox20_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'т';
			 int t = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("т.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("т.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("т.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("т.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("т.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("т.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("т.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("т.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("т.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("т.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("т.jpg");
					 t++;
					 Win++;
				 }
			 }
			 if (!t)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox20->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox21_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'у';
			 int u = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("у.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("у.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("у.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("у.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("у.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("у.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("у.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("у.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("у.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("у.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("у.jpg");
					 u++;
					 Win++;
				 }
			 }
			 if (!u)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox21->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'ф';
			 int f = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("ф.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("ф.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("ф.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("ф.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("ф.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("ф.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("ф.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("ф.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("ф.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("ф.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("ф.jpg");
					 f++;
					 Win++;
				 }
			 }
			 if (!f)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox22->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox23_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'х';
			 int h = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("х.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("х.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("х.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("х.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("х.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("х.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("х.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("х.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("х.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("х.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("х.jpg");
					 h++;
					 Win++;
				 }
			 }
			 if (!h)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox23->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox24_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'ц';
			 int ce = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("ц.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("ц.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("ц.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("ц.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("ц.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("ц.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("ц.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("ц.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("ц.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("ц.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("ц.jpg");
					 ce++;
					 Win++;
				 }
			 }
			 if (!ce)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox24->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'ч';
			 int ch = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("ч.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("ч.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("ч.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("ч.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("ч.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("ч.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("ч.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("ч.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("ч.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("ч.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("ч.jpg");
					 ch++;
					 Win++;
				 }
			 }
			 if (!ch)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox25->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox26_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'ш';
			 int sh = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("ш.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("ш.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("ш.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("ш.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("ш.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("ш.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("ш.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("ш.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("ш.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("ш.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("ш.jpg");
					 sh++;
					 Win++;
				 }
			 }
			 if (!sh)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox26->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox27_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'щ';
			 int sh_ = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("щ.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("щ.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("щ.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("щ.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("щ.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("щ.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("щ.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("щ.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("щ.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("щ.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("щ.jpg");
					 sh_++;
					 Win++;
				 }
			 }
			 if (!sh_)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox27->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox28_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'ъ';
			 int tv = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("ъ.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("ъ.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("ъ.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("ъ.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("ъ.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("ъ.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("ъ.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("ъ.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("ъ.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("ъ.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("ъ.jpg");
					 tv++;
					 Win++;
				 }
			 }
			 if (!tv)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox28->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox29_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'ы';
			 int yui = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("ы.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("ы.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("ы.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("ы.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("ы.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("ы.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("ы.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("ы.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("ы.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("ы.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("ы.jpg");
					 yui++;
					 Win++;
				 }
			 }
			 if (!yui)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox29->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox30_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'ь';
			 int mz = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("ь.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("ь.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("ь.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("ь.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("ь.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("ь.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("ь.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("ь.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("ь.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("ь.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("ь.jpg");
					 mz++;
					 Win++;
				 }
			 }
			 if (!mz)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox30->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox31_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'э';
			 int eee = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("э.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("э.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("э.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("э.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("э.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("э.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("э.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("э.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("э.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("э.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("э.jpg");
					 eee++;
					 Win++;
				 }
			 }
			 if (!eee)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();

					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox31->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox32_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = 'ю';
			 int yu = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("ю.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("ю.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("ю.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("ю.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("ю.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("ю.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("ю.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("ю.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("ю.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("ю.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("ю.jpg");
					 yu++;
					 Win++;
				 }
			 }
			 if (!yu)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox32->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}
private: System::Void pictureBox33_Click(System::Object^  sender, System::EventArgs^  e) {
			 Enter = '€';
			 int ya = 0;
			 for (int i = 0; i < strlen(Word); i++)
			 {
				 if (Enter == *(Word + i))
				 {
					 if (i == 0)
						 pictureBox34->Image = Image::FromFile("€.jpg");
					 if (i == 1)
						 pictureBox35->Image = Image::FromFile("€.jpg");
					 if (i == 2)
						 pictureBox36->Image = Image::FromFile("€.jpg");
					 if (i == 3)
						 pictureBox37->Image = Image::FromFile("€.jpg");
					 if (i == 4)
						 pictureBox38->Image = Image::FromFile("€.jpg");
					 if (i == 5)
						 pictureBox39->Image = Image::FromFile("€.jpg");
					 if (i == 6)
						 pictureBox40->Image = Image::FromFile("€.jpg");
					 if (i == 7)
						 pictureBox41->Image = Image::FromFile("€.jpg");
					 if (i == 8)
						 pictureBox42->Image = Image::FromFile("€.jpg");
					 if (i == 9)
						 pictureBox43->Image = Image::FromFile("€.jpg");
					 if (i == 10)
						 pictureBox44->Image = Image::FromFile("€.jpg");
					 ya++;
					 Win++;
				 }
			 }
			 if (!ya)
			 {
				 Lose++;

				 if (Lose == 1)
					 pictureBox45->Image = Image::FromFile("pole.png");
				 if (Lose == 2)
					 pictureBox45->Image = Image::FromFile("palka.png");
				 if (Lose == 3)
					 pictureBox45->Image = Image::FromFile("perek.png");
				 if (Lose == 4)
					 pictureBox45->Image = Image::FromFile("petla.png");
				 if (Lose == 5)
				 {
					 pictureBox45->Image = Image::FromFile("end.png");
					 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("проигрыш.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
					 pictureBox1->Hide();
					 pictureBox2->Hide();
					 pictureBox3->Hide();
					 pictureBox4->Hide();
					 pictureBox5->Hide();
					 pictureBox6->Hide();
					 pictureBox7->Hide();
					 pictureBox8->Hide();
					 pictureBox9->Hide();
					 pictureBox10->Hide();
					 pictureBox11->Hide();
					 pictureBox12->Hide();
					 pictureBox13->Hide();
					 pictureBox14->Hide();
					 pictureBox15->Hide();
					 pictureBox16->Hide();
					 pictureBox17->Hide();
					 pictureBox18->Hide();
					 pictureBox19->Hide();
					 pictureBox20->Hide();
					 pictureBox21->Hide();
					 pictureBox22->Hide();
					 pictureBox23->Hide();
					 pictureBox24->Hide();
					 pictureBox25->Hide();
					 pictureBox26->Hide();
					 pictureBox27->Hide();
					 pictureBox28->Hide();
					 pictureBox29->Hide();
					 pictureBox30->Hide();
					 pictureBox31->Hide();
					 pictureBox32->Hide();
					 pictureBox33->Hide();
					 Loser(Word);
				 }
			 }

			 pictureBox33->Hide();

			 if (Win == Quantity)
			 {
				 pictureBox46->Location = System::Drawing::Point(456, 284); pictureBox47->Location = System::Drawing::Point(550, 357); pictureBox53->Location = System::Drawing::Point(641, 284); pictureBox46->Image = Image::FromFile("да.jpg"); pictureBox52->Image = Image::FromFile("победа.jpg"); pictureBox46->Show(); pictureBox53->Show(); pictureBox47->Show(); pictureBox52->Show();
				 pictureBox45->Image = Image::FromFile("win.png");
				 pictureBox1->Hide();
				 pictureBox2->Hide();
				 pictureBox3->Hide();
				 pictureBox4->Hide();
				 pictureBox5->Hide();
				 pictureBox6->Hide();
				 pictureBox7->Hide();
				 pictureBox8->Hide();
				 pictureBox9->Hide();
				 pictureBox10->Hide();
				 pictureBox11->Hide();
				 pictureBox12->Hide();
				 pictureBox13->Hide();
				 pictureBox14->Hide();
				 pictureBox15->Hide();
				 pictureBox16->Hide();
				 pictureBox17->Hide();
				 pictureBox18->Hide();
				 pictureBox19->Hide();
				 pictureBox20->Hide();
				 pictureBox21->Hide();
				 pictureBox22->Hide();
				 pictureBox23->Hide();
				 pictureBox24->Hide();
				 pictureBox25->Hide();
				 pictureBox26->Hide();
				 pictureBox27->Hide();
				 pictureBox28->Hide();
				 pictureBox29->Hide();
				 pictureBox30->Hide();
				 pictureBox31->Hide();
				 pictureBox32->Hide();
				 pictureBox33->Hide();
			 }
}


private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}


private: System::Void pictureBox46_Click(System::Object^  sender, System::EventArgs^  e) {

			 pictureBox45->Image = Image::FromFile("pal.jpg");
			 pictureBox50->Image = Image::FromFile("начало1.jpg");
			 pictureBox51->Show();

			 pictureBox1->Show();
			 pictureBox2->Show();
			 pictureBox3->Show();
			 pictureBox4->Show();
			 pictureBox5->Show();
			 pictureBox6->Show();
			 pictureBox7->Show();
			 pictureBox8->Show();
			 pictureBox9->Show();
			 pictureBox10->Show();
			 pictureBox11->Show();
			 pictureBox12->Show();
			 pictureBox13->Show();
			 pictureBox14->Show();
			 pictureBox15->Show();
			 pictureBox16->Show();
			 pictureBox17->Show();
			 pictureBox18->Show();
			 pictureBox19->Show();
			 pictureBox20->Show();
			 pictureBox21->Show();
			 pictureBox22->Show();
			 pictureBox23->Show();
			 pictureBox24->Show();
			 pictureBox25->Show();
			 pictureBox26->Show();
			 pictureBox27->Show();
			 pictureBox28->Show();
			 pictureBox29->Show();
			 pictureBox30->Show();
			 pictureBox31->Show();
			 pictureBox32->Show();
			 pictureBox33->Show();
			 pictureBox45->Show();
			 pictureBox48->Hide();
			 pictureBox46->Hide();
			 pictureBox52->Hide();
			 pictureBox47->Hide();
			 pictureBox53->Location = System::Drawing::Point(732, 380);
			 pictureBox53->Show();

			 Lose = 0;
			 Win = 0;

			 Random^rand = gcnew Random();
			 int r = rand->Next(51);
			 Word = "";

			 if (r == 0)
				 Word = "зан€тие";
			 if (r == 1)
				 Word = "фотографи€";
			 if (r == 2)
				 Word = "ромашка";
			 if (r == 3)
				 Word = "число";
			 if (r == 4)
				 Word = "проводник";
			 if (r == 5)
				 Word = "озеро";
			 if (r == 6)
				 Word = "кастрюл€";

			 if (r == 7)
				 Word = "аферист";
			 if (r == 8)
				 Word = "ритуал";
			 if (r == 9)
				 Word = "постройка";
			 if (r == 10)
				 Word = "победа";
			 if (r == 11)
				 Word = "австрали€";
			 if (r == 12)
				 Word = "географи€";
			 if (r == 13)
				 Word = "истори€";
			 if (r == 14)
				 Word = "ловкость";
			 if (r == 15)
				 Word = "студи€";
			 if (r == 16)
				 Word = "футболист";
			 if (r == 17)
				 Word = "корабль";
			 if (r == 18)
				 Word = "автомастер";

			 if (r == 19)
				 Word = "антилопа";
			 if (r == 20)
				 Word = "шутник";
			 if (r == 21)
				 Word = "хлеб";
			 if (r == 22)
				 Word = "водитель";
			 if (r == 23)
				 Word = "свобода";
			 if (r == 24)
				 Word = "поджог";
			 if (r == 25)
				 Word = "адмирал";
			 if (r == 26)
				 Word = "универмаг";
			 if (r == 27)
				 Word = "столова€";
			 if (r == 28)
				 Word = "огурец";
			 if (r == 29)
				 Word = "эскалатор";
			 if (r == 30)
				 Word = "паровоз";

			 if (r == 31)
				 Word = "личинка";
			 if (r == 32)
				 Word = "карабин";
			 if (r == 33)
				 Word = "маргарин";
			 if (r == 34)
				 Word = "штрудель";
			 if (r == 35)
				 Word = "объект";

			 if (r == 36)
				 Word = "булавка";
			 if (r == 37)
				 Word = "каратист";
			 if (r == 38)
				 Word = "скалолаз";
			 if (r == 39)
				 Word = "аллигатор";
			 if (r == 40)
				 Word = "бодрость";

			 if (r == 41)
				 Word = "здоровье";
			 if (r == 42)
				 Word = "торговец";
			 if (r == 43)
				 Word = "спасатель";
			 if (r == 44)
				 Word = "продавец";
			 if (r == 45)
				 Word = "шершень";

			 if (r == 46)
				 Word = "лошадь";
			 if (r == 47)
				 Word = "пегас";
			 if (r == 48)
				 Word = "альтруизм";
			 if (r == 49)
				 Word = "раскройка";
			 if (r == 50)
				 Word = "поселок";

			

			 Quantity = strlen(Word);

			 int Count = strlen(Word);

			 pictureBox34->Hide();
			 pictureBox35->Hide();
			 pictureBox36->Hide();
			 pictureBox37->Hide();
			 pictureBox38->Hide();
			 pictureBox39->Hide();
			 pictureBox40->Hide();
			 pictureBox41->Hide();
			 pictureBox42->Hide();
			 pictureBox43->Hide();
			 pictureBox44->Hide();

			 if (Count == 5)
			 {
				 pictureBox34->Image = Image::FromFile("zvezda.png");
				 pictureBox34->Show();
				 pictureBox35->Image = Image::FromFile("zvezda.png");
				 pictureBox35->Show();
				 pictureBox36->Image = Image::FromFile("zvezda.png");
				 pictureBox36->Show();
				 pictureBox37->Image = Image::FromFile("zvezda.png");
				 pictureBox37->Show();
				 pictureBox38->Image = Image::FromFile("zvezda.png");
				 pictureBox38->Show();
			 }

			 if (Count == 6)
			 {
				 pictureBox34->Image = Image::FromFile("zvezda.png");
				 pictureBox34->Show();
				 pictureBox35->Image = Image::FromFile("zvezda.png");
				 pictureBox35->Show();
				 pictureBox36->Image = Image::FromFile("zvezda.png");
				 pictureBox36->Show();
				 pictureBox37->Image = Image::FromFile("zvezda.png");
				 pictureBox37->Show();
				 pictureBox38->Image = Image::FromFile("zvezda.png");
				 pictureBox38->Show();
				 pictureBox39->Image = Image::FromFile("zvezda.png");
				 pictureBox39->Show();
				
			 }

			 if (Count == 7)
			 {
				 pictureBox34->Image = Image::FromFile("zvezda.png");
				 pictureBox34->Show();
				 pictureBox35->Image = Image::FromFile("zvezda.png");
				 pictureBox35->Show();
				 pictureBox36->Image = Image::FromFile("zvezda.png");
				 pictureBox36->Show();
				 pictureBox37->Image = Image::FromFile("zvezda.png");
				 pictureBox37->Show();
				 pictureBox38->Image = Image::FromFile("zvezda.png");
				 pictureBox38->Show();
				 pictureBox39->Image = Image::FromFile("zvezda.png");
				 pictureBox39->Show();
				 pictureBox40->Image = Image::FromFile("zvezda.png");
				 pictureBox40->Show();

			 }

			 if (Count == 8)
			 {
				 pictureBox34->Image = Image::FromFile("zvezda.png");
				 pictureBox34->Show();
				 pictureBox35->Image = Image::FromFile("zvezda.png");
				 pictureBox35->Show();
				 pictureBox36->Image = Image::FromFile("zvezda.png");
				 pictureBox36->Show();
				 pictureBox37->Image = Image::FromFile("zvezda.png");
				 pictureBox37->Show();
				 pictureBox38->Image = Image::FromFile("zvezda.png");
				 pictureBox38->Show();
				 pictureBox39->Image = Image::FromFile("zvezda.png");
				 pictureBox39->Show();
				 pictureBox40->Image = Image::FromFile("zvezda.png");
				 pictureBox40->Show();
				 pictureBox41->Image = Image::FromFile("zvezda.png");
				 pictureBox41->Show();
				
			 }

			 if (Count == 9)
			 {
				 pictureBox34->Image = Image::FromFile("zvezda.png");
				 pictureBox34->Show();
				 pictureBox35->Image = Image::FromFile("zvezda.png");
				 pictureBox35->Show();
				 pictureBox36->Image = Image::FromFile("zvezda.png");
				 pictureBox36->Show();
				 pictureBox37->Image = Image::FromFile("zvezda.png");
				 pictureBox37->Show();
				 pictureBox38->Image = Image::FromFile("zvezda.png");
				 pictureBox38->Show();
				 pictureBox39->Image = Image::FromFile("zvezda.png");
				 pictureBox39->Show();
				 pictureBox40->Image = Image::FromFile("zvezda.png");
				 pictureBox40->Show();
				 pictureBox41->Image = Image::FromFile("zvezda.png");
				 pictureBox41->Show();
				 pictureBox42->Image = Image::FromFile("zvezda.png");
				 pictureBox42->Show();
				 
			 }

			 if (Count == 10)
			 {
				 pictureBox34->Image = Image::FromFile("zvezda.png");
				 pictureBox34->Show();
				 pictureBox35->Image = Image::FromFile("zvezda.png");
				 pictureBox35->Show();
				 pictureBox36->Image = Image::FromFile("zvezda.png");
				 pictureBox36->Show();
				 pictureBox37->Image = Image::FromFile("zvezda.png");
				 pictureBox37->Show();
				 pictureBox38->Image = Image::FromFile("zvezda.png");
				 pictureBox38->Show();
				 pictureBox39->Image = Image::FromFile("zvezda.png");
				 pictureBox39->Show();
				 pictureBox40->Image = Image::FromFile("zvezda.png");
				 pictureBox40->Show();
				 pictureBox41->Image = Image::FromFile("zvezda.png");
				 pictureBox41->Show();
				 pictureBox42->Image = Image::FromFile("zvezda.png");
				 pictureBox42->Show();
				 pictureBox43->Image = Image::FromFile("zvezda.png");
				 pictureBox43->Show();
			 }

			 if (Count == 11)
			 {
				 pictureBox34->Image = Image::FromFile("zvezda.png");
				 pictureBox34->Show();
				 pictureBox35->Image = Image::FromFile("zvezda.png");
				 pictureBox35->Show();
				 pictureBox36->Image = Image::FromFile("zvezda.png");
				 pictureBox36->Show();
				 pictureBox37->Image = Image::FromFile("zvezda.png");
				 pictureBox37->Show();
				 pictureBox38->Image = Image::FromFile("zvezda.png");
				 pictureBox38->Show();
				 pictureBox39->Image = Image::FromFile("zvezda.png");
				 pictureBox39->Show();
				 pictureBox40->Image = Image::FromFile("zvezda.png");
				 pictureBox40->Show();
				 pictureBox41->Image = Image::FromFile("zvezda.png");
				 pictureBox41->Show();
				 pictureBox42->Image = Image::FromFile("zvezda.png");
				 pictureBox42->Show();
				 pictureBox43->Image = Image::FromFile("zvezda.png");
				 pictureBox43->Show();
				 pictureBox44->Image = Image::FromFile("zvezda.png");
				 pictureBox44->Show();
			 }

}

private: System::Void pictureBox34_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox35_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox36_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox37_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox38_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox39_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox40_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox41_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox42_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox43_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox44_Click(System::Object^  sender, System::EventArgs^  e) {

}


private: System::Void pictureBox45_Click(System::Object^  sender, System::EventArgs^  e) {

}

 private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox47_Click(System::Object^  sender, System::EventArgs^  e) {
			 exit(0);
}
private: System::Void pictureBox53_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Hide();
			 pictureBox2->Hide();
			 pictureBox3->Hide();
			 pictureBox4->Hide();
			 pictureBox5->Hide();
			 pictureBox6->Hide();
			 pictureBox7->Hide();
			 pictureBox8->Hide();
			 pictureBox9->Hide();
			 pictureBox10->Hide();
			 pictureBox11->Hide();
			 pictureBox12->Hide();
			 pictureBox13->Hide();
			 pictureBox14->Hide();
			 pictureBox15->Hide();
			 pictureBox16->Hide();
			 pictureBox17->Hide();
			 pictureBox18->Hide();
			 pictureBox19->Hide();
			 pictureBox20->Hide();
			 pictureBox21->Hide();
			 pictureBox22->Hide();
			 pictureBox23->Hide();
			 pictureBox24->Hide();
			 pictureBox25->Hide();
			 pictureBox26->Hide();
			 pictureBox27->Hide();
			 pictureBox28->Hide();
			 pictureBox29->Hide();
			 pictureBox30->Hide();
			 pictureBox31->Hide();
			 pictureBox32->Hide();
			 pictureBox33->Hide();
			 pictureBox34->Hide();
			 pictureBox35->Hide();
			 pictureBox36->Hide();
			 pictureBox37->Hide();
			 pictureBox38->Hide();
			 pictureBox39->Hide();
			 pictureBox40->Hide();
			 pictureBox41->Hide();
			 pictureBox42->Hide();
			 pictureBox43->Hide();
			 pictureBox44->Hide();
			 pictureBox45->Hide();
			 pictureBox52->Hide();
			 pictureBox53->Hide();
			 pictureBox50->Image = Image::FromFile("1.jpg");
			 pictureBox51->Hide();
			 pictureBox46->Location = System::Drawing::Point(364, 209);
			 pictureBox46->Image = Image::FromFile("начать.jpg");
			 pictureBox46->Show();
			 pictureBox47->Location = System::Drawing::Point(364, 357);
			 pictureBox47->Show();
			 pictureBox48->Location = System::Drawing::Point(364, 284);
			 pictureBox48->Show();
}
private: System::Void pictureBox48_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Hide();
			 pictureBox2->Hide();
			 pictureBox3->Hide();
			 pictureBox4->Hide();
			 pictureBox5->Hide();
			 pictureBox6->Hide();
			 pictureBox7->Hide();
			 pictureBox8->Hide();
			 pictureBox9->Hide();
			 pictureBox10->Hide();
			 pictureBox11->Hide();
			 pictureBox12->Hide();
			 pictureBox13->Hide();
			 pictureBox14->Hide();
			 pictureBox15->Hide();
			 pictureBox16->Hide();
			 pictureBox17->Hide();
			 pictureBox18->Hide();
			 pictureBox19->Hide();
			 pictureBox20->Hide();
			 pictureBox21->Hide();
			 pictureBox22->Hide();
			 pictureBox23->Hide();
			 pictureBox24->Hide();
			 pictureBox25->Hide();
			 pictureBox26->Hide();
			 pictureBox27->Hide();
			 pictureBox28->Hide();
			 pictureBox29->Hide();
			 pictureBox30->Hide();
			 pictureBox31->Hide();
			 pictureBox32->Hide();
			 pictureBox33->Hide();
			 pictureBox34->Hide();
			 pictureBox35->Hide();
			 pictureBox36->Hide();
			 pictureBox37->Hide();
			 pictureBox38->Hide();
			 pictureBox39->Hide();
			 pictureBox40->Hide();
			 pictureBox41->Hide();
			 pictureBox42->Hide();
			 pictureBox43->Hide();
			 pictureBox44->Hide();
			 pictureBox45->Hide();
			 pictureBox46->Hide();
			 pictureBox47->Hide();
			 pictureBox48->Hide();
			 pictureBox51->Hide();
			 pictureBox52->Hide();
			 pictureBox50->Image = Image::FromFile("правила1.jpg");
			 pictureBox53->Location = System::Drawing::Point(732, 380);
			 pictureBox53->Show();
}
private: System::Void pictureBox45_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
