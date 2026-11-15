	THUMB_FUNC_START sub_080359C8
sub_080359C8: @ 0x080359C8
	push {r4,lr}
	add r4, r0, #0
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r2, _08035A00  @ =gUnknown_03000450
	mov r3, #32
	ldrsh r0, [r2, r3]
	add r0, r0, #120
	cmp r1, r0
	bne _080359FA
	mov r0, #54
	ldrsh r1, [r4, r0]
	mov r3, #34
	ldrsh r0, [r2, r3]
	add r0, r0, #80
	cmp r1, r0
	bne _080359FA
	mov r0, #2
	mov r1, #2
	bl sub_0800C0B0
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #248
	strb r0, [r4, #23]
_080359FA:
	pop {r4}
	pop {r0}
	bx r0
_08035A00:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_080359C8

