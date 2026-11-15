	THUMB_FUNC_START sub_080F54D4
sub_080F54D4: @ 0x080F54D4
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C631C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F5540
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080F5540
	ldr r3, _080F5520  @ =gRam
	ldr r1, _080F5524  @ =0x000009C6
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #24
	beq _080F5530
	ldr r0, _080F5528  @ =gFlute
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080F5540
	ldr r1, _080F552C  @ =0x00000FA2
	add r0, r3, r1
	add r0, r4, r0
	b _080F553E
	.byte 0x00
	.byte 0x00
_080F5520:
	.4byte gRam
_080F5524:
	.4byte 0x000009C6
_080F5528:
	.4byte gFlute
_080F552C:
	.4byte 0x00000FA2
_080F5530:
	ldr r0, _080F5548  @ =gFlute
	ldrb r0, [r0]
	cmp r0, #3
	bne _080F5540
	ldr r1, _080F554C  @ =0x00000FA2
	add r0, r3, r1
	add r0, r5, r0
_080F553E:
	strb r2, [r0]
_080F5540:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080F5548:
	.4byte gFlute
_080F554C:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F54D4

