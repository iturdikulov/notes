---
date: 2023-07-15
external:
  - https://www.darktable.org/
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 269
---

# Darktable

> darktable is an open source [[photography]] workflow application and raw
> developer. A virtual lighttable and darkroom for photographers. It manages
> your digital negatives in a database (build personal
> [[stock_photography|photography stock]]), lets you view them through a
> zoomable lighttable and enables you to develop raw images and enhance them.\
> — <cite>[darktable](https://www.darktable.org/)</cite>

## Darktable Modules

### Basic Group

- Crop and rotate (including keystone for architectural)
- Shadows and Highlights
- Base curve (turn this off if you don't like it and use your own tone curve - see Tone Group)
- Exposure
- Demosaic (PPG is faster)
- White balance

### Tone Group

- Levels
- Tone curve
- Zone system
- Local contrast

### Colour Group

- Velvia
- Channel Mixer (check table of film values below)
- Colour Correction for tinting and split toning
- Monochrome
- Color zones (modifies color in images)

### Correction Group

- Sharpen
- Denoise - Non local means (see denoising starting point below)
- Lens correction
- Spot removal

### Effect group

- Watermark
- Framing
- Splittoning
- Vignetting
- Soften (Orton effect)
- Grain
- Graduated Density

## Channel Mixer B&W film

Film Type (Red, Green, Blue)

- AGFA 200X (0.18, 0.41, 0.41)
- Agfapan 25 (0.25, 0.39, 0.36)
- Agfapan 100 (0.21, 0.40, 0.39)
- Agfapan 400 (0.20, 0.41, 0.39)
- Ilford Delta 100 (0.21,	0.42, 0.37)
- Ilford Delta 400 (0.22,	0.42, 0.36)
- Ilford Delta 3200 (0.31, 0.36, 0.33)
- Ilford FP4 (0.28, 0.41, 0.31)
- Ilford HP5 (0.23, 0.37, 0.40)
- Ilford Pan F (0.33, 0.36, 0.31)
- Ilford SFX (0.36, 0.31, 0.33)
- Ilford XP2 Super (0.21,	0.42, 0.37)
- Kodak T-Max 100 (0.24, 0.37, 0.39)
- Kodak T-Max 400 (0.27, 0.36, 0.37)
- Kodak Tri-X 400 (0.25, 0.35, 0.40)
- Normal Contrast (0.43, 0.33, 0.30)
- High Contrast (0.40, 0.34, 0.60)
- Generic B/W (0.24, 0.68, 0.08)

## Denoise (non-local means) starting point

Take a tenth of the ISO value. So if ISO is 160...

luma 16%
chroma 32% (double luma)

## Common ND filters

Filter ([ev] or f-stop, absorbance, transmittance)
ND2 (-1, 0.3, 50%)
ND4 (-2, 0.6, 25%)
ND8 (-3, 0.9, 12.5%)
ND400 (-9, 2.7, 0.195%)

## Darktable Workflow

### Basic workflow

- Copy a film roll (a directory of RAW images) into a directory on the machine
running Darktable.
- Import the film roll into Darktable.
- Review the images using lighttable mode and remove any images that are beyond
repair, I mark them with `F1`, filter with `S-F1` and then delete.
- Take a snapshot of the image, so we can do a before and after comparison.
- Adjust the white balance.
- Exposure compensation and recovery.
- Noise reduction.
- Lens corrections.
- Capture sharpening.
- Contrast with levels and curves.
- Crop and rotate the image.
- Color and selective enhancements such as saturation, color adjustments and
spot removal.
- Sync directories, I do 2-way compare (NEW>OLD) and move OLD images
into archive.

### Output workflow

- Resize the image for the web or printing.
- Output sharpening.

### Black and white workflow

- Monochrome plugin
- Channel mixer with the combination of RGB values equalling one.
- Colour zones plugin.
- Improve contrast with tone curve plugin.

## HDR Workflow

- Import bracketed shots into Darktable.
- Click on Create HDR.
- Turn off all modules in the 'Active' group.
- Adjust the exposure.

With a night shot with a few light sources correct the light source to bring back as much detail into the light source without lowering its intensity. With a daylight show expose the darker parts of the image.

- Use the global tonemap module. Day shot you need to bring out highlights. Night shot bring out shadows.
- Fine tune the exposure.
- Use the equaliser module to increase contrast.

## External links

- [ ] [DarkTable](https://www.youtube.com/playlist?list=PLlYWvzmJQTrRq7JrYdD7k3-8-v-uHnhK_)
- http://www.cambridgeincolour.com/tutorials/digital-photo-editing-workflow.htm
- http://www.darktable.org/resources/
- http://www.darktable.org/2012/10/process-hdr-images-using-darktable/
