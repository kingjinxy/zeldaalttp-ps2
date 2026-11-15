	THUMB_FUNC_START sub_080B51DC
sub_080B51DC: @ 0x080B51DC
	push {r4,lr}
	sub sp, sp, #4
	bl sub_08069F08
	ldr r4, _080B527C  @ =gRam
	ldr r1, _080B5280  @ =0x0000099D
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080B5272
	ldr r2, _080B5284  @ =0x00000A4C
	add r1, r4, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bl sub_08069E08
	ldr r0, _080B5288  @ =0x007F007F
	str r0, [sp]
	ldr r1, _080B528C  @ =0x06008000
	ldr r2, _080B5290  @ =0x01000800
	mov r0, sp
	bl CpuFastSet
	ldr r1, _080B5294  @ =0x00001AB4
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _080B5298  @ =0x00000A28
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080B529C  @ =0x00001AB6
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080B52A0  @ =0x00001A98
	add r0, r4, r1
	ldrh r1, [r0]
	sub r2, r2, #218
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080B52A4  @ =0x00001A9E
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080B52A8  @ =0x00001A9A
	add r0, r4, r1
	ldrh r1, [r0]
	sub r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	mov r1, #213
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080B52AC  @ =0x00001A9C
	add r0, r4, r1
	ldrh r1, [r0]
	sub r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080B52B0  @ =0x00001AA2
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
_080B5272:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B527C:
	.4byte gRam
_080B5280:
	.4byte 0x0000099D
_080B5284:
	.4byte 0x00000A4C
_080B5288:
	.4byte 0x007F007F
_080B528C:
	.4byte 0x06008000
_080B5290:
	.4byte 0x01000800
_080B5294:
	.4byte 0x00001AB4
_080B5298:
	.4byte 0x00000A28
_080B529C:
	.4byte 0x00001AB6
_080B52A0:
	.4byte 0x00001A98
_080B52A4:
	.4byte 0x00001A9E
_080B52A8:
	.4byte 0x00001A9A
_080B52AC:
	.4byte 0x00001A9C
_080B52B0:
	.4byte 0x00001AA2
	THUMB_FUNC_END sub_080B51DC

