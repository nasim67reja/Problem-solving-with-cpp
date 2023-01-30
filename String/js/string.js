"use strict";

// 1108. Defanging an IP Address

var defangIPaddr = function (address) {
  return address.split(".").join("[.]");
};

// console.log(defangIPaddr("1.1.1.1"));
