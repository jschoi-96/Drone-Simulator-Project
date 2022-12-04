#ifndef IWEATHER_H
#define IWEATHER_H
#include <vector>

#include "IEntity.h"
#include "IReaction.h"
class IWeather {
 public:
  virtual void execute(IEntity* parent, IReaction* reaction, double dt,
                       std::vector<IEntity*> scheduler) = 0;
  virtual void update(
      double dt,
      std::vector<IEntity*> scheduler) = 0;  // must get called once per frame
  virtual bool is_inside(
      IEntity* parent) = 0;  // if the object is affected by the weather
};
#endif