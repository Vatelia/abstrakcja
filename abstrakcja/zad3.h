class ICryptography
{
	virtual string Encrypt(string plainText) = 0;
};

class Cezar : ICryptography
{
private:
	int _key;

public:
	Cezar(int key)
	{
		_key = key;
	}

	string Encrypt(string plainText)
	{
		string encryptedText = "";

		for (int element : plainText)
		{
			encryptedText += element + _key % 26;
		}

		return encryptedText;
	}
};

void zad3()
{
	int key;
	string myString;
	cout << "Enter your name of something to code" << endl;
	cin >> myString;
	cout << "Enter key" << endl;
	cin >> key;

	Cezar cezar(key);

	string encryoptedText = cezar.Encrypt(myString);

	cout << "Encrypted text: " << encryoptedText;

	//myChar = char(int(myChar) + 3);
}