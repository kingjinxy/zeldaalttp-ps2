	THUMB_FUNC_START sub_0802B0A8
sub_0802B0A8: @ 0x0802B0A8
	push {r4-r6,lr}
	add r4, r0, #0
	add r6, r4, #0
	add r6, r6, #124
	ldrh r0, [r6]
	add r5, r4, #0
	add r5, r5, #80
	ldrh r1, [r5]
	bl 0x0800932C
	lsl r0, r0, #16
	ldr r1, _0802B0F4  @ =0x40080000
	cmp r0, r1
	bne _0802B0EE
	mov r0, #128
	lsl r0, r0, #7
	ldrh r1, [r6]
	ldrh r2, [r5]
	bl 0x08008F48
	mov r1, #0
	mov r0, #2
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #120
	strb r1, [r0]
	add r0, r0, #2
	strb r1, [r0]
	add r1, r4, #0
	add r1, r1, #126
	mov r0, #60
	strh r0, [r1]
	mov r0, #152
	bl 0x08003DFC
_0802B0EE:
	pop {r4-r6}
	pop {r0}
	bx r0
_0802B0F4:
	.4byte 0x40080000
	THUMB_FUNC_END sub_0802B0A8

