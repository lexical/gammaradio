#ifndef GAMMARADIO_H
#define GAMMARADIO_H
     
#include <QMainWindow>
#include <QWebView>
#include <QUrl>
#include <QSystemTrayIcon>

class GammaRadio : public QMainWindow
{
	Q_OBJECT
public:
	explicit GammaRadio(QWidget *parent = 0);
	virtual ~GammaRadio();
     
private:
	QWebView* m_pWebView;
};
     
#endif

