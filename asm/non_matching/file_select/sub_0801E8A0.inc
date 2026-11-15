	THUMB_FUNC_START sub_0801E8A0
sub_0801E8A0: @ 0x0801E8A0
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	bl 0x0800963C
	lsl r0, r0, #16
	cmp r0, #0
	beq _0801E8C8
	ldr r1, [r4, #12]
	ldr r0, _0801E8C4  @ =0x0000010F
	cmp r1, r0
	bgt _0801E8D4
	add r0, r1, #0
	add r0, r0, #8
	str r0, [r4, #12]
	b _0801E8D4
_0801E8C4:
	.4byte 0x0000010F
_0801E8C8:
	mov r0, #3
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #2
	bl 0x08003870
_0801E8D4:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E8A0

	.byte 0x00
	.byte 0x00
