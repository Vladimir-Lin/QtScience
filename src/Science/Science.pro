NAME         = Science
TARGET       = $${NAME}

QT           = core
QT          -= gui
QT          += network
QT          += sql
QT          += script
QT          += QtCURL
QT          += QtCUDA
QT          += QtOpenCV
QT          += QtFFmpeg
QT          += QtAudio
QT          += Essentials
QT          += QtCalendar
QT          += QtCryptography
QT          += QtMIME
QT          += SqlAnalyzer
QT          += QtGMP
QT          += QtGSL
QT          += QtAlgebra
QT          += QtDiscrete
QT          += QtFFT
QT          += Mathematics
QT          += QtFuzzy
QT          += QtFLP
QT          += QtGeography
QT          += NetProtocol
QT          += QtXmlRPC
QT          += QtUDT
QT          += QtFTP
QT          += QtRPC
QT          += QtJsonRPC
QT          += AudioIO
QT          += QtPhonemes
QT          += QtVocal
QT          += QtLinguistics
QT          += AudioIO
QT          += QtFoundation

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/$${NAME}

HEADERS     += $${PWD}/../../include/$${NAME}/science.h

include ($${PWD}/Physics/Physics.pri)

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)

TRNAME = Qt5Science
include ($${PWD}/../../../Sharing/Translations/Translations.pri)
