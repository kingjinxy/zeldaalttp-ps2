	THUMB_FUNC_START sub_080DA9A4
sub_080DA9A4: @ 0x080DA9A4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080DAA64  @ =gRam
	ldr r1, _080DAA68  @ =0x00001082
	add r0, r3, r1
	add r0, r4, r0
	mov r6, #0
	strb r6, [r0]
	ldr r2, _080DAA6C  @ =0x00000EE2
	add r0, r3, r2
	ldrb r0, [r0]
	ldr r5, _080DAA70  @ =0x00000968
	add r2, r3, r5
	strb r0, [r2]
	ldr r7, _080DAA74  @ =0x00000F02
	add r0, r3, r7
	ldrb r1, [r0]
	add r5, r5, #1
	add r0, r3, r5
	strb r1, [r0]
	sub r7, r7, #48
	add r0, r3, r7
	ldrb r0, [r0]
	ldr r1, _080DAA78  @ =0x0000096C
	add r5, r3, r1
	strb r0, [r5]
	add r7, r7, #32
	add r0, r3, r7
	ldrb r1, [r0]
	ldr r7, _080DAA7C  @ =0x0000096D
	add r0, r3, r7
	strb r1, [r0]
	ldr r1, _080DAA80  @ =0x00001622
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r7, _080DAA84  @ =0x00001623
	add r0, r3, r7
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r1, r1, r0
	add r1, r1, #4
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #7
	bhi _080DAA2A
	ldr r1, _080DAA88  @ =0x00001624
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080DAA8C  @ =0x00001625
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r5]
	sub r1, r1, r0
	add r1, r1, #4
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #7
	bhi _080DAA2A
	ldr r5, _080DAA90  @ =0x00000FA2
	add r0, r3, r5
	add r0, r4, r0
	strb r6, [r0]
_080DAA2A:
	add r0, r4, #0
	mov r1, #32
	bl sub_080C2DCC
	ldr r2, _080DAA64  @ =gRam
	ldr r7, _080DAA94  @ =0x00000F12
	add r0, r2, r7
	add r0, r4, r0
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r5, _080DAA98  @ =0x00000F22
	add r0, r2, r5
	add r0, r4, r0
	ldr r7, _080DAA9C  @ =0x00000961
	add r2, r2, r7
	ldrb r1, [r2]
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080DA318
	pop {r4-r7}
	pop {r0}
	bx r0
_080DAA64:
	.4byte gRam
_080DAA68:
	.4byte 0x00001082
_080DAA6C:
	.4byte 0x00000EE2
_080DAA70:
	.4byte 0x00000968
_080DAA74:
	.4byte 0x00000F02
_080DAA78:
	.4byte 0x0000096C
_080DAA7C:
	.4byte 0x0000096D
_080DAA80:
	.4byte 0x00001622
_080DAA84:
	.4byte 0x00001623
_080DAA88:
	.4byte 0x00001624
_080DAA8C:
	.4byte 0x00001625
_080DAA90:
	.4byte 0x00000FA2
_080DAA94:
	.4byte 0x00000F12
_080DAA98:
	.4byte 0x00000F22
_080DAA9C:
	.4byte 0x00000961
	THUMB_FUNC_END sub_080DA9A4

