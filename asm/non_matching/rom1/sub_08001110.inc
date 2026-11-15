	.syntax unified
	THUMB_FUNC_START sub_08001110
sub_08001110: @ 0X08001110
	movs r6, #33
	lsrs r0, r0, #32
	movs r6, #189
	lsrs r0, r0, #32
	movs r7, #57
	lsrs r0, r0, #32
	movs r7, #105
	lsrs r0, r0, #32
	movs r7, #113
	lsrs r0, r0, #32
	movs r4, #89
	lsrs r0, r0, #32
	movs r6, #105
	lsrs r0, r0, #32
	movs r7, #189
	lsrs r0, r0, #32
	movs r7, #205
	lsrs r0, r0, #32
	movs r7, #225
	lsrs r0, r0, #32
	movs r7, #237
	lsrs r0, r0, #32
	movs r6, #25
	lsrs r0, r0, #32
	cmp r0, #57
	lsrs r0, r0, #32
	cmp r0, #77
	lsrs r0, r0, #32
	cmp r0, #97
	lsrs r0, r0, #32
	cmp r0, #121
	lsrs r0, r0, #32
	cmp r0, #209
	lsrs r0, r0, #32
	cmp r0, #221
	lsrs r0, r0, #32
	cmp r0, #233
	lsrs r0, r0, #32
	cmp r0, #245
	lsrs r0, r0, #32
	cmp r1, #73
	lsrs r0, r0, #32
	cmp r1, #85
	lsrs r0, r0, #32
	cmp r1, #97
	lsrs r0, r0, #32
	cmp r1, #109
	lsrs r0, r0, #32
	cmp r1, #121
	lsrs r0, r0, #32
	cmp r3, #13
	lsrs r0, r0, #32
	cmp r1, #141
	lsrs r0, r0, #32
	cmp r1, #145
	lsrs r0, r0, #32
	movs r5, #49
	lsrs r0, r0, #32
	movs r4, #113
	lsrs r0, r0, #32
	cmp r2, #117
	lsrs r0, r0, #32
	cmp r2, #129
	lsrs r0, r0, #32
	cmp r2, #141
	lsrs r0, r0, #32
	cmp r2, #153
	lsrs r0, r0, #32
	cmp r2, #93
	lsrs r0, r0, #32
	movs r6, #237
	lsrs r0, r0, #32
	cmp r2, #9
	lsrs r0, r0, #32
	cmp r1, #1
	lsrs r0, r0, #32
	movs r6, #25
	lsrs r0, r0, #32
	cmp r2, #37
	lsrs r0, r0, #32
	movs r4, #173
	lsrs r0, r0, #32
	cmp r2, #249
	lsrs r0, r0, #32
	movs r4, #77
	lsrs r0, r0, #32
	movs r4, #89
	lsrs r0, r0, #32
	lsrs r7, r7, #3
	.4byte 0x400ff18
	.4byte 0xc10ff1c
	.4byte 0xffffff14
	.4byte 0xf800ffff
	movs r0, r1
	lsrs r0, r0, #32
	lsls r0, r7, #3
	asrs r0, r5, #7
	lsrs r0, r0, #32
	asrs r4, r7, #7
	lsrs r0, r0, #32
	asrs r0, r2, #8
	lsrs r0, r0, #32
	asrs r4, r4, #8
	lsrs r0, r0, #32
	lsls r0, r3, #1
	movs r1, r0
	lsls r4, r1, #1
	movs r1, r0
	lsls r4, r4, #1
	movs r0, r1
	lsls r6, r4, #1
	movs r2, r0
	movs r0, r0
	movs r0, r0
	lsls r1, r3, #1
	movs r3, r0
	lsls r6, r1, #1
	movs r3, r0
	lsls r6, r4, #1
	.syntax unified
	.thumb
