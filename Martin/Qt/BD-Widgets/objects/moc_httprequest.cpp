/****************************************************************************
** Meta object code from reading C++ file 'httprequest.h'
**
** Created: Sat 7. Dec 00:49:59 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SiTTuGAs/SharedMemory/httprequest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httprequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HTTPRequest[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      23,   12,   12,   12, 0x08,
      38,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HTTPRequest[] = {
    "HTTPRequest\0\0Refresh()\0HTTPFinished()\0"
    "HTTPReadyRead()\0"
};

const QMetaObject HTTPRequest::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HTTPRequest,
      qt_meta_data_HTTPRequest, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HTTPRequest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HTTPRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HTTPRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HTTPRequest))
        return static_cast<void*>(const_cast< HTTPRequest*>(this));
    return QWidget::qt_metacast(_clname);
}

int HTTPRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Refresh(); break;
        case 1: HTTPFinished(); break;
        case 2: HTTPReadyRead(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void HTTPRequest::Refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
