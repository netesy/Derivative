#ifndef CHECKSITE_H
#define CHECKSITE_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QMutex>

class CheckSite : public QObject
{
    Q_OBJECT
public:
    explicit CheckSite(QObject *parent = 0);

    // Singleton
    static CheckSite* sharedSite();

    // Set / get feed URL
    void SetLicenseURL(QUrl licenseURL);
    void SetLicenseURL(QString licenseURL);
    QString GetLicenseURL();

signals:

public slots:
    void SetUrl(QString url);
    void ReplyFinished(QNetworkReply *reply);
    bool CheckLicense(QString key);
private:
    QUrl setUrl;
    static CheckSite* m_Instance;			// Singleton instance
    QUrl m_licenseURL;					// License URL that will be fetched


};

#endif // CHECKSITE_H
