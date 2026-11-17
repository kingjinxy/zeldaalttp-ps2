	THUMB_FUNC_START sub_080209A0
sub_080209A0: @ 0x080209A0
	push {lr}
	mov r1, #104
	mov r2, #64
	bl sub_08009E6C
	add r3, r0, #0
	cmp r3, #0
	beq _080209D4
	ldr r2, _080209CC  @ =gUnknown_03006A30
	ldrb r1, [r3, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	ldrh r1, [r0, #54]
	ldr r0, _080209D0  @ =0x00001091
	and r0, r0, r1
	cmp r0, #0
	bne _080209D4
	add r0, r3, #0
	b _080209D6
	.byte 0x00
	.byte 0x00
_080209CC:
	.4byte gUnknown_03006A30
_080209D0:
	.4byte 0x00001091
_080209D4:
	mov r0, #0
_080209D6:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080209A0

	.byte 0x00
	.byte 0x00
