	THUMB_FUNC_START sub_081272B0
sub_081272B0: @ 0x081272B0
	push {r4,lr}
	ldr r2, _08127310  @ =gRam
	ldr r0, _08127314  @ =0x00001B0A
	add r1, r2, r0
	mov r4, #0
	mov r0, #156
	lsl r0, r0, #8
	strh r0, [r1]
	ldr r1, _08127318  @ =0x00001B09
	add r0, r2, r1
	mov r1, #1
	strb r1, [r0]
	ldr r3, _0812731C  @ =0x00000A38
	add r0, r2, r3
	mov r3, #1
	strh r1, [r0]
	ldr r1, _08127320  @ =0x00001B08
	add r0, r2, r1
	strb r3, [r0]
	ldr r3, _08127324  @ =0x00001B12
	add r0, r2, r3
	mov r1, #32
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strh r1, [r0]
	ldr r1, _08127328  @ =0x00001B0C
	add r0, r2, r1
	strb r4, [r0]
	sub r3, r3, #6
	add r1, r2, r3
	mov r0, #128
	lsl r0, r0, #5
	strh r0, [r1]
	ldr r1, _0812732C  @ =0x000009B5
	add r0, r2, r1
	strb r4, [r0]
	ldr r3, _08127330  @ =0x000009B4
	add r2, r2, r3
	mov r0, #22
	strb r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08127310:
	.4byte gRam
_08127314:
	.4byte 0x00001B0A
_08127318:
	.4byte 0x00001B09
_0812731C:
	.4byte 0x00000A38
_08127320:
	.4byte 0x00001B08
_08127324:
	.4byte 0x00001B12
_08127328:
	.4byte 0x00001B0C
_0812732C:
	.4byte 0x000009B5
_08127330:
	.4byte 0x000009B4
	THUMB_FUNC_END sub_081272B0

