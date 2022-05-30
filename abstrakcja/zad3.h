//class ICryptography
//{
//	virtual string Encrypt(string plainText) = 0;
//};
class Cezar //: ICryptography
{
public:
	 Cezar(int key)
	{
		_key = key;
	}

	string Encrypt(string plainText)
	{
		string encryptedText = "";
	
		

		
		for (int  element : plainText)
		{
		//komenda isuppear 
			
				int chech = _key % 26;
				encryptedText += element+ chech;
			
		}

		
		return encryptedText;
	}
private:
	int _key;
};

class Vigenere : ICryptography
{
private:
	int _key;

public:
	Vigenere(int key)
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

	//string encryoptedText1 = cezar.Encrypt(myString);
	cout << cezar.Encrypt(myString);
	//cout << "Encrypted text: " << encryoptedText1;

	cout << "Encrypted text: " << encryoptedText;

	//myChar = char(int(myChar) + 3);



}