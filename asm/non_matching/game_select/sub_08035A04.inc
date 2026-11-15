	THUMB_FUNC_START sub_08035A04
sub_08035A04: @ 0x08035A04
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08035A12
	sub r0, r0, #1
	b _08035A2C
_08035A12:
	add r0, r4, #0
	bl sub_0803CC20
	mov r0, #54
	ldrsh r1, [r4, r0]
	ldr r0, _08035A34  @ =0x000001A7
	cmp r1, r0
	ble _08035A2E
	add r0, r0, #1
	strh r0, [r4, #54]
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #30
_08035A2C:
	strb r0, [r4, #23]
_08035A2E:
	pop {r4}
	pop {r0}
	bx r0
_08035A34:
	.4byte 0x000001A7
	THUMB_FUNC_END sub_08035A04

