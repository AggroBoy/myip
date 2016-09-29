myip
======

An fCGI script that returns the client IP address. Running my own beats
hammering someone else's service.

Note that the install script assumes your servers look a lot like mine, and
could easily cause damage if used carelessly. You probably shouldn't use it
unless you're very sure it meets your needs. It's only a convenience anyway;
this is about as simple as fCGI gets - just wire up systat.cgi to your
webserver as you would any other fCGI script.
