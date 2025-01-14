---
date: 2024-07-12T00:00+03:00
tags:
  - inbox
sr-due: 2024-08-26
sr-interval: 1
sr-ease: 230
---

# Mikrotik

> MikroTik makes networking hardware and software, which is used in nearly all
> countries of the world. Our mission is to make existing Internet technologies
> faster, more powerful and affordable to wider range of users.\
> — <cite>[MikroTik Routers and Wireless](https://mikrotik.com)</cite>

## Mini PCI modem as usb 4g modem

Need to update modem frimware and try to use this script

```bash
ls -l /dev/ttyACM*
mysp=/dev/ttyACM1
myapn=internet.rtk.ru
mydns1=8.8.8.8
mydns2=1.1.1.1

echo AT E0 V1| socat - /dev/ttyACM1,crnl
echo AT+CFUN?| socat - /dev/ttyACM1,crnl
echo AT+CFUN=4| socat - /dev/ttyACM1,crnl
echo AT+CFUN?| socat - /dev/ttyACM1,crnl
echo AT+CMEE=2| socat - /dev/ttyACM1,crnl
echo AT+CREG=2| socat - /dev/ttyACM1,crnl
echo AT+CGREG=2| socat - /dev/ttyACM1,crnl
echo AT+CEREG=2| socat - /dev/ttyACM1,crnl
echo AT+CGEREP=2,0| socat - /dev/ttyACM1,crnl

echo AT+CMGF=0| socat - /dev/ttyACM1,crnl
echo AT+CNMI=1,1,0,1,0| socat - /dev/ttyACM1,crnl
echo AT+EEMOPT=1| socat - /dev/ttyACM1,crnl
echo AT*MRD_SN?| socat - /dev/ttyACM1,crnl
echo AT+CFUN=4| socat - /dev/ttyACM1,crnl

echo AT*CGDFLT=0,"IP","$myapn",,,,,,,,,,1,0,,,,,,,1| socat - /dev/ttyACM1,crnl
echo AT*CGDFAUTH=0,0| socat - /dev/ttyACM1,crnl
echo AT+CPIN?| socat - /dev/ttyACM1,crnl
echo AT+CPMS="SM","SM","SM"| socat - /dev/ttyACM1,crnl
echo AT+CFUN?| socat - /dev/ttyACM1,crnl

echo AT+ICCID?| socat - /dev/ttyACM1,crnl

echo AT+CNUM| socat - /dev/ttyACM1,crnl

echo AT+CIMI| socat - /dev/ttyACM1,crnl

echo AT+CPIN?| socat - /dev/ttyACM1,crnl

echo AT*BAND=7,3,147,32,524487,0,2,0| socat - /dev/ttyACM1,crnl

echo AT+COPS=0| socat - /dev/ttyACM1,crnl

echo AT+CFUN=1| socat - /dev/ttyACM1,crnl
echo AT+COPS=3,0| socat - /dev/ttyACM1,crnl

echo AT+CGDCONT?| socat - /dev/ttyACM1,crnl
echo AT+CGCONTRDP=5| socat - /dev/ttyACM1,crnl

echo ATE0| socat - /dev/ttyACM1,crnl
echo AT+CFUN=0| socat - /dev/ttyACM1,crnl
echo ATE0 | socat - /dev/ttyACM1,crnl
echo AT+CFUN? | socat - /dev/ttyACM1,crnl
echo AT+CFUN=4 | socat - /dev/ttyACM1,crnl
echo AT+CFUN? | socat - /dev/ttyACM1,crnl
echo AT+CMEE=2 | socat - /dev/ttyACM1,crnl
echo AT+CREG=2 | socat - /dev/ttyACM1,crnl
echo AT+CGREG=2 | socat - /dev/ttyACM1,crnl
echo AT+CEREG=2 | socat - /dev/ttyACM1,crnl
echo AT+CGEREP=2,0 | socat - /dev/ttyACM1,crnl
echo AT+CMGF=0 | socat - /dev/ttyACM1,crnl
echo AT+CNMI=1,1,0,1,0 | socat - /dev/ttyACM1,crnl
echo AT+EEMOPT=1 | socat - /dev/ttyACM1,crnl
echo AT*MRD_SN? | socat - /dev/ttyACM1,crnl
echo AT+CPIN? | socat - /dev/ttyACM1,crnl

echo ATE0| socat - /dev/ttyACM1,crnl
echo AT+CFUN=0| socat - /dev/ttyACM1,crnl
echo ATE0 | socat - /dev/ttyACM1,crnl
echo AT+CFUN? | socat - /dev/ttyACM1,crnl
echo AT+CFUN=4 | socat - /dev/ttyACM1,crnl
echo AT+CFUN? | socat - /dev/ttyACM1,crnl
echo AT+CMEE=2 | socat - /dev/ttyACM1,crnl
echo AT+CREG=2 | socat - /dev/ttyACM1,crnl
echo AT+CGREG=2 | socat - /dev/ttyACM1,crnl
echo AT+CEREG=2 | socat - /dev/ttyACM1,crnl
echo AT+CGEREP=2,0 | socat - /dev/ttyACM1,crnl
echo AT+CMGF=0 | socat - /dev/ttyACM1,crnl
echo AT+CNMI=1,1,0,1,0 | socat - /dev/ttyACM1,crnl
echo AT+EEMOPT=1 | socat - /dev/ttyACM1,crnl
echo AT*MRD_SN? | socat - /dev/ttyACM1,crnl
echo AT+CPIN? | socat - /dev/ttyACM1,crnl
```
