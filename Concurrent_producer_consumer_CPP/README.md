# Producer- Consumer
Also called reader-writer pattern

It is a very common way to queue shared data among resources. It allows data to be added in a streaming or batch fashion. The idea is simple, producers can put data to be consumed by the users.

Problem:  if data produced are more than the capacity of the queue then , there exist some methods to handle the data. For example:
* if the newest data is the most valuable then, the queue will drop the oldest data.
* if only samples of data are needed then, the data is dropped randomly.
* If all data are valuable then we can wait until there is a place to hold it. That can lead to slower data sharing but, efficient.

A race condition can occur if the pointer in the queue is moved and the consumer started reading before the producer post the data. That can lead to consumer reading null or garbage data before it is filled with the producer.


execute ```make clean build run```, which will clean, build, and then execute this solution.
