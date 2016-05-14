#define __NR_blink	8192
#define __NR_setfont	8193
#define __NR_gradient		8194
#define __NR_tb1		8195
/* #define __NR_run		8196 obsolete */
/* #define __NR_stop		8197 obsolete */
#define __NR_temp		8198
#define __NR_random		8199

int vmwos_blink(int value);
int vmwos_tb1(void);
int vmwos_setfont(int which);
int vmwos_gradient(void);
int vmwos_get_temp(void);
int vmwos_random(uint32_t *buffer);
