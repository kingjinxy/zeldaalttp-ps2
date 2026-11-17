	THUMB_FUNC_START sub_080286C8
sub_080286C8: @ 0x080286C8
	push {r4,lr}
	add r4, r0, #0
	ldr r2, [r4, #112]
	cmp r2, #0
	beq _080286F0
	ldr r0, _080286EC  @ =gUnknown_0201F000
	add r1, r4, #0
	add r1, r1, #82
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	and r0, r0, r2
	cmp r2, r0
	bne _08028722
	mov r0, #0
	str r0, [r4, #112]
	b _08028714
_080286EC:
	.4byte gUnknown_0201F000
_080286F0:
	add r1, r4, #0
	add r1, r1, #116
	ldrh r0, [r1]
	cmp r0, #0
	beq _08028700
	sub r0, r0, #1
	strh r0, [r1]
	b _08028722
_08028700:
	add r0, r4, #0
	add r0, r0, #124
	ldrh r1, [r0]
	add r0, r0, #2
	ldrh r2, [r0]
	add r0, r4, #0
	bl sub_08009E6C
	cmp r0, #0
	beq _08028722
_08028714:
	ldrb r0, [r4, #20]
	sub r0, r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #23]
	add r0, r4, #0
	add r0, r0, #118
	strh r1, [r0]
_08028722:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080286C8

