	THUMB_FUNC_START sub_080F2538
sub_080F2538: @ 0x080F2538
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r7, r5, #0
	ldr r6, _080F25B0  @ =gRam
	ldr r0, _080F25B4  @ =0x00001122
	add r3, r6, r0
	add r3, r5, r3
	ldrb r0, [r3]
	mov r1, #63
	and r1, r1, r0
	strb r1, [r3]
	ldr r4, _080F25B8  @ =gUnknown_08179258
	ldr r2, _080F25BC  @ =0x00000996
	add r0, r6, r2
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r2, #3
	and r0, r0, r2
	add r0, r0, r4
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r3]
	mov r0, #4
	bl sub_080CF388
	ldr r0, _080F25C0  @ =0x00001622
	add r2, r6, r0
	ldrb r1, [r2]
	add r0, r0, #1
	add r3, r6, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	sub r1, r1, #5
	strb r1, [r2]
	lsr r1, r1, #8
	strb r1, [r3]
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F25E2
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080F25C8
	ldr r2, _080F25C4  @ =0x00000F62
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
	b _080F25E2
	.byte 0x00
	.byte 0x00
_080F25B0:
	.4byte gRam
_080F25B4:
	.4byte 0x00001122
_080F25B8:
	.4byte gUnknown_08179258
_080F25BC:
	.4byte 0x00000996
_080F25C0:
	.4byte 0x00001622
_080F25C4:
	.4byte 0x00000F62
_080F25C8:
	ldr r1, _080F25E8  @ =0x00000F62
	add r0, r6, r1
	add r0, r7, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _080F25E2
	ldr r1, _080F25EC  @ =0x000009AD
	add r0, r6, r1
	mov r1, #46
	strb r1, [r0]
	ldr r1, _080F25F0  @ =0x000009E8
	add r0, r6, r1
	strh r2, [r0]
_080F25E2:
	pop {r4-r7}
	pop {r0}
	bx r0
_080F25E8:
	.4byte 0x00000F62
_080F25EC:
	.4byte 0x000009AD
_080F25F0:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080F2538

