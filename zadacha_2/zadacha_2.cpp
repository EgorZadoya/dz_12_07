#include "Passport.h"

int main()
{
	setlocale(LC_ALL, "ru");
	ForeignPassport f1("Egor", 20, 56789987, 876598534, true);
	f1.show_foreign();

}