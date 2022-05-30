#pragma once
//class ICryptography1
//{
//	virtual string Encrypt(string plainText) = 0;
//};
//class  CalculateAll//:ICryptography1
//{
//public:
//	static  void Encrypt(string plainText)
//	{
//		cout << plainText;
//
//	}

//private:

//};
class VENO//: ICryptography1
{
public:
	VENO(string x,string y)
	{
		Text(x, y);
		GetTajny();
		GetArray();
		GetEncrypt();


	}
	string GetEncrypt()
	{
		
		int z = 0;
		for (int i = 0; i < _mytext.length(); i++)
		{
			char n = _mytext[i];
			char v = _tajny[i];
			int h = 0;

			for (char element : aba)
			{
				int m = 0;
				if (n == element)
				{

					for (char element : aba)
					{
						if (element == v)
						{
							 _encryptedtext +=_multiArray[h][m];

						}
						m++;
					}


				}
				h++;
			}




		}

		return _encryptedtext;
	}
	void GetArray()
	{

		int	w = 0;

		
		for (int j = 0; j < aba.length(); j++)
		{
			for (int i = 0; i < aba.length(); i++)
			{

				_multiArray[i][j] = aba[(i + w) % 26];
				

			}
			w++;
		}
	}
	void GetTajny()
	{
		int k = 0;
		for (char element : _snicky)
		{
			k++;
		}
		
		string tajny;
		int i = 0;

		for (char element : _mytext)
		{
			tajny += _snicky[i % k];
			i++;

		}
		tajny = _tajny;
	}
	 void Text(string x,string y)
	{
		_mytext = x;
		_snicky = y;
	}
private:
	string _mytext;
	string _snicky;
	string _tajny;
	string _encryptedtext;
	string aba = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	array<array<char, 26>, 26> _multiArray;

};
void vinogron()
{
	string mytext;
	string snicky;
	cout << "Enter tekst";
	cin >> mytext;
	cout << "ENter word key";
	cin >> snicky;

	VENO my(mytext, snicky);
	cout << my.GetEncrypt();



	

}