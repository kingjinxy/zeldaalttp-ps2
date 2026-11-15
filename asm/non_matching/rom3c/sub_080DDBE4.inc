	THUMB_FUNC_START sub_080DDBE4
sub_080DDBE4: @ 0x080DDBE4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080DDC6C  @ =gRam
	ldr r1, _080DDC70  @ =0x00000F62
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #8
	bl sub_080C35FC
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C1F70
	ldr r3, _080DDC74  @ =0x000016C4
	add r2, r4, r3
	ldr r1, _080DDC78  @ =0x00001622
	add r0, r4, r1
	ldrb r1, [r0]
	sub r3, r3, #161
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #3
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #5
	bhi _080DDC64
	mov r0, #182
	lsl r0, r0, #5
	add r2, r4, r0
	ldr r1, _080DDC7C  @ =0x00001624
	add r0, r4, r1
	ldrb r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #11
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #5
	bhi _080DDC64
	ldr r1, _080DDC80  @ =gHeartsFiller
	ldrb r0, [r1]
	add r0, r0, #160
	strb r0, [r1]
	ldr r0, _080DDC84  @ =0x00000F52
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080DDC64:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DDC6C:
	.4byte gRam
_080DDC70:
	.4byte 0x00000F62
_080DDC74:
	.4byte 0x000016C4
_080DDC78:
	.4byte 0x00001622
_080DDC7C:
	.4byte 0x00001624
_080DDC80:
	.4byte gHeartsFiller
_080DDC84:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DDBE4

