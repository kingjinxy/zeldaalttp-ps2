	THUMB_FUNC_START sub_0801F830
sub_0801F830: @ 0x0801F830
	push {r4,lr}
	add r4, r0, #0
	ldr r0, [r4, #100]
	cmp r0, #0
	beq _0801F84E
	bl sub_08044594
	add r1, r0, #0
	ldr r0, [r4, #100]
	cmp r0, r1
	beq _0801F870
	mov r0, #2
	strb r0, [r4, #20]
	str r1, [r4, #100]
	b _0801F864
_0801F84E:
	add r0, r4, #0
	mov r1, #120
	mov r2, #80
	bl sub_08009E6C
	add r1, r0, #0
	str r1, [r4, #100]
	cmp r1, #0
	beq _0801F870
	mov r0, #2
	strb r0, [r4, #20]
_0801F864:
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
_0801F870:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801F830

	.byte 0x00
	.byte 0x00
