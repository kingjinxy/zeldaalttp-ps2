	THUMB_FUNC_START sub_0806D0C8
sub_0806D0C8: @ 0x0806D0C8
	push {r4,r5,lr}
	ldr r4, _0806D0EC  @ =gRam
	ldr r0, _0806D0F0  @ =0x00000ABE
	add r4, r4, r0
	ldrh r1, [r4]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r5, r0, #16
	bl sub_0806D028
	add r1, r0, #0
	ldrh r2, [r4]
	cmp r1, #2
	bne _0806D0F4
	mov r1, #1
	b _0806D0FA
	.byte 0x00
	.byte 0x00
_0806D0EC:
	.4byte gRam
_0806D0F0:
	.4byte 0x00000ABE
_0806D0F4:
	cmp r1, #4
	bne _0806D0FA
	mov r1, #2
_0806D0FA:
	ldr r0, _0806D130  @ =gUnknown_0814CB3C
	add r0, r2, r0
	ldrb r0, [r0]
	add r2, r1, r0
	mov r1, #8
	ldr r0, _0806D134  @ =gUnknown_0814CB40
	add r0, r2, r0
	ldrb r3, [r0]
	mov r0, #128
	and r0, r0, r3
	cmp r0, #0
	beq _0806D114
	sub r1, r1, #16
_0806D114:
	ldr r2, _0806D138  @ =gRam
	mov r4, #150
	lsl r4, r4, #4
	add r0, r2, r4
	strh r1, [r0]
	sub r0, r3, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r5, #0
	bne _0806D13C
	mov r0, #182
	lsl r0, r0, #5
	add r2, r2, r0
	b _0806D140
_0806D130:
	.4byte gUnknown_0814CB3C
_0806D134:
	.4byte gUnknown_0814CB40
_0806D138:
	.4byte gRam
_0806D13C:
	ldr r4, _0806D150  @ =0x000016C4
	add r2, r2, r4
_0806D140:
	ldrh r1, [r2]
	ldr r0, _0806D154  @ =0xFFFFFF00
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
_0806D150:
	.4byte 0x000016C4
_0806D154:
	.4byte 0xFFFFFF00
	THUMB_FUNC_END sub_0806D0C8

