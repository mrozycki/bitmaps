Animations!
===========

Generate multiple files with names in alphabetical order.

Use `convert` to generate a GIF:

```
convert render/*.ppm render.gif
```

Or `ffmpeg` to generate an MP4:

```
ffmpeg -i render/frame_%04d.ppm -f mp4 -pix_fmt yuv420p -c:v libx264 render.mp4
```