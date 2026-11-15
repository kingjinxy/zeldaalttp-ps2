	THUMB_FUNC_START sub_080597A8
sub_080597A8: @ 0x080597A8
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	mov r1, #0
	strh r1, [r0]
_080597B6:
	add r0, r7, #4
	ldr r1, _080597CC  @ =gUnknown_03006C80
	ldrb r2, [r1]
	add r1, r2, #0
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	bcc _080597D0
	b _0805980C
	.byte 0x00
	.byte 0x00
_080597CC:
	.4byte gUnknown_03006C80
_080597D0:
	ldr r0, _080597F8  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrh r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_08000358
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _080597FC
	mov r0, #1
	b _08059810
_080597F8:
	.4byte gUnknown_03006A30
_080597FC:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrh r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	b _080597B6
_0805980C:
	mov r0, #0
	b _08059810
_08059810:
	add sp, sp, #8
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080597A8

