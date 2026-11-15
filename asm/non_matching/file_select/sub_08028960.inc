	THUMB_FUNC_START sub_08028960
sub_08028960: @ 0x08028960
	push {lr}
	add r3, r0, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #149
	bne _080289BC
	ldr r0, [r3, #76]
	add r0, r0, #43
	ldrb r1, [r0]
	add r1, r1, #4
	mov r0, #24
	and r1, r1, r0
	asr r1, r1, #3
	add r0, r3, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r0, #3
	and r0, r0, r2
	cmp r1, r0
	bne _080289BC
	ldrb r0, [r3, #20]
	add r0, r0, #1
	strb r0, [r3, #20]
	add r2, r3, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _080289C0  @ =gUnknown_0201F000
	add r1, r3, #0
	add r1, r1, #82
	ldrb r2, [r1]
	lsl r2, r2, #2
	add r2, r2, r0
	ldr r1, _080289C4  @ =gUnknown_08137B10
	ldrb r0, [r3, #11]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r2]
	ldr r0, [r0]
	orr r1, r1, r0
	str r1, [r2]
	mov r0, #23
	bl 0x08003DFC
_080289BC:
	pop {r0}
	bx r0
_080289C0:
	.4byte gUnknown_0201F000
_080289C4:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_08028960

