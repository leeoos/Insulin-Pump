/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "System_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void System_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
  /* sample 1 */
  data->modelData->samplesInfo[i].index = 1;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = data->simulationInfo->realParameter[9] /* pu.T PARAM */;
  assertStreamPrint(threadData,data->modelData->samplesInfo[i].interval > 0.0, "sample-interval <= 0.0");
  i++;
  /* sample 2 */
  data->modelData->samplesInfo[i].index = 2;
  data->modelData->samplesInfo[i].start = 100.0;
  data->modelData->samplesInfo[i].interval = data->simulationInfo->realParameter[13] /* pu_co.T PARAM */;
  assertStreamPrint(threadData,data->modelData->samplesInfo[i].interval > 0.0, "sample-interval <= 0.0");
  i++;
  /* sample 3 */
  data->modelData->samplesInfo[i].index = 3;
  data->modelData->samplesInfo[i].start = 100.0;
  data->modelData->samplesInfo[i].interval = data->simulationInfo->realParameter[3] /* mo_av.T PARAM */;
  assertStreamPrint(threadData,data->modelData->samplesInfo[i].interval > 0.0, "sample-interval <= 0.0");
  i++;
  /* sample 4 */
  data->modelData->samplesInfo[i].index = 4;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = DIVISION(data->simulationInfo->realParameter[1] /* gen.Meal_period PARAM */,2.0,"2.0");
  assertStreamPrint(threadData,data->modelData->samplesInfo[i].interval > 0.0, "sample-interval <= 0.0");
  i++;
  /* sample 5 */
  data->modelData->samplesInfo[i].index = 5;
  data->modelData->samplesInfo[i].start = data->simulationInfo->realParameter[0] /* gen.Meal_length PARAM */;
  data->modelData->samplesInfo[i].interval = DIVISION(data->simulationInfo->realParameter[1] /* gen.Meal_period PARAM */,2.0,"2.0");
  assertStreamPrint(threadData,data->modelData->samplesInfo[i].interval > 0.0, "sample-interval <= 0.0");
  i++;
}

const char *System_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  *out_EquationIndexes = NULL;
  return "empty";
}

/* forwarded equations */

int System_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  
  TRACE_POP
  return 0;
}

int System_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;


#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *System_relationDescription(int i)
{
  return "empty";
}

int System_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  
  if(evalforZeroCross) {
  } else {
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

