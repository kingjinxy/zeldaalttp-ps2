	THUMB_FUNC_START sub_080D9348
sub_080D9348: @ 0x080D9348
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	mov r2, #254
	lsl r2, r2, #23
	and r2, r2, r1
	lsr r2, r2, #24
	ldr r3, _080D93B4  @ =gRam
	ldr r4, _080D93B8  @ =gUnknown_0200EC18
	add r1, r2, r4
	ldrb r4, [r1]
	ldr r5, _080D93BC  @ =0x00001622
	add r1, r3, r5
	strb r4, [r1]
	ldr r4, _080D93C0  @ =gUnknown_0200EC98
	add r1, r2, r4
	ldrb r4, [r1]
	add r5, r5, #1
	add r1, r3, r5
	strb r4, [r1]
	ldr r4, _080D93C4  @ =gUnknown_0200ED18
	add r1, r2, r4
	ldrb r4, [r1]
	add r5, r5, #1
	add r1, r3, r5
	strb r4, [r1]
	ldr r1, _080D93C8  @ =gUnknown_0200ED98
	add r2, r2, r1
	ldrb r2, [r2]
	ldr r4, _080D93CC  @ =0x00001625
	add r1, r3, r4
	strb r2, [r1]
	ldr r2, _080D93D0  @ =gUnknown_03003E74
	ldrh r1, [r2]
	add r1, r1, #4
	strh r1, [r2]
	ldr r5, _080D93D4  @ =0x00001052
	add r3, r3, r5
	add r3, r0, r3
	ldrb r1, [r3]
	lsr r1, r1, #1
	mov r2, #1
	and r1, r1, r2
	lsl r1, r1, #5
	ldr r2, _080D93D8  @ =gUnknown_0817591C
	add r1, r1, r2
	mov r2, #4
	bl sub_080C9480
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D93B4:
	.4byte gRam
_080D93B8:
	.4byte gUnknown_0200EC18
_080D93BC:
	.4byte 0x00001622
_080D93C0:
	.4byte gUnknown_0200EC98
_080D93C4:
	.4byte gUnknown_0200ED18
_080D93C8:
	.4byte gUnknown_0200ED98
_080D93CC:
	.4byte 0x00001625
_080D93D0:
	.4byte gUnknown_03003E74
_080D93D4:
	.4byte 0x00001052
_080D93D8:
	.4byte gUnknown_0817591C
	THUMB_FUNC_END sub_080D9348

