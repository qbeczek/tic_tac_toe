#include <iostream>
#include <modern/lib.hpp>
#include "httplib.h"

int main(void) {
    // HTTP
    httplib::Server svr;


    svr.Get("/hi", [](const httplib::Request &, httplib::Response &res) {
        res.set_content("Hello World!", "text/plain");
    });

    svr.listen("0.0.0.0", 8080);
    return 0;
}