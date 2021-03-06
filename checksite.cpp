#include "checksite.h"

CheckSite::CheckSite(QObject *parent) :
    QObject(parent)
{
}
/////////////////////////////////////////////////////////////////////////////
/// \brief CheckSite::sharedSite
/// \return
/////////////////////////////////////////////////////////////////////////////
CheckSite *CheckSite::sharedSite()
{
    static QMutex mutex;
    if (! m_Instance) {
        mutex.lock();

        if (! m_Instance) {
            m_Instance = new CheckSite;
        }

        mutex.unlock();
    }
    return m_Instance;
}
/////////////////////////////////////////////////////////////////////////////
/// \brief CheckSite::SetUrl
/// \param url
/////////////////////////////////////////////////////////////////////////////
void CheckSite::SetUrl(QString url)
{
    setUrl=url;
     QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(ReplyFinished(QNetworkReply*)));
    manager->get(QNetworkRequest(setUrl));
}
/////////////////////////////////////////////////////////////////////////////
/// \brief CheckSite::ReplyFinished
/// \param reply
/////////////////////////////////////////////////////////////////////////////
void CheckSite::ReplyFinished(QNetworkReply *reply)
{
    if(reply->isOpen())
    {
        qDebug()<< reply->read(5000);
        reply->close();
    }
}
/////////////////////////////////////////////////////////////////////////////
/// \brief CheckSite::CheckLicense
/// \param key
/// \return
////////////////////////////////////////////////////////////////////////////
bool CheckSite::CheckLicense(QString key)
{
//this checks the site to see wether the key is valid or not.
    if("key" == "key")
    {
        return true;
    }
    else
       {

        return false;
    }
}
////////////////////////////////////////////////////////////////////////////
/// \brief CheckSite::SetLicenseURL
/// \param licenseURL
///////////////////////////////////////////////////////////////////////////
void CheckSite::SetLicenseURL(QString licenseURL)
{
 SetLicenseURL(QUrl(licenseURL));
}
///////////////////////////////////////////////////////////////////////////
/// \brief CheckSite::SetLicenseURL
/// \param licenseURL
///////////////////////////////////////////////////////////////////////////
void CheckSite::SetLicenseURL(QUrl licenseURL)
{
    m_licenseURL = licenseURL;
}
///////////////////////////////////////////////////////////////////////////
/// \brief CheckSite::GetLicenseURL
/// \return
///////////////////////////////////////////////////////////////////////////
QString CheckSite::GetLicenseURL()
{
return m_licenseURL.toString();
}
