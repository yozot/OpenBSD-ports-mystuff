[DONE]
- make checksum

  master site changed to GITHUB, in accordance with the official inria site (coq.inria.fr)
  which now directs to github URL for downloading.

- make extract

  the filename of the archive from GITHUB is with only version string (V8.8.0.tar.gz),
  which generates WRKDIR/V8.8.0/.
  I think prefix "coq" should be there to avoid potential collision with others.


[TODO]

  buid-depends on camlp5 instead of camlp4...

- make configure
- make build
- make fake
- make package

-- yozo.  Sat Apr 21 17:09:13 JST 2018
