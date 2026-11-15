	THUMB_FUNC_START sub_08122728
sub_08122728: @ 0x08122728
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	lsl r1, r1, #24
	lsr r4, r1, #24
	add r0, r4, #0
	mov r1, sp
	bl sub_080AE588
	lsl r0, r0, #24
	cmp r0, #0
	bne _081227BA
	add r0, r5, #0
	add r1, r4, #0
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r4, r0, #24
	cmp r4, #0
	bne _081227BA
	ldr r2, _081227C4  @ =gRam
	ldr r1, _081227C8  @ =0x00001718
	add r0, r2, r1
	strb r4, [r0]
	ldr r3, _081227CC  @ =0x00001719
	add r0, r2, r3
	strb r4, [r0]
	ldr r0, _081227D0  @ =0x000016E8
	add r3, r2, r0
	ldrb r1, [r3]
	mov r0, #126
	and r0, r0, r1
	strb r0, [r3]
	ldr r1, _081227D4  @ =0x000016EA
	add r0, r2, r1
	strb r4, [r0]
	ldr r3, _081227D8  @ =0x000016EB
	add r0, r2, r3
	strb r4, [r0]
	ldr r0, _081227DC  @ =0x00001705
	add r3, r2, r0
	ldrb r1, [r3]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r3]
	mov r1, sp
	ldr r3, _081227E0  @ =0x00001818
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	mov r1, sp
	ldr r3, _081227E4  @ =0x00000A88
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #40
	strb r1, [r0]
	mov r0, sp
	ldr r1, _081227E8  @ =0x00000A92
	add r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	mov r0, #205
	strb r0, [r2]
	mov r0, sp
	ldrb r0, [r0]
	mov r1, #2
	bl sub_081227EC
_081227BA:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081227C4:
	.4byte gRam
_081227C8:
	.4byte 0x00001718
_081227CC:
	.4byte 0x00001719
_081227D0:
	.4byte 0x000016E8
_081227D4:
	.4byte 0x000016EA
_081227D8:
	.4byte 0x000016EB
_081227DC:
	.4byte 0x00001705
_081227E0:
	.4byte 0x00001818
_081227E4:
	.4byte 0x00000A88
_081227E8:
	.4byte 0x00000A92
	THUMB_FUNC_END sub_08122728

