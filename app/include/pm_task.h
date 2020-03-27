#ifndef __PM_TASK_H_
#define __PM_TASK_H_

#define PM_TASK_STACK_SIZE       (2048 * 4)
#define PM_TASK_PRIORITY         1
#define PM_TASK_NAME             "PM Task"

#define PM_UPDATE_IGN_INTERVAL   1000
#define PM_SHUTDOWN_COUNTER_MAX  120


typedef enum {
    PM_STATE_STANDBY = 0,
    PM_STATE_ACTIVE,
    PM_STATE_MAX
} PM_State_t;


extern void PmTaskInit(void);

#endif /* __PM_TASK_H_ */
