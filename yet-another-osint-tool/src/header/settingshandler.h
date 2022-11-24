#ifndef SETTINGSHANDLER_H
#define SETTINGSHANDLER_H
#include <QSettings>
#include <QApplication>
#include <QFloat16>

class settingsHandler
{
public:
    settingsHandler();
    bool loadSettings();
    bool saveSettings();

private:
    QString m_sSettingsFile = QApplication::applicationDirPath() + "/settings.ini";


};

#endif // SETTINGSHANDLER_H
