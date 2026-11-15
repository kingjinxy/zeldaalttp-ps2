	THUMB_FUNC_START sub_0811D440
sub_0811D440: @ 0x0811D440
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0811D4E0  @ =gRam
	ldr r2, _0811D4E4  @ =0x00000E15
	add r1, r3, r2
	add r1, r0, r1
	mov r6, #0
	mov r2, #49
	strb r2, [r1]
	ldr r2, _0811D4E8  @ =0x000016D5
	add r1, r3, r2
	ldrb r2, [r1]
	lsl r2, r2, #25
	lsr r2, r2, #24
	ldr r5, _0811D4EC  @ =gUnknown_02006880
	ldr r4, _0811D4F0  @ =gUnknown_0817F9DC
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r5]
	add r5, r5, #1
	add r1, r2, #1
	add r1, r1, r4
	ldrb r1, [r1]
	strb r1, [r5]
	add r5, r5, #1
	add r1, r2, #2
	add r1, r1, r4
	ldrb r1, [r1]
	strb r1, [r5]
	add r5, r5, #1
	add r2, r2, #3
	add r2, r2, r4
	ldrb r1, [r2]
	strb r1, [r5]
	ldr r2, _0811D4F4  @ =0x00001844
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #23
	strb r2, [r1]
	ldr r2, _0811D4F8  @ =0x00001827
	add r1, r3, r2
	add r1, r0, r1
	strb r6, [r1]
	ldr r2, _0811D4FC  @ =0x00000E29
	add r1, r3, r2
	add r1, r0, r1
	strb r6, [r1]
	ldr r2, _0811D500  @ =0x00001832
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #8
	strb r2, [r1]
	ldr r2, _0811D504  @ =0x00000E1F
	add r1, r3, r2
	add r1, r0, r1
	strb r6, [r1]
	ldr r2, _0811D508  @ =0x00001818
	add r1, r3, r2
	add r1, r0, r1
	strb r6, [r1]
	add r2, r2, #31
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #2
	strb r2, [r1]
	ldr r1, _0811D50C  @ =0x00000E33
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #21
	strb r1, [r0]
	ldr r1, _0811D510  @ =gUnknown_02006888
	mov r0, #20
	strb r0, [r1]
	mov r0, #94
	bl sub_080C1A8C
	pop {r4-r6}
	pop {r0}
	bx r0
_0811D4E0:
	.4byte gRam
_0811D4E4:
	.4byte 0x00000E15
_0811D4E8:
	.4byte 0x000016D5
_0811D4EC:
	.4byte gUnknown_02006880
_0811D4F0:
	.4byte gUnknown_0817F9DC
_0811D4F4:
	.4byte 0x00001844
_0811D4F8:
	.4byte 0x00001827
_0811D4FC:
	.4byte 0x00000E29
_0811D500:
	.4byte 0x00001832
_0811D504:
	.4byte 0x00000E1F
_0811D508:
	.4byte 0x00001818
_0811D50C:
	.4byte 0x00000E33
_0811D510:
	.4byte gUnknown_02006888
	THUMB_FUNC_END sub_0811D440

