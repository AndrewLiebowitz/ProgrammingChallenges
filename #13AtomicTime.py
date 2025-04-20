
import ntplib

from datetime import datetime, timezone

#from datetime import datetime, timezone
#from dateutil import tz
#import pytz

print("TEST1")
print("Basic datetime.now() function being called")
for iterator in range(10):
  print(datetime.now())

print("TEST#2")
NTPObject = ntplib.NTPClient()
print(NTPObject.request('north-america.pool.ntp.org').tx_time)

print("TEST#3")
for iterator in range(100000):
  print(datetime.utcfromtimestamp(NTPObject.request('pool.ntp.org').tx_time))

#print(datetime.now(tzinfo=tz.tzlocal()))


#print(datetime.datetime.now())

#print(datetime.now(tzinfo=-5))

#timezone.edt

#pytz
