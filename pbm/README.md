Portable BitMap
===============

Podajemy format (`P1`), szerokość, wysokość i dla kolejnych pikseli 0 (biały) lub 1 (czarny).

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

Zapisujemy jako `image.pbm`.

Konwertujemy do PNG używając `convert image.pbm image.png`.