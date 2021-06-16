/****************************************************************************
 *                                                                          *
 * Copyright (C) 2001~2016 Neutrino International Inc.                      *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_SCIENCE_H
#define QT_SCIENCE_H

#include <QtCURL>
#include <QtCUDA>
#include <QtOpenCV>
#include <QtFFmpeg>
#include <QtAudio>
#include <Essentials>
#include <QtCalendar>
#include <QtCryptography>
#include <QtMIME>
#include <SqlAnalyzer>
#include <QtGMP>
#include <QtGSL>
#include <QtAlgebra>
#include <QtDiscrete>
#include <QtFFT>
#include <Mathematics>
#include <QtFuzzy>
#include <QtFLP>
#include <QtGeography>
#include <NetProtocol>
#include <QtXmlRPC>
#include <QtUDT>
#include <QtFTP>
#include <QtRPC>
#include <QtJsonRPC>
#include <AudioIO>
#include <QtPhonemes>
#include <QtVocal>
#include <QtLinguistics>
#include <AudioIO>
#include <QtFoundation>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_SCIENCE_LIB)
#      define Q_SCIENCE_EXPORT Q_DECL_EXPORT
#    else
#      define Q_SCIENCE_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_SCIENCE_EXPORT
#endif


namespace N
{

class Q_SCIENCE_EXPORT BoundState  ;
class Q_SCIENCE_EXPORT BoundStates ;

/*****************************************************************************
 *                                                                           *
 *                             Quark Bounded States                          *
 *                                                                           *
 *****************************************************************************/

class Q_SCIENCE_EXPORT BoundState : public QByteArray
{
  public:

    SUID uuid ;

    explicit     BoundState  (void) ;
    virtual     ~BoundState  (void) ;

    UUIDs        toUuids     (void) ;
    virtual int  particles   (void) ;
    virtual bool contains    (SUID puid) ;
    virtual void sort        (void) ;
    virtual int  append      (SUID puid) ;
    virtual int  take        (int index) ;
    virtual int  operator << (SUID puid) ;

  protected:

  private:

};

class Q_SCIENCE_EXPORT BoundStates : public QList<BoundState>
{
  public:

    explicit     BoundStates (void) ;
    virtual     ~BoundStates (void) ;

    UUIDs        toUuids    (void) ;
    virtual bool contains   (BoundState & bound) ;

  protected:

  private:

};

}

Q_DECLARE_METATYPE(N::BoundState)
Q_DECLARE_METATYPE(N::BoundStates)

QT_END_NAMESPACE

#endif
