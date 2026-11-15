	THUMB_FUNC_START sub_0810E444
sub_0810E444: @ 0x0810E444
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810E478  @ =gRam
	ldr r1, _0810E47C  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810E460
	mov r0, #30
	bl sub_0810EF98
	cmp r0, #0
	bne _0810E484
_0810E460:
	mov r1, #178
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	ldr r1, _0810E480  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _0810E4A2
_0810E478:
	.4byte gRam
_0810E47C:
	.4byte 0x00001AE2
_0810E480:
	.4byte 0x00000F52
_0810E484:
	ldr r0, _0810E4A8  @ =0x00000B6C
	add r1, r5, r0
	mov r0, #2
	strb r0, [r1]
	ldr r1, _0810E4AC  @ =0x00000167
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	ldr r0, _0810E4B0  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810E4A2:
	pop {r4,r5}
	pop {r0}
	bx r0
_0810E4A8:
	.4byte 0x00000B6C
_0810E4AC:
	.4byte 0x00000167
_0810E4B0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810E444

