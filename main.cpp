#include <QApplication>
#include "gammaradio.h"
     
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
     
	GammaRadio gammaradio;
	gammaradio.show();
	return app.exec();
}

