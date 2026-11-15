	THUMB_FUNC_START sub_08012B04
sub_08012B04: @ 0x08012B04
	push {r4,lr}
	lsl r0, r0, #16
	lsr r3, r0, #16
	lsl r1, r1, #16
	lsr r4, r1, #16
	ldr r0, _08012B40  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	cmp r0, #3
	beq _08012B1A
	cmp r0, #0
	bne _08012B3A
_08012B1A:
	cmp r3, #130
	bne _08012B3A
	bl 0x0800099C
	mov r1, #255
	and r1, r1, r0
	mov r0, #128
	cmp r1, #126
	bhi _08012B2E
	mov r0, #129
_08012B2E:
	add r3, r0, #0
	mov r2, #128
	lsl r2, r2, #7
	add r1, r4, #0
	bl 0x08008F78
_08012B3A:
	pop {r4}
	pop {r0}
	bx r0
_08012B40:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08012B04

