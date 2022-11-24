#include "header/settingshandler.h"

settingsHandler::settingsHandler()
{

}

bool settingsHandler::loadSettings()
{
    QSettings settings(m_sSettingsFile, QSettings::IniFormat);
    settings.beginGroup("/General");
    settings.setValue("/Version", "");

    return false;
}

bool settingsHandler::saveSettings()
{
    return false;
}
