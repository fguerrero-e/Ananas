/*
 * Copyright (C) 2012 Lightbox
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file matrix.h
 */

#ifdef __cplusplus
extern "C" {
#endif

void identMatrix(float *matrix);
void saturateMatrix(float matrix[4][4], float* saturation);
void applyMatrix(Bitmap* bitmap, float matrix[4][4]);
void applyMatrixToPixel(unsigned char* red, unsigned char* green, unsigned char* blue, float matrix[4][4]);
void multiplyMatricies(float a[4][4], float b[4][4], float c[4][4]);

#ifdef __cplusplus
}
#endif
