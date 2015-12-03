//=== Usage: #include <linux/m10mo_workaround.h> ===//

#ifndef _M10MO_ISP_WORKAROUND_H
#define _M10MO_ISP_WORKAROUND_H
int getOpenIntelISP(void);
void setOpenIntelISP(bool b);
void startCapture(void);
int m10mo_read_laser(u8 len, u8 category, u8 reg, u32 *val);
int m10mo_read_fac(u8 len, u8 category, u8 reg, u32 *val);
int m10mo_write_fac(u8 len, u8 category, u8 reg, u32 val);
int m10mo_s_power_fac(int on);
int m10mo_status_fac(void);
void notify_m10mo_atomisp_dead(void);

#endif
