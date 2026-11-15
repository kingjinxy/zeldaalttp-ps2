	THUMB_FUNC_START sub_08126A70
sub_08126A70: @ 0x08126A70
	push {lr}
	ldr r3, _08126AA8  @ =gRam
	ldr r0, _08126AAC  @ =0x00001B0A
	add r2, r3, r0
	ldr r1, _08126AB0  @ =0xFFFFFDB8
	add r0, r1, #0
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	lsl r0, r0, #16
	ldr r1, _08126AB4  @ =0x02470000
	cmp r0, r1
	bhi _08126AA0
	mov r0, #0
	strh r0, [r2]
	ldr r1, _08126AB8  @ =gUnknown_03000050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08126ABC  @ =0x000009E8
	add r1, r3, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_08126AA0:
	bl sub_08126AC0
	pop {r0}
	bx r0
_08126AA8:
	.4byte gRam
_08126AAC:
	.4byte 0x00001B0A
_08126AB0:
	.4byte 0xFFFFFDB8
_08126AB4:
	.4byte 0x02470000
_08126AB8:
	.4byte gUnknown_03000050
_08126ABC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08126A70

