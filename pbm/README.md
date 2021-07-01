Portable BitMap
===============

Specify format (`P1`), width, height and 0 (white) or 1 (black) for every pixel.

```
P1 10 10
0 0 0 0 0 0 0 0 0 0
0 0 1 0 0 0 0 1 0 0
0 1 1 1 0 0 1 1 1 0
0 0 1 0 0 0 0 1 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 1 0 0 0 0 0 0 1 0
0 0 1 0 0 0 0 1 0 0
0 0 0 1 1 1 1 0 0 0
0 0 0 0 0 0 0 0 0 0
```

Save as `image.pbm`.

Convert to PNG with `convert image.pbm image.png`.