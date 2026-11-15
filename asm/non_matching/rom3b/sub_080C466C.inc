	THUMB_FUNC_START sub_080C466C
sub_080C466C: @ 0x080C466C
	push {r4-r7,lr}
	mov r7, #1
	mov r4, #1
	ldr r3, _080C46D8  @ =gUnknown_03002B98
_080C4674:
	mov r5, #0
	add r1, r4, r3
	add r0, r3, #0
	sub r0, r0, #8
	add r0, r4, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	bcc _080C4688
	mov r5, #1
_080C4688:
	sub r2, r1, r0
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r0, r3, #4
	add r6, r4, r0
	ldrb r0, [r6]
	add r0, r2, r0
	strb r0, [r3, #21]
	add r1, r3, #0
	add r1, r1, #12
	add r1, r4, r1
	add r0, r3, #0
	add r0, r0, #8
	add r0, r4, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	sub r1, r1, r0
	add r0, r5, #0
	add r0, r0, #255
	add r0, r1, r0
	strb r0, [r3, #16]
	mov r1, #0
	add r2, r2, #128
	cmp r2, #255
	ble _080C46BC
	mov r1, #1
_080C46BC:
	add r0, r1, r0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C46D4
	sub r0, r3, #4
	add r0, r4, r0
	ldrb r0, [r0]
	ldrb r1, [r6]
	add r0, r0, r1
	ldrb r1, [r3, #21]
	cmp r0, r1
	bge _080C46DC
_080C46D4:
	mov r7, #0
	b _080C46E2
_080C46D8:
	.4byte gUnknown_03002B98
_080C46DC:
	sub r4, r4, #1
	cmp r4, #0
	bge _080C4674
_080C46E2:
	add r0, r7, #0
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C466C

	.byte 0x00
	.byte 0x00
