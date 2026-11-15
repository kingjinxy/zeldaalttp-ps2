	THUMB_FUNC_START sub_080F69C0
sub_080F69C0: @ 0x080F69C0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #168
	add r1, r4, #0
	bl sub_080CA538
	add r6, r0, #0
	cmp r6, #0
	blt _080F6A8C
	add r0, r4, #0
	mov r1, #108
	bl sub_080CF0AC
	ldr r2, _080F6A94  @ =gRam
	ldr r1, _080F6A98  @ =0x00001142
	add r0, r2, r1
	add r0, r6, r0
	ldr r3, _080F6A9C  @ =0x00000968
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r4, _080F6AA0  @ =0x00000FB2
	add r0, r2, r4
	add r0, r6, r0
	ldrb r5, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r4, r2, r0
	ldr r0, _080F6AA4  @ =gUnknown_08179A34
	lsl r3, r5, #1
	add r0, r3, r0
	ldrh r1, [r0]
	ldrh r4, [r4]
	add r1, r1, r4
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _080F6AA8  @ =0x00000EE2
	add r0, r2, r4
	add r0, r6, r0
	strb r1, [r0]
	add r4, r4, #32
	add r0, r2, r4
	add r0, r6, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080F6AAC  @ =0x00000964
	add r4, r2, r0
	ldr r0, _080F6AB0  @ =gUnknown_08179A3C
	add r3, r3, r0
	ldrh r1, [r3]
	ldrh r4, [r4]
	add r1, r1, r4
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080F6AB4  @ =0x00000ED2
	add r0, r2, r3
	add r0, r6, r0
	strb r1, [r0]
	ldr r4, _080F6AB8  @ =0x00000EF2
	add r0, r2, r4
	add r0, r6, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080F6ABC  @ =0x00000F22
	add r1, r2, r0
	add r1, r6, r1
	ldr r0, _080F6AC0  @ =gUnknown_0822A938
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r3, r3, #64
	add r1, r2, r3
	add r1, r6, r1
	ldr r0, _080F6AC4  @ =gUnknown_0822A93A
	add r5, r5, r0
	ldrb r0, [r5]
	strb r0, [r1]
	add r4, r4, #112
	add r0, r2, r4
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
	ldr r3, _080F6AC8  @ =0x00001172
	add r0, r2, r3
	add r0, r6, r0
	strb r1, [r0]
	ldr r4, _080F6ACC  @ =0x00001132
	add r0, r2, r4
	add r0, r6, r0
	mov r1, #9
	strb r1, [r0]
	ldr r1, _080F6AD0  @ =0x00001032
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #51
	strb r1, [r0]
	sub r3, r3, #80
	add r2, r2, r3
	add r2, r6, r2
	mov r0, #3
	strb r0, [r2]
_080F6A8C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F6A94:
	.4byte gRam
_080F6A98:
	.4byte 0x00001142
_080F6A9C:
	.4byte 0x00000968
_080F6AA0:
	.4byte 0x00000FB2
_080F6AA4:
	.4byte gUnknown_08179A34
_080F6AA8:
	.4byte 0x00000EE2
_080F6AAC:
	.4byte 0x00000964
_080F6AB0:
	.4byte gUnknown_08179A3C
_080F6AB4:
	.4byte 0x00000ED2
_080F6AB8:
	.4byte 0x00000EF2
_080F6ABC:
	.4byte 0x00000F22
_080F6AC0:
	.4byte gUnknown_0822A938
_080F6AC4:
	.4byte gUnknown_0822A93A
_080F6AC8:
	.4byte 0x00001172
_080F6ACC:
	.4byte 0x00001132
_080F6AD0:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080F69C0

