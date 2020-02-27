#!/usr/bin/expect
spawn ./push-1.sh
expect "*Username for 'https://github.com':*"
send "libohao666\r"
expect "*Password for 'https://libohao666@github.com':*"
send "libohaoo0\r"
