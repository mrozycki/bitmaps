Animacje!
=========

Tworzymy kilka obrazków z nazwami w kolejności alfabetycznej.

Używamy `convert` aby przerobić je na GIFa:

```
convert render/*.ppm render.gif
```

Albo `ffmpeg` aby zrobić z nich plik MP4:

```
ffmpeg -i render/frame_%04d.ppm -f mp4 -pix_fmt yuv420p -c:v libx264 render.mp4
```