	THUMB_FUNC_START sub_080F327C
sub_080F327C: @ 0x080F327C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #24
	bl sub_080CF388
	ldr r1, _080F32E8  @ =gRam
	ldr r0, _080F32EC  @ =0x0000096C
	add r2, r1, r0
	mov r0, #6
	strh r0, [r2]
	ldr r3, _080F32F0  @ =0x00000FB2
	add r4, r1, r3
	add r4, r5, r4
	ldrb r2, [r4]
	ldr r6, _080F32F4  @ =0x00000F92
	add r0, r1, r6
	add r0, r5, r0
	lsl r2, r2, #1
	ldrb r0, [r0]
	add r2, r2, r0
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r0, _080F32F8  @ =gUnknown_08179454
	add r0, r2, r0
	ldrb r3, [r0]
	ldr r6, _080F32FC  @ =0x00001742
	add r0, r1, r6
	strb r3, [r0]
	ldr r0, _080F3300  @ =gUnknown_0817945B
	add r0, r2, r0
	ldrb r0, [r0]
	ldr r3, _080F3304  @ =0x00001743
	add r1, r1, r3
	strb r0, [r1]
	lsl r1, r2, #1
	add r1, r1, r2
	lsl r1, r1, #4
	ldr r0, _080F3308  @ =gUnknown_081792D4
	add r1, r1, r0
	add r0, r5, #0
	bl sub_080C94AC
	ldrb r0, [r4]
	cmp r0, #0
	beq _080F32E2
	cmp r0, #3
	beq _080F32E2
	add r0, r5, #0
	bl sub_080C6230
_080F32E2:
	pop {r4-r6}
	pop {r0}
	bx r0
_080F32E8:
	.4byte gRam
_080F32EC:
	.4byte 0x0000096C
_080F32F0:
	.4byte 0x00000FB2
_080F32F4:
	.4byte 0x00000F92
_080F32F8:
	.4byte gUnknown_08179454
_080F32FC:
	.4byte 0x00001742
_080F3300:
	.4byte gUnknown_0817945B
_080F3304:
	.4byte 0x00001743
_080F3308:
	.4byte gUnknown_081792D4
	THUMB_FUNC_END sub_080F327C

