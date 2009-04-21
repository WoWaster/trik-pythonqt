#ifndef PYTHONQTWRAPPER_QGRAPHICSTEXTITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSTEXTITEM_H

#include <qgraphicsitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextCursor>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsTextItem : public QGraphicsTextItem
{
public:
    PythonQtShell_QGraphicsTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsTextItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsTextItem(text, parent, scene),_wrapper(NULL) {};

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual QPainterPath  shape() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsTextItem : public QGraphicsTextItem
{ public:
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsTextItem::inputMethodQuery(query); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsTextItem::extension(variant); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragMoveEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragEnterEvent(event); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsTextItem::contains(point); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsTextItem::keyReleaseEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverEnterEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverMoveEvent(event); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsTextItem::contextMenuEvent(event); }
inline int  promoted_type() const { return QGraphicsTextItem::type(); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseDoubleClickEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseReleaseEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsTextItem::keyPressEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mousePressEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragLeaveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsTextItem::inputMethodEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsTextItem::focusInEvent(event); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsTextItem::opaqueArea(); }
inline QRectF  promoted_boundingRect() const { return QGraphicsTextItem::boundingRect(); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseMoveEvent(event); }
inline bool  promoted_sceneEvent(QEvent*  event) { return QGraphicsTextItem::sceneEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsTextItem::focusOutEvent(event); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsTextItem::paint(painter, option, widget); }
inline QPainterPath  promoted_shape() const { return QGraphicsTextItem::shape(); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverLeaveEvent(event); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsTextItem::isObscuredBy(item); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dropEvent(event); }
};

class PythonQtWrapper_QGraphicsTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsTextItem::Type};
public slots:
QGraphicsTextItem* new_QGraphicsTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsTextItem* new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsTextItem(QGraphicsTextItem* obj) { delete obj; } 
   QTextCursor  textCursor(QGraphicsTextItem* theWrappedObject) const;
   void setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags);
   QVariant  inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   QVariant  extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const;
   void dragMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void dragEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c);
   void setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width);
   bool  contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   void keyReleaseEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event);
   void hoverEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   bool  openExternalLinks(QGraphicsTextItem* theWrappedObject) const;
   void setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open);
   void hoverMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void contextMenuEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   QColor  defaultTextColor(QGraphicsTextItem* theWrappedObject) const;
   QTextDocument*  document(QGraphicsTextItem* theWrappedObject) const;
   int  type(QGraphicsTextItem* theWrappedObject) const;
   void mouseDoubleClickEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font);
   void mouseReleaseEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   Qt::TextInteractionFlags  textInteractionFlags(QGraphicsTextItem* theWrappedObject) const;
   void keyPressEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event);
   void mousePressEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html);
   void setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text);
   void dragLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void inputMethodEvent(QGraphicsTextItem* theWrappedObject, QInputMethodEvent*  event);
   void focusInEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event);
   void setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor);
   void adjustSize(QGraphicsTextItem* theWrappedObject);
   QPainterPath  opaqueArea(QGraphicsTextItem* theWrappedObject) const;
   void setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document);
   QRectF  boundingRect(QGraphicsTextItem* theWrappedObject) const;
   void mouseMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   bool  sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event);
   void focusOutEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event);
   void paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   QPainterPath  shape(QGraphicsTextItem* theWrappedObject) const;
   QFont  font(QGraphicsTextItem* theWrappedObject) const;
   QString  toHtml(QGraphicsTextItem* theWrappedObject) const;
   void hoverLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   QString  toPlainText(QGraphicsTextItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const;
   void dropEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   qreal  textWidth(QGraphicsTextItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSTEXTITEM_H
