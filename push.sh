git add *
git commit -m $(date "+%Y%m%d")
git push origin master
#!/esr/bin/expect
expect "*Username for 'https://github.com':*"
send "libohao666\r"
expect "*Password for 'https://libohao666@github.com':*"
send "libohaoo0\r"
