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
 * @file filter.h
 */
struct Bitmap;

#ifdef __cplusplus
extern "C" {
#endif

void applyInstafix(struct Bitmap* bitmap);
void applyAnselFilter(struct Bitmap* bitmap);
void applyTestino(struct Bitmap* bitmap);
void applyXPro(struct Bitmap* bitmap);
void applyRetro(struct Bitmap* bitmap);
void applyBlackAndWhiteFilter(struct Bitmap* bitmap);
void applySepia(struct Bitmap* bitmap);
void applyCyano(struct Bitmap* bitmap);
void applyGeorgia(struct Bitmap* bitmap);
int applySahara(struct Bitmap* bitmap);
int applyHDR(struct Bitmap* bitmap);

#ifdef __cplusplus
}
#endif
