	THUMB_FUNC_START sub_080D5954
sub_080D5954: @ 0x080D5954
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080D59B8  @ =gRam
	ldr r1, _080D59BC  @ =0x00001052
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r3, #1
	and r3, r3, r1
	ldr r1, _080D59C0  @ =0x000009AD
	add r0, r2, r1
	ldrb r0, [r0]
	orr r3, r3, r0
	ldr r1, _080D59C4  @ =0x00001605
	add r0, r2, r1
	ldrb r0, [r0]
	orr r3, r3, r0
	cmp r3, #0
	bne _080D5996
	ldr r1, _080D59C8  @ =0x00000F92
	add r0, r2, r1
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #6
	bne _080D5996
	strb r3, [r1]
_080D5996:
	ldr r1, _080D59C8  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _080D59CC  @ =gUnknown_081750BC
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #5
	bl sub_080C9480
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D59B8:
	.4byte gRam
_080D59BC:
	.4byte 0x00001052
_080D59C0:
	.4byte 0x000009AD
_080D59C4:
	.4byte 0x00001605
_080D59C8:
	.4byte 0x00000F92
_080D59CC:
	.4byte gUnknown_081750BC
	THUMB_FUNC_END sub_080D5954

