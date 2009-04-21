#include "PythonQtWrapper_QLocalSocket.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocalsocket.h>
#include <qobject.h>

bool  PythonQtShell_QLocalSocket::atEnd() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "atEnd");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "atEnd(QLocalSocket*)");
      bool  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::atEnd();
}
qint64  PythonQtShell_QLocalSocket::bytesAvailable() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesAvailable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "bytesAvailable(QLocalSocket*)");
      qint64  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::bytesAvailable();
}
qint64  PythonQtShell_QLocalSocket::bytesToWrite() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesToWrite");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "bytesToWrite(QLocalSocket*)");
      qint64  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::bytesToWrite();
}
bool  PythonQtShell_QLocalSocket::canReadLine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canReadLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "canReadLine(QLocalSocket*)");
      bool  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::canReadLine();
}
void PythonQtShell_QLocalSocket::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "childEvent(QLocalSocket*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalSocket::childEvent(arg__1);
}
void PythonQtShell_QLocalSocket::close()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "close");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "close(QLocalSocket*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalSocket::close();
}
void PythonQtShell_QLocalSocket::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "customEvent(QLocalSocket*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalSocket::customEvent(arg__1);
}
bool  PythonQtShell_QLocalSocket::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "event(QLocalSocket*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::event(arg__1);
}
bool  PythonQtShell_QLocalSocket::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "eventFilter(QLocalSocket*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QLocalSocket::isSequential() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isSequential");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "isSequential(QLocalSocket*)");
      bool  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::isSequential();
}
bool  PythonQtShell_QLocalSocket::open(QIODevice::OpenMode  mode)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "open(QLocalSocket*,QIODevice::OpenMode )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::open(mode);
}
qint64  PythonQtShell_QLocalSocket::pos() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pos");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "pos(QLocalSocket*)");
      qint64  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::pos();
}
qint64  PythonQtShell_QLocalSocket::readData(char*  arg__1, qint64  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "readData(QLocalSocket*,char* ,qint64 )");
      qint64  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::readData(arg__1, arg__2);
}
qint64  PythonQtShell_QLocalSocket::readLineData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readLineData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "readLineData(QLocalSocket*,char* ,qint64 )");
      qint64  returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::readLineData(data, maxlen);
}
bool  PythonQtShell_QLocalSocket::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "reset(QLocalSocket*)");
      bool  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::reset();
}
bool  PythonQtShell_QLocalSocket::seek(qint64  pos)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "seek");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "seek(QLocalSocket*,qint64 )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&pos};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::seek(pos);
}
qint64  PythonQtShell_QLocalSocket::size() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "size");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "size(QLocalSocket*)");
      qint64  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::size();
}
void PythonQtShell_QLocalSocket::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "timerEvent(QLocalSocket*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalSocket::timerEvent(arg__1);
}
bool  PythonQtShell_QLocalSocket::waitForBytesWritten(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForBytesWritten");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "waitForBytesWritten(QLocalSocket*,int )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&msecs};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::waitForBytesWritten(msecs);
}
bool  PythonQtShell_QLocalSocket::waitForReadyRead(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForReadyRead");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "waitForReadyRead(QLocalSocket*,int )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&msecs};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::waitForReadyRead(msecs);
}
qint64  PythonQtShell_QLocalSocket::writeData(const char*  arg__1, qint64  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "writeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalSocket::staticMetaObject,
      "writeData(QLocalSocket*,const char* ,qint64 )");
      qint64  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalSocket::writeData(arg__1, arg__2);
}
QLocalSocket* PythonQtWrapper_QLocalSocket::new_QLocalSocket(QObject*  parent)
{ 
return new PythonQtShell_QLocalSocket(parent); }

quintptr  PythonQtWrapper_QLocalSocket::socketDescriptor(QLocalSocket* theWrappedObject) const
{
return  theWrappedObject->socketDescriptor();
}

void PythonQtWrapper_QLocalSocket::disconnectFromServer(QLocalSocket* theWrappedObject)
{
 theWrappedObject->disconnectFromServer();
}

qint64  PythonQtWrapper_QLocalSocket::readData(QLocalSocket* theWrappedObject, char*  arg__1, qint64  arg__2)
{
return  ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_readData(arg__1, arg__2);
}

bool  PythonQtWrapper_QLocalSocket::waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs)
{
return  theWrappedObject->waitForDisconnected(msecs);
}

void PythonQtWrapper_QLocalSocket::abort(QLocalSocket* theWrappedObject)
{
 theWrappedObject->abort();
}

void PythonQtWrapper_QLocalSocket::connectToServer(QLocalSocket* theWrappedObject, const QString&  name, QIODevice::OpenMode  openMode)
{
 theWrappedObject->connectToServer(name, openMode);
}

bool  PythonQtWrapper_QLocalSocket::canReadLine(QLocalSocket* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_canReadLine();
}

bool  PythonQtWrapper_QLocalSocket::isSequential(QLocalSocket* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_isSequential();
}

qint64  PythonQtWrapper_QLocalSocket::bytesToWrite(QLocalSocket* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_bytesToWrite();
}

qint64  PythonQtWrapper_QLocalSocket::writeData(QLocalSocket* theWrappedObject, const char*  arg__1, qint64  arg__2)
{
return  ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_writeData(arg__1, arg__2);
}

qint64  PythonQtWrapper_QLocalSocket::readBufferSize(QLocalSocket* theWrappedObject) const
{
return  theWrappedObject->readBufferSize();
}

QString  PythonQtWrapper_QLocalSocket::fullServerName(QLocalSocket* theWrappedObject) const
{
return  theWrappedObject->fullServerName();
}

QLocalSocket::LocalSocketState  PythonQtWrapper_QLocalSocket::state(QLocalSocket* theWrappedObject) const
{
return  theWrappedObject->state();
}

qint64  PythonQtWrapper_QLocalSocket::bytesAvailable(QLocalSocket* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_bytesAvailable();
}

bool  PythonQtWrapper_QLocalSocket::waitForConnected(QLocalSocket* theWrappedObject, int  msecs)
{
return  theWrappedObject->waitForConnected(msecs);
}

void PythonQtWrapper_QLocalSocket::setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size)
{
 theWrappedObject->setReadBufferSize(size);
}

QLocalSocket::LocalSocketError  PythonQtWrapper_QLocalSocket::error(QLocalSocket* theWrappedObject) const
{
return  theWrappedObject->error();
}

bool  PythonQtWrapper_QLocalSocket::isValid(QLocalSocket* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

QString  PythonQtWrapper_QLocalSocket::serverName(QLocalSocket* theWrappedObject) const
{
return  theWrappedObject->serverName();
}

bool  PythonQtWrapper_QLocalSocket::waitForReadyRead(QLocalSocket* theWrappedObject, int  msecs)
{
return  ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_waitForReadyRead(msecs);
}

bool  PythonQtWrapper_QLocalSocket::setSocketDescriptor(QLocalSocket* theWrappedObject, quintptr  socketDescriptor, QLocalSocket::LocalSocketState  socketState, QIODevice::OpenMode  openMode)
{
return  theWrappedObject->setSocketDescriptor(socketDescriptor, socketState, openMode);
}

bool  PythonQtWrapper_QLocalSocket::flush(QLocalSocket* theWrappedObject)
{
return  theWrappedObject->flush();
}

void PythonQtWrapper_QLocalSocket::close(QLocalSocket* theWrappedObject)
{
 ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_close();
}

bool  PythonQtWrapper_QLocalSocket::waitForBytesWritten(QLocalSocket* theWrappedObject, int  msecs)
{
return  ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_waitForBytesWritten(msecs);
}

