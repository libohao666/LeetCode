git add *
git commit -m $(date "+%Y%m%d")
git push origin master
expect "*Username for 'https://github.com':*"
send "libohao666"
expect "*Password for 'https://libohao666@github.com':*"
send "libohao0"
