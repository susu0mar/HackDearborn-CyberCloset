#include<iostream>
#include<cctype> //for tolower method
using namespace std;


int main() {

	//char variables to hold user answers
	char sizingch, genderprefch, vibech, fittingprefch;
	char agerangech;
	int size;
	string genderpref, sizing, fittingpref, agerange, vibe;
	//female sizes
	int sizexs, sizesm, sizem, sizelg, sizexl;
	//male sizes
	int msizexs, msizesm, msizem, msizelg, msizexl;

	
	cout << "What is your preferred gender clothing?" << endl;
	cout << "a) Women's clothing" << endl;
	cout << "b) Men's clothing" << endl;
	cout << "c) Don't have a preference :)" << endl << endl;
	cout << "Please enter your choice here: " <<endl;
	cin >> genderprefch;
	cout << endl;

	//convert genderpref char to lower case just in case!!
	genderprefch = std::tolower(genderprefch);

	//switch statement to determine gender prefrence
	switch (genderprefch) {
	
	case 'a':
		genderpref = "Women's clothing";

		break;
	case 'b':
		genderpref = "Men's clothing";

		break;
	case 'c':
		genderpref = "Don't have a preference :)";

		break;

	default:

		cout << "Invalid input!" << endl;
		cout << "Please make sure your caps lock is off, and that you are typing one of the listed choices." << endl;
		return 1; //RETURN 1 FORCES THE PROGRAM TO END!!
		
	}

	cout << "Okay, got it. Your preferred gender clothing is:  " << genderprefch << ", " << genderpref << "." << endl << endl;


	//sizing range if else statements
	sizexs = 2;
	sizesm = 4;
	sizem = 6;
	sizelg = 10;
	sizexl = 14;
	msizexs = 34;
	msizesm = 36;
	msizem = 38;
	msizelg = 40;
	msizexl = 42;


	if (genderprefch == 'a') {
		cout << "What size are you, usually?" << endl;
		cout << "I am usually a..." << endl;
		cout << "a) X Small: " << sizexs << endl;
		cout << "b) Small: " << sizesm << endl;
		cout << "c) Medium: " << sizem << endl;
		cout << "d) Large: " << sizelg << endl;
		cout << "e) X Large: " << sizexl << endl;
		cout << "Please enter your choice here (a, b, c, d, or e): "<<endl;
		cin >> sizingch;
		cout << endl;
	}
	else if (genderprefch == 'b') {
		cout << "What size are you, usually?" << endl;
		cout << "I am usually a..." << endl;
		cout << "a) X Small: " << msizexs << endl;
		cout << "b) Small: " << msizesm << endl;
		cout << "c) Medium: " << msizem << endl;
		cout << "d) Large: " << msizelg << endl;
		cout << "e) X Large: " << msizexl << endl;
		cout << "Please enter your choice here (a, b, c, d, or e): "<<endl;
		cin >> sizingch;
		cout << endl;
	}
	else if (genderprefch == 'c') {
		cout << "What size are you, usually?" << endl;
		cout << "I am usually a..." << endl;
		cout << "a) X Small~ " << "Men's: " << msizexs << "/" << "Women's: " << sizexs << endl;
		cout << "b) Small~ " << "Men's: " << msizesm << "/" << "Women's: " << sizesm << endl;
		cout << "c) Medium~ " << "Men's: " << msizem << "/" << "Women's: " << sizem << "-" << sizem + 2 << endl;
		cout << "d) Large~ " << "Men's: " << msizelg << "/" << "Women's: " << sizelg << "-" << sizelg + 2 << endl;
		cout << "e) X Large~ " << "Men's: " << msizexl << "/" << "Women's: " << sizexl << "-" << sizexl + 2 << endl;
		cout << "Please enter your choice here (a, b, c, d, or e): "<<endl;
		cin >> sizingch;
		cout << endl;
	}

	//makes sure that the answer choice is lower case
	sizingch = std::tolower(sizingch);

	switch (sizingch) {
	
	case 'a':
		sizing = "X Small";
		break;
	case 'b':
		sizing = "Small";
		break;
	case 'c':
		sizing = "Medium";
		break;
	case 'd':
		sizing = "Large";
		break;
	case 'e':
		sizing = "X Large";
		break;
	default:
		cout << "Invalid input!" << endl;
		cout << "Please make sure your caps lock is off, and that you are typing one of the listed choices." << endl << endl;
		return 1; //RETURN 1 FORCES THE PROGRAM TO END!!
	
	}

	cout << "Cool! Your usual size is: " << sizingch << ", " << sizing << "." << endl << endl;
	
	//chothing fit
	cout << "How do you like your clothes to fit?" << endl;
	cout << "a) A little tight. " << endl;
	cout << "b) Just right!" << endl;
	cout << "c) A bit loose." << endl;
	cout << "Please enter your choice here: "<<endl;
	cin >> fittingprefch;
	cout << endl;

	fittingprefch = std::tolower(fittingprefch); //makes sure that the answer choice is lower case

	switch (fittingprefch) {
	
	case 'a':
		fittingpref = "Tight";
		break;
	case 'b':
		fittingpref = "Just Right";
		break;
	case 'c':
		fittingpref = "Loose";
		break;
	default:
		cout << "Invalid input!" << endl;
		cout << "Please make sure your caps lock is off, and that you are typing one of the listed choices." << endl << endl;
		return 1; //RETURN 1 FORCES THE PROGRAM TO END!!
	}

	cout << "Nice! You like: " << fittingprefch << ", " << fittingpref << " fitting clothing." << endl << endl;
	
	
	//Clothing Style
	cout << "What is your vibe ? What style of clothes are you looking for ? " << endl;

	cout << "a) Athleticwear" << endl;
	cout << "b) Bohemian/Hipster" << endl;
	cout << "c) Business casual" << endl;
	cout << "d) Preppy" << endl;
	cout << "e) Bold" << endl;
	cout << "f) Streetwear" << endl;
	cout << "Please enter your choice here: "<<endl;
	cin >> vibech;

	vibech = std::tolower(vibech); //makes sure that the answer choice is lower case


	switch (vibech) {
	
	
	case 'a':
		vibe = "Athletic";
		break;
	case 'b':
		vibe = "Bohemian/Hipster";
		break;
	case 'c':
		vibe = "Business Casual";
		break;
	case 'd':
		vibe = "Preppy";
		break;
	case 'e':
		vibe = "Bold";
		break;
	case 'f':
		vibe = "Streetwear";
		break;
	default:
		cout << "Invalid input!" << endl;
		cout << "Please make sure your caps lock is off, and that you are typing one of the listed choices." << endl << endl;
		return 1; //RETURN 1 FORCES THE PROGRAM TO END!!

	}

	cout << "Swagalicious! You are looking for: " << vibech << ", " << vibe << " style clothing!" << endl << endl;


	cout << "Okay, we've figured you out!" << endl << endl;
	cout << "Your Results: "<<endl;
	
	cout << "You prefer to wear " << genderpref << " and...." << endl;
	cout << "You are looking for *" << fittingpref << "* fitting, *" << vibe << "* styled clothing." << endl << endl;


	return 0;
}