Build a multi-threaded Web proxy server that is capable of delivering Web content on 
behalf of a remote Web server. When a user's browser is configured to connect via a proxy server, 
the browser establishes a connection to the proxy server's machine and forwards its 
complete request to the proxy server rather than the "real" Web server. The proxy server 
accepts user's HTTP requests and forwards them to their final destination - essentially 
it introduces an extra "hop" between the user's browser (or the client) and the Web server.
 
There are several reasons why people want to use a proxy server instead of connecting to the
 remote Web server directly: 
 1) users want to anonymize themselves from the Web server; 
 2) a corporation might want to monitor or restrict employees' Web surfing; 
 3) a proxy can be used to locally cache data in order to reduce the amount of global traffic.
 
Multi-threading is not crucial to the functionality of a Web proxy server, 
but it is important to allow the server to process multiple simultaneous requests 
in parallel, a must-have feature for a practical server.
