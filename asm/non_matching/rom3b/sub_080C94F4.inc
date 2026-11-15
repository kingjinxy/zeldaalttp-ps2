	THUMB_FUNC_START sub_080C94F4
sub_080C94F4: @ 0x080C94F4
	push {r4-r6,lr}
	add r5, r2, #0
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #16
	lsr r6, r1, #16
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C9544
	ldr r0, _080C953C  @ =gRam
	ldr r1, _080C9540  @ =0x00001702
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #2
	beq _080C9544
	add r0, r4, #0
	add r1, r6, #0
	mov r2, #0
	bl sub_080C9564
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r5, #0
	beq _080C9536
	mov r1, #3
	eor r0, r0, r1
	strb r0, [r5]
_080C9536:
	mov r0, #1
	b _080C9556
	.byte 0x00
	.byte 0x00
_080C953C:
	.4byte gRam
_080C9540:
	.4byte 0x00001702
_080C9544:
	cmp r5, #0
	beq _080C9554
	ldr r0, _080C955C  @ =gRam
	ldr r1, _080C9560  @ =0x00000FB2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r5]
_080C9554:
	mov r0, #0
_080C9556:
	pop {r4-r6}
	pop {r1}
	bx r1
_080C955C:
	.4byte gRam
_080C9560:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080C94F4

