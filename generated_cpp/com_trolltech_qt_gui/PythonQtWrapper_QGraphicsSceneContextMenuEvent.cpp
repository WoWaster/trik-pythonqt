#include "PythonQtWrapper_QGraphicsSceneContextMenuEvent.h"

#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

QGraphicsSceneContextMenuEvent* PythonQtWrapper_QGraphicsSceneContextMenuEvent::new_QGraphicsSceneContextMenuEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneContextMenuEvent(type); }

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneContextMenuEvent::modifiers(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->modifiers();
}

QPointF  PythonQtWrapper_QGraphicsSceneContextMenuEvent::pos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->pos();
}

QGraphicsSceneContextMenuEvent::Reason  PythonQtWrapper_QGraphicsSceneContextMenuEvent::reason(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->reason();
}

QPointF  PythonQtWrapper_QGraphicsSceneContextMenuEvent::scenePos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->scenePos();
}

QPoint  PythonQtWrapper_QGraphicsSceneContextMenuEvent::screenPos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->screenPos();
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setModifiers(QGraphicsSceneContextMenuEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
theWrappedObject->setModifiers(modifiers);
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos)
{
theWrappedObject->setPos(pos);
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setReason(QGraphicsSceneContextMenuEvent* theWrappedObject, QGraphicsSceneContextMenuEvent::Reason  reason)
{
theWrappedObject->setReason(reason);
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setScenePos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos)
{
theWrappedObject->setScenePos(pos);
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setScreenPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPoint&  pos)
{
theWrappedObject->setScreenPos(pos);
}

