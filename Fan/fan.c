#include "fan.h"

void control_fan(int fan_speed)
{
    int fd;
    int open_flag = fan_speed == 0 ? 0 : 1;
    unsigned int beep_args[2];
    beep_args[0] = fan_speed;
    beep_args[1] = 2000;
    fd = open("/dev/pwm", O_RDWR);

    if(fd < 0)
    {
        printf("open /dev/OIEP_FAN error ! \n");
        return -1;
    }
    
    ioctl(fd, open_flag, &beep_args);
    close(fd);
}



//驱动控制函数，通过参数cmd控制开关，arg控制风扇参数
static long cbt4412_pwm ioctl(struct file *filep, unsigned int
cmd
		unsigned int(*arg)[])
{
	unsigned int pwm lvl=(*arg)[0];
    unsigned int pwm freq =(*arg)[1];
	// 根据 cmd 判断开关
	switch(cmd){
	case PWM IOCTL SET FREQ:
		if(pwm freq == 0)
			return -EINVAL;
		//开启风扇
		pwm_set _freq(pwm lvl,pwm freq);
		break;
	case PWM IOCTL:
	default:
		// 关闭风扇
		pwm stop();
		break;
	}
	return 0;
}