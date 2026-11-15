	THUMB_FUNC_START sub_081055FC
sub_081055FC: @ 0x081055FC
	push {r4-r6,lr}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r6, _08105644  @ =gRam
	ldr r1, _08105648  @ =0x00000F62
	add r0, r6, r1
	add r0, r5, r0
	mov r4, #3
	strb r4, [r0]
	add r1, r1, #16
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #8
	strb r1, [r0]
	bl GetRandomInt
	and r4, r4, r0
	ldr r0, _0810564C  @ =0x00000F22
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _08105650  @ =gUnknown_0817BE78
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _08105654  @ =0x00000F12
	add r6, r6, r1
	add r5, r5, r6
	ldr r0, _08105658  @ =gUnknown_0817BE7C
	add r4, r4, r0
	ldrb r0, [r4]
	strb r0, [r5]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08105644:
	.4byte gRam
_08105648:
	.4byte 0x00000F62
_0810564C:
	.4byte 0x00000F22
_08105650:
	.4byte gUnknown_0817BE78
_08105654:
	.4byte 0x00000F12
_08105658:
	.4byte gUnknown_0817BE7C
	THUMB_FUNC_END sub_081055FC

