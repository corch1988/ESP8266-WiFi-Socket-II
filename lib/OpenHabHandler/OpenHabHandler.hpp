#ifndef __OPENHAB_HANDLER_H__
#define __OPENHAB_HANDLER_H__

#include <App.hpp>

class OpenHabHandler
{
private:
  time_t lastSendTimestamp;
  void sendValue( const char* itemname, const float value );
  void sendValueV1( const char* itemname, const float value );
  void sendValueV2( const char* itemname, const float value );  
  void sendValueV1( const char* value );
  void sendValueV2( const char* value );

public:
  OpenHabHandler();
  void sendValue( const char* value );
  void handle( time_t now );
};

extern OpenHabHandler openHabHandler;

#endif
