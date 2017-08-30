// userspace API

int fserver_creat(const char *, int flags); //.?

int fserver_open(const char *);

int fserver_accept(int s_fd, int flags);

int fserver_response_fd(int c_fd, int fd);

int fserver_response_error(int c_fd, int err);

int fserver_get_request(int c_fd, fserver_request_t *);

// open blocks on client's side. 
