#!/usr/bin/expect
spawn ./push-1.sh
expect "*Username*" {send "libohao666\r"}
expect "*Password*" {send "libohao0\r"}
