class ICryptography
{
	virtual string Encrypt(string plainText) = 0;
};
class Cezar : ICryptography
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
			cout << element;
				int chech = _key % 26;
				encryptedText += element+ chech;
			
		}

		
		return encryptedText;
	}
private:
	int _key;
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

	//string encryoptedText1 = Cezar.Encrypt(myString);
	cout << cezar.Encrypt(myString);
	//cout << "Encrypted text: " << encryoptedText1;

	
}