# I. Building the rootfs

    I. What you have made for the history to work. (no screen capture needed).

    II. Give the option you have removed and make a screen capture of the failed boot.

    III. Provide a screen capture proving that your system call works. Nothing else is required.

    IV. Give your code or screen shots of your code, and provide screen shots of your tests.

    Bonus work. give a link to your VM.



 ```bash
$ cd
$ echo 'export HISTFILE="/usr/src/history_file"' >> /usr/src/initrid/root/.profile
$ makeinitrd > /boot/core.gz
$ reboot
 ```

 II. Give the option you have removed and make a screen capture of the failed boot.

After run
```bash
$ make menuconfig
```
we have the following screen ![](screenshots/screenshot_29-12-2022_19h44m51.png)

By searching with /ram, we can find that it is in the General setup
![](screenshots/screenshot_29-12-2022_19h51m16.png)

We disable Initial RAM filesystem and RAM disk (initramfs/initrd) support
![](screenshots/screenshot_29-12-2022_19h54m57.png)
save as removeRAMsupport.config and exit

After compiling new kernel, we have
![](screenshots/screenshot_29-12-2022_20h07m19.png)

second time compiling
![](screenshots/screenshot_29-12-2022_23h33m14.png)

Once compiled, the new kernel should be made available at startup choice menu. This menu is offered by the grub bootloader. Explain what a bootloader does and at which step of the boot process it is called

At startup, select your new kernel and check whether it works, or not. If it doesn't boot, check where it stops during the boot process, and explain why. Don't spend too much time on this exercise, the most interesting part of this laboratory course is still to come! When you have finished this first exercise, reboot on the default kernel i.e., on the one initially provided, and rerun make menuconfig: your objective is to select initially selected options (configuration you had when you first run make menuconfig). 

After reboot, we have
![](screenshots/screenshot_29-12-2022_23h12m03.png)


failed boot
![](screenshots/screenshot_29-12-2022_23h34m56.png)

![](screenshots/screenshot_29-12-2022_23h35m23.png)
![](screenshots/screenshot_29-12-2022_23h36m15.png)


add
![](screenshots/screenshot_30-12-2022_17h08m37.png)
![](screenshots/screenshot_30-12-2022_17h09m23.png)

finish compile new kernel with new syscall
![](screenshots/screenshot_30-12-2022_17h16m38.png)


after correcting and compiling, we have
![](screenshots/screenshot_30-12-2022_17h32m34.png)

create example.c file at /usr/src/test_syscall

![](screenshots/screenshot_30-12-2022_17h40m18.png)