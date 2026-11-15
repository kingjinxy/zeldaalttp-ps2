	THUMB_FUNC_START sub_0801879C
sub_0801879C: @ 0x0801879C
	push {r4,lr}
	add r4, r0, #0
	mov r1, #160
	lsl r1, r1, #6
	bl 0x08003594
	ldr r0, [r4, #16]
	cmp r0, #0
	bge _080187D0
	mov r0, #58
	ldrsh r1, [r4, r0]
	mov r0, #8
	neg r0, r0
	cmp r1, r0
	ble _080187D0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
_080187D0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801879C

	.byte 0x00
	.byte 0x00
