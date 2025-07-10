// Introduction
// The first century spans from the year 1 up to and including the year 100, the second century - from the year 101 up to and including the year 200, etc.

// Task
// Given a year, return the century it is in.

// Examples
// 1705 --> 18
// 1900 --> 19
// 1601 --> 17
// 2000 --> 20
// 2742 --> 28


function century(year) {   

  return year % 100 === 0 ? year / 100 : Math.floor(year / 100) + 1;

//   if year % 100 === 0 
//   the year ends in 00 ie 1900 1700 and are in the respective 19 and 17th century
//   so we return ? year / 100, being 19th and 17th century
//   if not even divide we round down, ie 1701 / 100 = 17.01 rounded down 17 add 1 = 18th century

}

// vatson
const century2 = year => Math.ceil(year/100)