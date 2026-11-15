	THUMB_FUNC_START sub_080F8C64
sub_080F8C64: @ 0x080F8C64
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	add r6, r0, #0
	lsl r6, r6, #24
	lsr r6, r6, #24
	ldr r0, _080F8CD4  @ =gUnknown_03003E74
	mov r8, r0
	ldrh r4, [r0]
	lsl r4, r4, #3
	ldr r5, _080F8CD8  @ =gUnknown_03002780
	add r4, r4, r5
	add r0, r6, #0
	bl sub_080F8CEC
	ldrh r1, [r4, #2]
	ldr r2, _080F8CDC  @ =0x000010A9
	add r0, r5, r2
	strb r1, [r0]
	ldrb r1, [r4]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #6
	strh r0, [r1]
	ldr r2, _080F8CE0  @ =0x00000A42
	add r0, r5, r2
	add r0, r6, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080F8CE4  @ =gUnknown_0817A200
	add r1, r1, r0
	add r0, r6, #0
	mov r2, #2
	bl sub_080C9480
	ldr r0, _080F8CE8  @ =0x00000AC2
	add r5, r5, r0
	ldrb r4, [r5]
	sub r0, r4, #6
	strb r0, [r5]
	add r0, r6, #0
	bl sub_080C6230
	strb r4, [r5]
	add r0, r6, #0
	bl sub_080F8F70
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F8CD4:
	.4byte gUnknown_03003E74
_080F8CD8:
	.4byte gUnknown_03002780
_080F8CDC:
	.4byte 0x000010A9
_080F8CE0:
	.4byte 0x00000A42
_080F8CE4:
	.4byte gUnknown_0817A200
_080F8CE8:
	.4byte 0x00000AC2
	THUMB_FUNC_END sub_080F8C64

