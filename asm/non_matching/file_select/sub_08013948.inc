	THUMB_FUNC_START sub_08013948
sub_08013948: @ 0x08013948
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r4, r0, #0
	add r5, r2, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r8, r1
	ldrh r0, [r4, #2]
	lsr r1, r0, #8
	mov r10, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	cmp r5, r3
	bcs _080139FE
	ldr r6, _080139B8  @ =0x000003FF
	ldr r2, _080139BC  @ =gUnknown_0201EFF8
	mov r0, r8
	lsl r1, r0, #2
	add r0, r2, #2
	add r7, r1, r0
_08013978:
	ldrh r0, [r5]
	cmp r0, #0
	bne _080139F8
	ldrh r3, [r4, #4]
	add r0, r1, r2
	add r1, r6, #0
	and r1, r1, r3
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #16
	ldrh r2, [r4, #6]
	add r0, r6, #0
	and r0, r0, r2
	ldrh r7, [r7]
	add r0, r0, r7
	lsl r0, r0, #16
	lsr r1, r1, #20
	lsr r0, r0, #20
	lsl r0, r0, #6
	orr r1, r1, r0
	strh r1, [r5]
	mov r2, #192
	lsl r2, r2, #4
	add r0, r2, #0
	and r0, r0, r3
	cmp r0, #0
	beq _080139C0
	lsl r0, r0, #4
	orr r1, r1, r0
	strh r1, [r5]
	b _080139DC
	.byte 0x00
	.byte 0x00
_080139B8:
	.4byte 0x000003FF
_080139BC:
	.4byte gUnknown_0201EFF8
_080139C0:
	ldrh r4, [r5]
	add r0, r4, #0
	bl 0x08008E5C
	lsl r0, r0, #16
	cmp r0, #0
	beq _080139D4
	mov r0, #128
	lsl r0, r0, #8
	b _080139D8
_080139D4:
	mov r0, #128
	lsl r0, r0, #7
_080139D8:
	orr r0, r0, r4
	strh r0, [r5]
_080139DC:
	ldrh r1, [r5]
	mov r0, r8
	cmp r0, #0
	beq _080139EA
	mov r0, #128
	lsl r0, r0, #5
	orr r1, r1, r0
_080139EA:
	strh r1, [r5]
	mov r1, r10
	strb r1, [r5, #2]
	mov r2, r9
	strb r2, [r5, #3]
	mov r0, #1
	b _08013A00
_080139F8:
	add r5, r5, #4
	cmp r5, r3
	bcc _08013978
_080139FE:
	mov r0, #0
_08013A00:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08013948

	.byte 0x00
	.byte 0x00
