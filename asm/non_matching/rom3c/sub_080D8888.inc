	THUMB_FUNC_START sub_080D8888
sub_080D8888: @ 0x080D8888
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080D891C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D88FA
	ldr r3, _080D8900  @ =gRam
	ldr r0, _080D8904  @ =0x00001052
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D8908  @ =0x00000FF2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #126
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080D890C  @ =0x00000AB2
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #18
	bne _080D88CE
	add r0, r5, #2
	lsl r0, r0, #24
	lsr r5, r0, #24
_080D88CE:
	ldr r0, _080D8910  @ =0x00000F62
	add r4, r3, r0
	add r4, r6, r4
	ldrb r1, [r4]
	add r0, r0, #16
	add r3, r3, r0
	add r3, r6, r3
	ldrb r2, [r3]
	lsl r2, r2, #8
	ldr r0, _080D8914  @ =gUnknown_081757F0
	add r0, r5, r0
	orr r1, r1, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080D8918  @ =gUnknown_081757F4
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
_080D88FA:
	pop {r4-r6}
	pop {r0}
	bx r0
_080D8900:
	.4byte gRam
_080D8904:
	.4byte 0x00001052
_080D8908:
	.4byte 0x00000FF2
_080D890C:
	.4byte 0x00000AB2
_080D8910:
	.4byte 0x00000F62
_080D8914:
	.4byte gUnknown_081757F0
_080D8918:
	.4byte gUnknown_081757F4
	THUMB_FUNC_END sub_080D8888

