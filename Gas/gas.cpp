#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <linux/fs.h>
#include <errno.h>
#include <string.h>
#include <QtGui> 

#include "gas.h"
#include "ui_QtGas.h"

Gas::Gas(QWidget *parent): QWidget(parent), ui(new Ui::Form)
{
	ui->setupUi(this);
	on_BtnGet_clicked();
}

Gas::~Gas()
{
	delete ui;
}

void Gas::on_BtnGet_clicked()
{
	float ppm, valt =0;
	int fd = open("/dev/adc0",0);
	char str[25];
	perror("get button");
	if (fd < 0)
	{
		perror("open ADC device:");
		return ;
		
	}
	char buffer[30];
	int len = read(fd,buffer,sizeof buffer -1);
	if (len > 0)
	{
		buffer[len] = '\0';
		int value = -1;
		sscanf(buffer, "%d",&value);
		valt = (3.6*value)/4096;
		ppm = 300 +(valt/3.3)*(10000-300);
		sprintf(str, "%.2f",ppm);
		ui->lineEditGas->setText(str);
		sprintf(str,"%1.3f",valt);
		ui->lineEditADC->setText(str);
		
	}
	else {
		perror("read ADC device:");
		return ;
	}
}

