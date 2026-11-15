	THUMB_FUNC_START sub_080C9614
sub_080C9614: @ 0x080C9614
	push {r4-r7,lr}
	lsl r0, r0, #16
	lsr r6, r0, #16
	lsl r1, r1, #16
	lsr r5, r1, #16
	lsl r2, r2, #16
	lsr r4, r2, #16
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r1, #0
	ldr r2, _080C966C  @ =gUnknown_08155B4E
	mov r12, r2
	ldr r7, _080C9670  @ =0x0000368F
_080C962E:
	lsl r0, r1, #1
	add r0, r0, r2
	ldrh r0, [r0]
	cmp r0, r6
	bne _080C965C
	add r0, r1, #1
	lsl r0, r0, #1
	add r0, r0, r12
	ldrh r0, [r0]
	cmp r0, r5
	bne _080C965C
	add r0, r1, #2
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	cmp r0, r4
	bne _080C965C
	add r0, r1, #3
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	cmp r0, r3
	beq _080C9674
_080C965C:
	add r0, r1, #4
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, r7
	bls _080C962E
	mov r0, #0
	b _080C9676
	.byte 0x00
	.byte 0x00
_080C966C:
	.4byte gUnknown_08155B4E
_080C9670:
	.4byte 0x0000368F
_080C9674:
	add r0, r1, #0
_080C9676:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C9614

