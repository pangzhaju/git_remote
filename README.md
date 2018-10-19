f>

## git常用

创建仓修改第五行

```sh
$ git init
```

Install with [yarn](https://yarnpkg.com):

```sh
$ yarn add arr-diff
```
sfsfs
Install with [bower](https://bower.io/)

```sh
$ bower install arr-diff --save
```

## Usage 改动 fsf 

Returns the difference between the first array and additional arrays.

```js
var diff = require('arr-diff');

var a = ['a', 'b', 'c', 'd'];
var b = ['b', 'c'];

console.log(diff(a, b))
//=> ['a', 'd']
```

## Benchmarks

This library versus [array-differ](https://github.com/sindresorhus/array-differ), on April 14, 2017:

```
Benchmarking: (4 of 4)
 · long-dupes
 · long
 · med
 · short

# benchmark/fixtures/long-dupes.js (100804 bytes)
  arr-diff-3.0.0 x 822 ops/sec ±0.67% (86 runs sampled)
  arr-diff-4.0.0 x 2,141 ops/sec ±0.42% (89 runs sampled)
  array-differ x 708 ops/sec ±0.70% (89 runs sampled)

  fastest is arr-diff-4.0.0

# benchmark/fixtures/long.js (94529 bytes)
  arr-diff-3.0.0 x 882 ops/sec ±0.60% (87 runs sampled)
  arr-diff-4.0.0 x 2,329 ops/sec ±0.97% (83 runs sampled)
  array-differ x 769 ops/sec ±0.61% (90 runs sampled)

  fastest is arr-diff-4.0.0

# benchmark/fixtures/med.js (708 bytes)
  arr-diff-3.0.0 x 856,150 ops/sec ±0.42% (89 runs sampled)
  arr-diff-4.0.0 x 4,665,249 ops/sec ±1.06% (89 runs sampled)
  array-differ x 653,888 ops/sec ±1.02% (86 runs sampled)

  fastest is arr-diff-4.0.0

# benchmark/fixtures/short.js (60 bytes)
  arr-diff-3.0.0 x 3,078,467 ops/sec ±0.77% (93 runs sampled)
  arr-diff-4.0.0 x 9,213,296 ops/sec ±0.65% (89 runs sampled)
  array-differ x 1,337,051 ops/sec ±0.91% (92 runs sampled)

  fastest is arr-diff-4.0.0
```

## About

### Related projects

* [arr-flatten](https://www.npmjs.com/package/arr-flatten): Recursively flatten an array or arrays. This is the fastest implementation of array flatten. | [homepage](https://github.com/jonschlinkert/arr-flatten "Recursively flatten an array or arrays. This is the fastest implementation of array flatten.")
* [array-filter](https://www.npmjs.com/package/array-filter): Array#filter for older browsers. | [homepage](https://github.com/juliangruber/array-filter "Array#filter for older browsers.")
* [array-intersection](https://www.npmjs.com/package/array-intersection): Return an array with the unique values present in _all_ given arrays using strict equality… [more](https://github.com/jonschlinkert/array-intersection) | [homepage](https://github.com/jonschlinkert/array-intersection "Return an array with the unique values present in _all_ given arrays using strict equality for comparisons.")

