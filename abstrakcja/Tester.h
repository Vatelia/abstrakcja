class ICryptography
{
public:
	virtual string Encrypt(string plainText) = 0;
};

//class  CalculateAll//:ICryptography1
//{
//public:
//	static  void Encrypt(string plainText)
//	{
//		cout << plainText;
//	}
//private:
//
//};

class Vigenere : ICryptography
{
public:
	Vigenere(string key)
	{
		SetKey(key);
		GetArray();
	}

	//string Encrypt(string plainText)
	//{
	//	string encryptedText = "";

	//	for (int i = 0; i < plainText.size(); i++)
	//	{
	//		if (isupper(plainText[i]))
	//			encryptedText += (plainText[i] - 65 + _key[i % _key.size()] - 65) % 26 + 65;
	//		else
	//			encryptedText += (plainText[i] - 97 + _key[i % _key.size()] - 97) % 26 + 97;
	//	}

	//	return encryptedText;
	//}

	string Encrypt(string plainText)
	{
		GetTajny(plainText);

		int z = 0;

		for (int i = 0; i < plainText.length(); i++)
		{
			char n = plainText[i];
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


	 void SetKey(string key)
	 {
		_key = key;
	 }

private:
	string _key;
	string _tajny;
	string _encryptedtext;
	string aba = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	array<array<char, 26>, 26> _multiArray;

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

	void GetTajny(string plainText)
	{
		int k = 0;
		for (char element : _key)
		{
			k++;
		}

		string tajny;
		int i = 0;

		for (char element : plainText)
		{
			tajny += _key[i % k];
			i++;

		}
		_tajny = tajny;
	}

};
void vinogron()
{
	string mytext;
	string key;
	cout << "Enter tekst";
	cin >> mytext;
	cout << "ENter word key";
	cin >> key;

	Vigenere my(key);
	cout << my.Encrypt(mytext);
	cout << my.Encrypt("other");
	cout << my.Encrypt("rgorg");
	cout << my.Encrypt("fgdfwerfwe");

	//cout << my.GetEncrypt();

	cout << my.Encrypt("mySuperText");

	

}