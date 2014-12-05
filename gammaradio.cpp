#include <QApplication>
#include <QDesktopWidget>
#include "gammaradio.h"
     
GammaRadio::GammaRadio(QWidget *parent) : QMainWindow(parent)
{
	this->setWindowIcon(QIcon("/usr/share/pixmaps/gammaradio.xpm"));
	this->setWindowTitle("Gamma Radio");

	m_pWebView = new QWebView(this);
	m_pWebView->setFixedWidth(400);
	m_pWebView->setFixedHeight(600);
	this->setFixedWidth(400);
	this->setFixedHeight(600);

	QDesktopWidget *d = QApplication::desktop();
	this->move(d->width()-450, 50);

	QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
	QWebSettings::globalSettings()->setAttribute(QWebSettings::AutoLoadImages, true);
	m_pWebView->load(QUrl("http://hichannel.hinet.net/radio/mobile/index.do"));
}
     
GammaRadio::~GammaRadio()
{
}

