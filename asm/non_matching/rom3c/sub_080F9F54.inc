	THUMB_FUNC_START sub_080F9F54
sub_080F9F54: @ 0x080F9F54
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r12, r4
	ldr r5, _080F9FE4  @ =gRam
	ldr r1, _080F9FE8  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080F9FD6
	ldr r2, _080F9FEC  @ =0x00000FB2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r3, [r0]
	ldr r0, _080F9FF0  @ =gUnknown_0817A3B8
	add r0, r3, r0
	ldrb r2, [r0]
	ldr r0, _080F9FF4  @ =gUnknown_0817A3C0
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	ldr r7, _080F9FF8  @ =0x000016C4
	add r1, r5, r7
	orr r2, r2, r0
	ldrh r1, [r1]
	add r2, r2, r1
	ldr r0, _080F9FFC  @ =gUnknown_0817A3C4
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r0, _080FA000  @ =gUnknown_0817A3BC
	add r3, r3, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	sub r7, r7, #4
	add r3, r5, r7
	orr r1, r1, r0
	ldrh r3, [r3]
	add r1, r1, r3
	ldr r3, _080FA004  @ =0x00000F62
	add r0, r5, r3
	add r0, r4, r0
	strb r2, [r0]
	ldr r7, _080FA008  @ =0x00000F72
	add r0, r5, r7
	add r0, r4, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080FA00C  @ =0x00000F82
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r3, _080FA010  @ =0x00001062
	add r0, r5, r3
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	sub r7, r7, #32
	add r1, r5, r7
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #80
	strb r0, [r6]
_080F9FD6:
	mov r0, r12
	bl sub_080FA2E8
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F9FE4:
	.4byte gRam
_080F9FE8:
	.4byte 0x00000FC2
_080F9FEC:
	.4byte 0x00000FB2
_080F9FF0:
	.4byte gUnknown_0817A3B8
_080F9FF4:
	.4byte gUnknown_0817A3C0
_080F9FF8:
	.4byte 0x000016C4
_080F9FFC:
	.4byte gUnknown_0817A3C4
_080FA000:
	.4byte gUnknown_0817A3BC
_080FA004:
	.4byte 0x00000F62
_080FA008:
	.4byte 0x00000F72
_080FA00C:
	.4byte 0x00000F82
_080FA010:
	.4byte 0x00001062
	THUMB_FUNC_END sub_080F9F54

