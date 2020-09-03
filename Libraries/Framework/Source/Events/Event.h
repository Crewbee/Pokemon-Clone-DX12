#ifndef __Event_H__
#define __Event_H__

enum EventTypes
{
	EventType_Input,
	EventType_Collision,
	EventType_Door
};

class Event
{
protected:

public:
    Event() {}
    virtual ~Event() {}

    virtual EventTypes GetEventType() = 0;
};

#endif //__Event_H__
