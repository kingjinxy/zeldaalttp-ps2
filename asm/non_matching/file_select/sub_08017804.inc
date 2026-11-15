	THUMB_FUNC_START sub_08017804
sub_08017804: @ 0x08017804
	push {r4,lr}
	add r4, r0, #0
	bl 0x0800963C
	add r0, r4, #0
	bl 0x08003828
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _0801782E
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #3
	bl 0x08003870
_0801782E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017804

